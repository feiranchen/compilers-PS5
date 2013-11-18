import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.LinkedHashMap;
import java.util.Map.Entry;

public abstract class CuClass {
	protected String text = "";
	protected StringBuilder def=new StringBuilder();
	protected StringBuilder fun=new StringBuilder();
	protected StringBuilder body=new StringBuilder();
	Map<String, CuType> fieldTypes=new LinkedHashMap<String,CuType>();
	List<CuExpr>        superArg = new ArrayList<CuExpr>();
	protected StringBuilder vtable=new StringBuilder();
	
	String name;
	CuType            superType = new Top();	
	List<String>       kindCtxt = null;
	Map<String,CuTypeScheme> mFunctions = new HashMap<String,CuTypeScheme>();
	HashMap<String, CuFun>  funList = new HashMap<String, CuFun>();

	public void add(List<CuExpr> s) {}
	public void addSuper(CuType t) {}
	public void add(CuStat s) {}
	public void add(String v, CuTypeScheme ts, CuStat s) {}
	public void add(String v_name, CuTypeScheme ts) {}
	public void add(CuVvc v_name, CuTypeScheme ts) {}
	public boolean isInterface() {return false; }
	public CuClass calculateType(CuContext context) throws NoSuchTypeException { return this;}
	public abstract String toC();

	@Override public String toString() {
		return text;
	}
}

class Cls extends CuClass {
	//List<CuType> appliedTypePara=new ArrayList<CuType>();
	List<CuStat> classStatement = new ArrayList<CuStat>();
	//private static final Exception NoSuchTypeExpression() = null;

	public Cls(String clsintf, List<String> kc, LinkedHashMap<String, CuType> tc) {
		super.name=clsintf;
		super.kindCtxt=kc;
		this.fieldTypes=tc;

		if (!name.equals("Boolean")&&!name.equals("Integer")&&
				!name.equals("Character")&&!name.equals("String")&&!name.equals("Iterable")){
			//initializor super field
			Helper.cFunType.put("init_"+name, "void");
			List<CuType> cur_types = new ArrayList<CuType>();
			for (Entry e : fieldTypes.entrySet()) {
				cur_types.add((CuType) (e.getValue()));
			}
			Helper.funGenType.put("init_"+name, new TypeScheme(kindCtxt, fieldTypes, 
					new VClass(name,cur_types)));
			fun.append("void* "+"init_"+name+"(void* subclass){");
			String delim="";
			StringBuilder temp2=new StringBuilder();
			int idx=0;
			if (!superArg.isEmpty()){
				for (Entry<String, CuType> e : fieldTypes.entrySet()){
					temp2.append(String.format("subclass->"+e.getKey()+"="+superArg.get(idx)+";\n"));
					Helper.cVarType.put(e.getKey(), e.getValue().id);
					idx++;
				}
			}
			fun.append(temp2.toString());
			fun.append("}\n");
			
			//constructor
			Helper.cFunType.put("new_"+name, name);
			Helper.funGenType.put("init_"+name, null);
			fun.append("void* "+"new_"+name+"(");
			delim="";
			StringBuilder temp3=new StringBuilder();
			for (Entry<String, CuType> e : fieldTypes.entrySet()){
				temp3.append(delim).append("void* "+e.getKey());
				delim=", ";
				Helper.cVarType.put(e.getKey(), e.getValue().id);
			}
			fun.append(temp3);
			fun.append(") {\n");
			String tempName=Helper.getVarName();
			fun.append(String.format("%s* %s=x3malloc(sizeof(%s));\n",name,tempName,name));
			fun.append(String.format("init_%s(%s);\n",name,tempName));
			String tempClass=Helper.cClassSuper.get(name);
			while (tempClass!=null&&!tempClass.equals("Thing")){
				tempClass=Helper.cClassSuper.get(tempClass);
				fun.append(String.format("init_%s(%s);\n",name,tempName));
			}
			fun.append(tempName+"->"+name+"_Tbl=x3malloc(sizeof("+name+"Table)); \n");
			String[] lines = vtable.toString().split("\n");
			if (!lines[0].equals("")){
				for (String s1: lines){
					fun.append(tempName+"->"+s1+"\n");
				}
			}
			fun.append("\t\treturn "+tempName+"; \n");
			fun.append("}\n");
		}
	}


	@Override public void add (CuStat s) {
		classStatement.add(s);}

	//TODO: grab all the methods here
	@Override public void addSuper (CuType tt) {
		super.superType = tt;}
	
	@Override public void add(String v, CuTypeScheme ts, CuStat s) {
		Function temp=new Function(v,ts,s);
		super.funList.put(v, temp);
		super.mFunctions.put(v, ts);
		
		//code Gen
		StringBuilder localprint=new StringBuilder();
		for (Entry<String, CuType> e : fieldTypes.entrySet()){
			localprint.append("void* "+e.getKey()+"=(("+name+"*)this)->"+e.getKey()+";\n");
		}
		
		fun.append(temp.toC(name,localprint.toString()));
		vtable.append(String.format("%s_Tbl->%s=&%s; \n", name, v, name+"_"+v));
//		StringBuilder tempSB=new StringBuilder().append("void* this");
//		for (Entry<String, CuType> e : fieldTypes.entrySet()){
//			tempSB.append(", ").append("void* "+e.getKey());
//			Helper.cVarType.put(e.getKey(), e.getValue().id);
//		}
//		fun.append(tempSB);
//		fun.append(") {\n");
		
		Helper.cFunType.put(name+"_"+v, ts.data_t.id);
		Helper.funGenType.put(name+"_"+v, ts);
		if (ts.data_t.id.equals("Iterable")){
			Helper.iterType.put(name+"_"+v, ts.data_t.iniArgs.get(0).id);
		}
	}
	
	@Override public void add(List<CuExpr> s) {
		this.superArg = s;
	}
	
	@Override public CuClass calculateType(CuContext context) throws NoSuchTypeException { 
		//System.out.println("in class calculateType, begin " + super.name);
		//we don't want to modify context
		CuContext cur_context = new CuContext(context);
		cur_context.mKind = super.kindCtxt;
		//we need to type check tau 
		//System.out.println("before super type check " + superType.toString());
		CuType tau_hat = super.superType.calculateType(cur_context);
		//System.out.println("after super type check " + superType.toString() + " tau_hat is " + tau_hat.toString());
		
		if (!(superType instanceof Top) && !(superType instanceof VClass) && !(superType instanceof VTypeInter)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		//make a copy of current function list, because we only need to type check these functions
		Map<String, CuFun> funList_cpy = new HashMap<String, CuFun>();
		funList_cpy.putAll(funList);
		
		
		if (superType instanceof VClass){
			Map<String, CuFun> superfunLst = cur_context.mClasses.get(superType.id).funList;
			for (Map.Entry<String, CuFun> e : superfunLst.entrySet()){
				//check signature if already exists
				if (funList.containsKey(e.getKey())){
					
					//check signature, but not here
					//e.getValue().ts.calculateType(context);
					//if (!e.getValue().ts.equals(context.mFunctions.containsKey(e.getKey()))){
					//check whether the 
					////I don't think we should check here because you can not check two tyscheme equivalence with generic parames
					if (!e.getValue().ts.sameAs(e.getValue().ts, cur_context)){
						//System.out.println("typescheme doesn't match " + e.getValue().ts.toString());
						throw new NoSuchTypeException(Helper.getLineInfo());
					}
					//System.out.println("come to specific point 1");
					if (funList.get(e.getKey()).funBody instanceof EmptyBody) {
						funList.get(e.getKey()).funBody = e.getValue().funBody;
						//code Gen
						vtable.append(String.format("%sTbl->%s=&(%sTable->%s) \n", name, e.getKey(), superType.id,superType.id,e.getKey()));
						Helper.cFunType.put(name+"_"+e.getKey(), e.getValue().ts.data_t.id);
						Helper.funGenType.put(name+"_"+e.getKey(), e.getValue().ts);
						if (e.getValue().ts.data_t.id.equals("Iterable")){
							Helper.iterType.put(name+"_"+e.getKey(), e.getValue().ts.data_kc.get(0));
						}
					}
						
					//System.out.println("come to specific point 2");
					//in classes, every function declared has a body
				}else{//add method if it doesn't already exist
					super.mFunctions.put(e.getKey(),e.getValue().ts);
					super.funList.put(e.getKey(), e.getValue());
					//codeGen
					vtable.append(String.format("%sTbl->%s=&(%sTable->%s) \n", name, e.getKey(), superType.id,superType.id,e.getKey()));
					Helper.cFunType.put(name+"_"+e.getKey(), e.getValue().ts.data_t.id);
					Helper.funGenType.put(name+"_"+e.getKey(), e.getValue().ts);
					if (e.getValue().ts.data_t.id.equals("Iterable")){
						Helper.iterType.put(name+"_"+e.getKey(), e.getValue().ts.data_kc.get(0));
					}
				}
			}
			Helper.cClassSuper.put(name, superType.id);
		}
		else if (superType instanceof VTypeInter) {
			//System.out.println("merging functions, super type is inter " + superType.toString());
			for (CuType t: superType.parentType){
				Map<String, CuFun> superfunLst= cur_context.mClasses.get(t.id).funList;
				for (Map.Entry<String, CuFun> e : superfunLst.entrySet()){
					//check signature if already exists
					if (funList.containsKey(e.getKey())){
						//check signature, but not here
						//e.getValue().ts.calculateType(context);
						//if (!e.getValue().ts.equals(context.mFunctions.containsKey(e.getKey()))){
						if (!e.getValue().ts.sameAs(e.getValue().ts, cur_context)){
							throw new NoSuchTypeException(Helper.getLineInfo());
						}
						//use the first method implementation
						if (funList.get(e.getKey()).funBody instanceof EmptyBody) {
							funList.get(e.getKey()).funBody = e.getValue().funBody;
						}
					}else{//add method if it doesn't already exist
						super.mFunctions.put(e.getKey(),e.getValue().ts);
						super.funList.put(e.getKey(), e.getValue());
					}
				}
			}
			Helper.cClassSuper.put(name, superType.parentType.get(0).id);
		}
		//System.out.println("succeeded merging functions");
		
		//here, we check all the function names, they should not appear in context's mfunctions
		if (cur_context.mFunctions.containsKey(super.name)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		
		for (String method_name : super.mFunctions.keySet()) {
			if (cur_context.mFunctions.containsKey(method_name)) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
		
		context.updateClass(name, this);
		cur_context.updateClass(name, this);
		//also need to update the function context, delta prime in figure 10
		List<CuType> cur_types = new ArrayList<CuType>();
		for (String str : super.kindCtxt) {
			cur_types.add(new VTypePara(str));
		}
		CuType re_type = new VClass(super.name, cur_types);
		//every time we create a new type, we call calculate type to set up its parentType
		re_type.calculateType(cur_context);
		CuTypeScheme temp_ts = new TypeScheme(super.kindCtxt, this.fieldTypes , re_type);
		context.updateFunction(super.name, temp_ts);
		cur_context.updateFunction(super.name, temp_ts);
		
		//now type check each typescheme
		for (CuFun iter : funList_cpy.values()) {
			iter.ts.calculateType(cur_context);
		}
			
		//type checks gamma hat
		for (CuType ct : this.fieldTypes.values()) {
			ct.calculateType(cur_context);
		}
		//we should not pass this reference
		cur_context.mMutVariables = new LinkedHashMap<String,CuType>(this.fieldTypes);
		for (CuStat s :classStatement) {
			HReturn re = s.calculateType(cur_context);
			//class initializing statements can not have returns
			if (!re.tau.isBottom()) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
			
		cur_context.mergeVariable();
			
		if (!tau_hat.id.equals(CuVvc.TOP)) {
			//System.out.println("in CuClass cls " + super.name + " point xx");
			CuExpr temp_expr = new VcExp(tau_hat.id, tau_hat.iniArgs, this.superArg);
			CuType retype = temp_expr.calculateType(cur_context);
			if (!retype.equals(tau_hat)) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
		//System.out.println("in CuClass cls " + super.name + " point x");
			
		for (CuFun iter : funList_cpy.values()) {
			List<String> theta_bar = iter.ts.data_kc;
			for (String str_iter : theta_bar) {
				if (super.kindCtxt.contains(str_iter)) {
					throw new NoSuchTypeException(Helper.getLineInfo());
				}
			}
		}
			
		/* this should be s_hat instead of s
		for (CuStat s :classStatement) {
			if (!s.calculateType(context).b
					||s.calculateType(context).tau.isSubtypeOf(s.calculateType(context).tau)) 
				throw new NoSuchTypeException(Helper.getLineInfo());}
		*/
		
		cur_context.mFunctions.putAll(mFunctions);
		for (CuFun iter : funList_cpy.values()) {
			CuTypeScheme ts = iter.ts;
			CuContext temp = new CuContext(cur_context);
			temp.mKind.addAll(ts.data_kc);
			for (String cur_str : ts.data_tc.keySet()) {
				if (temp.inVar(cur_str)) {
					throw new NoSuchTypeException(Helper.getLineInfo());
				}
			}
			temp.mMutVariables = new HashMap<String,CuType>(ts.data_tc);
			//System.out.println("fun body is" + iter.funBody.toString());
			HReturn re = iter.funBody.calculateType(temp);
			//System.out.println("b is " + re.b + re.tau.toString() + "data_t is " + ts.data_t.toString());
			if (re.b == false || !re.tau.isSubtypeOf(ts.data_t)) {
				//re.tau.calculateType(cur_context);
				//System.out.println("return type doesn't match, b is " + re.b + re.tau.toString());
				//System.out.println(re.tau.parentType.toString());
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
			//System.out.println("succeed " + iter.toString());
		}
		
		//check every function has an implemention
		for (CuFun iter_fun : super.funList.values()) {
			if (iter_fun.funBody == null || iter_fun.funBody instanceof EmptyBody) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
		
		//System.out.println("in class calculateType, end " + super.name);
		return this;
	}
	

	
	@Override public String toString() {
		/*return String.format("class %s %s %s extends %s { %s super ( %s ) ; %s }", 
				super.name, Helper.printList("<", super.kindCtxt, ">", ","), Helper.printMap("(", this.fieldTypes, ")", ","), superType.toString(), 
				Helper.printList("", classStatement, "", ""), Helper.printList("(", this.superArg, ")", ","), Helper.printList("", fun, "", ""));
	    */
		return "to string messed up";
	}

	public String toC(){
		
		
		def.append("typedef struct {\n");
		for (Entry<String, CuFun> e: funList.entrySet()){
			StringBuilder signature=new StringBuilder();
			String delim=",";
			for (Entry<String, CuType> e1 : e.getValue().ts.data_tc.entrySet()){
				signature.append(delim).append("void* "+e1.getKey());
				delim=",";
			}
			def.append("		void* (*"+e.getKey()+")(void* this"+signature.toString()+");\n");
		}
		def.append("			} "+name+"Table;\n");
		
		def.append("typedef struct {\n");
		def.append("\tint  nref;\n");
		def.append("\t"+name+"Table* "+name+"_Tbl;\n");
		for (Entry<String,CuType> e :fieldTypes.entrySet()){
			def.append("\tvoid* "+e.getKey()+";\n");
		}
		def.append("\t\t} "+name+";\n");
		
		
		
		return def.toString()+fun.toString();
	}
	
}

class Intf extends CuClass{
	
	public Intf (String iname, List<String> kname){
		super.name = iname;
		super.kindCtxt = kname;
		
		//for printing
		text = "interface " + name.toString() + " <";
		for (String s : kindCtxt) {
			text += " " + s.toString();
		}
		text += " > extends";
	}
	@Override
	public void addSuper (CuType tt) throws NoSuchTypeException{
		super.superType = tt;
	}
	@Override public void add(String v, CuTypeScheme ts, CuStat s) {
		super.funList.put(v,new Function(v,ts,s));
		super.mFunctions.put(v, ts);
	}
	
	@Override public CuClass calculateType(CuContext context) throws NoSuchTypeException { 
		//System.out.println("in interface calculateType, begin " + super.name);
		//we don't want to modify context
		CuContext cur_context = new CuContext(context);
		cur_context.mKind = super.kindCtxt;
		//we need to type check tau 
		CuType tau_hat = super.superType.calculateType(cur_context);
		if (!tau_hat.id.equals(CuVvc.TOP)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		
		if (!(superType instanceof Top) && !(superType instanceof VClass) && !(superType instanceof VTypeInter)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		//make a copy of current function list, because we only need to type check these functions
		Map<String, CuFun> funList_cpy = new HashMap<String, CuFun>();
		funList_cpy.putAll(funList);
		
		if (superType instanceof VClass){
			Map<String, CuFun> superfunLst = cur_context.mClasses.get(superType.id).funList;
			for (Map.Entry<String, CuFun> e : superfunLst.entrySet()){
				//check signature if already exists
				if (funList.containsKey(e.getKey())){
					//check signature, but not here
					//e.getValue().ts.calculateType(context);
					//if (!e.getValue().ts.equals(context.mFunctions.containsKey(e.getKey()))){
					//I don't think we should check here because you can not check two tyscheme equivalence with generic parames
					if (!e.getValue().ts.sameAs(e.getValue().ts, cur_context)){
						throw new NoSuchTypeException(Helper.getLineInfo());
					}
					//if this method doesn't have an implementation, but super interface has an implementation,
					//grab it
					if (funList.get(e.getKey()).funBody instanceof EmptyBody) {
						funList.get(e.getKey()).funBody = e.getValue().funBody;
					}
					//in classes, every function declared has a body
				}else{//add method if it doesn't already exist
					super.mFunctions.put(e.getKey(),e.getValue().ts);
					super.funList.put(e.getKey(), e.getValue());
				}
			}
		}
		else if (superType instanceof VTypeInter) {
			Helper.ToDo("Please check whether the parrentType is implmented correctly");
			for (CuType t: superType.parentType){
				Map<String, CuFun> superfunLst= cur_context.mClasses.get(t.id).funList;
				for (Map.Entry<String, CuFun> e : superfunLst.entrySet()){
					//check signature if already exists
					if (funList.containsKey(e.getKey())){
						//check signature, but not here
						//e.getValue().ts.calculateType(context);
						//if (!e.getValue().ts.equals(context.mFunctions.containsKey(e.getKey()))){
						//check whether the 
						//I don't think we should check here because you can not check two tyscheme equivalence with generic parames
						if (!e.getValue().ts.sameAs(e.getValue().ts, cur_context )){
							throw new NoSuchTypeException(Helper.getLineInfo());
						}
						//use the first implementation of inherited interfaces
						if (funList.get(e.getKey()).funBody instanceof EmptyBody) {
							funList.get(e.getKey()).funBody = e.getValue().funBody;
						}
					}else{//add method if it doesn't already exist
						super.mFunctions.put(e.getKey(),e.getValue().ts);
						super.funList.put(e.getKey(), e.getValue());
					}
				}
			}
		}
		
		//here, we check all the function names, they should not appear in context's mfunctions		
		for (String method_name : super.mFunctions.keySet()) {
			if (cur_context.mFunctions.containsKey(method_name)) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
		
		context.updateClass(name, this);
		cur_context.updateClass(name, this);
			
		//now type check each typescheme
		for (CuFun iter : funList_cpy.values()) {
			iter.ts.calculateType(cur_context);
		}
			
		for (CuFun iter : funList_cpy.values()) {
			List<String> theta_bar = iter.ts.data_kc;
			for (String str_iter : theta_bar) {
				if (super.kindCtxt.contains(str_iter)) {
					throw new NoSuchTypeException(Helper.getLineInfo());
				}
			}
		}
			
		/* this should be s_hat instead of s
		for (CuStat s :classStatement) {
			if (!s.calculateType(context).b
					||s.calculateType(context).tau.isSubtypeOf(s.calculateType(context).tau)) 
				throw new NoSuchTypeException(Helper.getLineInfo());}
		*/
		
		cur_context.mFunctions.putAll(mFunctions);
		for (CuFun iter : funList_cpy.values()) {
			//only check those that have function body
			if (!(iter.funBody instanceof EmptyBody)) {
				CuTypeScheme ts = iter.ts;
				CuContext temp = new CuContext(cur_context);
				temp.mKind.addAll(ts.data_kc);
				for (String cur_str : ts.data_tc.keySet()) {
					if (temp.inVar(cur_str)) {
						throw new NoSuchTypeException(Helper.getLineInfo());
					}
				}
				temp.mMutVariables = ts.data_tc;
				HReturn re = iter.funBody.calculateType(temp);
				if (re.b == false || !re.tau.isSubtypeOf(ts.data_t)) {
					throw new NoSuchTypeException(Helper.getLineInfo());
				}
			}
		}
		//System.out.println("in interface calculateType, end " + super.name);
		return this;
	}
	
	@Override public boolean isInterface() {return true; }
	
	@Override public String toString() {
		/*return String.format("class %s %s %s extends %s { %s super ( %s ) ; %s }", 
				super.name, Helper.printList("<", super.kindCtxt, ">", ","), Helper.printMap("(", this.fieldTypes, ")", ","), superType.toString(), 
				Helper.printList("", classStatement, "", ""), Helper.printList("(", this.superArg, ")", ","), Helper.printList("", fun, "", ""));
	    */
		return "to string messed up";
	}

	public String toC(){
		return "";
	}
}


//======Class init=========

class VBoolean extends Cls {
	Boolean v=false;
	public VBoolean() {
		super("Boolean", new ArrayList<String>(), new LinkedHashMap<String, CuType>());
		//if (val instanceof Boolean) { v=val; }
		//else { throw new NoSuchTypeException(Helper.getLineInfo());}
		//Just one example, we also need to add other methods
		CuTypeScheme ts;
		ts = new TypeScheme(new ArrayList<String>(), new LinkedHashMap<String, CuType>(), CuType.bool);
		super.mFunctions.put("negate", ts);
		HashMap<String, CuType> arg = new LinkedHashMap<String, CuType>();
		arg.put("that", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("and", ts);
		super.mFunctions.put("or", ts);
		super.mFunctions.put("equals", ts);
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("upper", CuType.bool);
		arg.put("includeLower", CuType.bool);
		arg.put("includeUpper", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, new Iter(CuType.bool));
		super.mFunctions.put("through", ts);
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("inclusive", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, new Iter(CuType.bool));
		super.mFunctions.put("onwards", ts);
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("that", CuType.bool);
		arg.put("strict", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("lessThan", ts);
		
	}
    
	public boolean calculateType() { return v; }
}

class VInteger extends Cls {
	Integer v=0;
	public VInteger() {
		super("Integer", new ArrayList<String>(), new LinkedHashMap<String, CuType>());
		//if (val instanceof Integer) { v=val; }
		//else { throw new NoSuchTypeException(Helper.getLineInfo());}
		CuTypeScheme ts;
		ts = new TypeScheme(new ArrayList<String>(), new LinkedHashMap<String, CuType>(), CuType.integer);
		super.mFunctions.put("negative", ts);
		
		HashMap<String, CuType> arg = new LinkedHashMap<String, CuType>();
		arg.put("operator", CuType.integer);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.integer);
		super.mFunctions.put("times", ts);
		super.mFunctions.put("plus", ts);
		super.mFunctions.put("minus", ts);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("equals", ts);
		ts = new TypeScheme(new ArrayList<String>(), arg, new Iter(CuType.integer));
		super.mFunctions.put("divide", ts);
		super.mFunctions.put("modulo", ts);		
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("upper", CuType.integer);
		arg.put("includeLower", CuType.bool);
		arg.put("includeUpper", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, new Iter(CuType.integer));
		super.mFunctions.put("through", ts);
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("inclusive", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, new Iter(CuType.integer));
		super.mFunctions.put("onwards", ts);
		
		arg = new LinkedHashMap<String, CuType>();
		arg.put("that", CuType.integer);
		arg.put("strict", CuType.bool);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("lessThan", ts);
	}
	public VInteger calculateType() { return this; }
}

class VCharacter extends Cls {
	Character c;
	public VCharacter() {
		super("Character", new ArrayList<String>(), new LinkedHashMap<String, CuType>());
		//if (val instanceof Character) { c=val; }
		//else { throw new NoSuchTypeException(Helper.getLineInfo());}
		CuTypeScheme ts;
		ts = new TypeScheme(new ArrayList<String>(), new LinkedHashMap<String, CuType>(), CuType.integer);
		super.mFunctions.put("unicode", ts);
		
		HashMap<String, CuType> arg = new LinkedHashMap<String, CuType>();
		arg.put("that", CuType.character);
		ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("equals", ts);
	}
	public VCharacter calculateType() { return this; }
}

class VString extends Cls {
	String v="";
	public VString() {
		super("String", new ArrayList<String>(), new LinkedHashMap<String, CuType>());
		this.addSuper(new Iter(CuType.character));
		//if (val instanceof String) { v=val; }
		//else { throw new NoSuchTypeException(Helper.getLineInfo());}
		HashMap<String, CuType> arg = new LinkedHashMap<String, CuType>();
		arg.put("that", CuType.string);
		CuTypeScheme ts = new TypeScheme(new ArrayList<String>(), arg, CuType.bool);
		super.mFunctions.put("equals", ts);
	}

	public VString calculateType() { return this; }
}


class VIterable extends Cls {
	List<CuType> v;
	public VIterable(List<String> kc) {
		super("Iterable", kc, new LinkedHashMap<String, CuType>());
		//if (val instanceof List<CuType>) { v=val; }
		//else { throw new NoSuchTypeException(Helper.getLineInfo());}
	}
	public VIterable calculateType() { return this; }
}

