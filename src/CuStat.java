import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;


public abstract class CuStat {
	protected String text = "";
	protected String ctext = "";
	//added for project 4
	protected List<String> newVars = new ArrayList<String>();
	
	//added for project5
	protected List<String> outV = new ArrayList<String>();
	protected List<String> inV = new ArrayList<String>();
	protected List<String> useV = new ArrayList<String>();
	protected List<String> defV = new ArrayList<String>();
	
	protected List<CuStat> successors = new ArrayList<CuStat>();
	
	@Override public String toString() {
		return text;
	}
	public String toC(ArrayList<String> localVars) {
		return ctext;
	}
	public void add (CuStat st){}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		
		HReturn re = new HReturn();
		return re;
	}
	
	public void buildCFG() {}
	
	public CuStat getFirst() {
		return this;
	}
	
	public CuStat getLast() {
		return this;
	}
}

class AssignStat extends CuStat{
	private CuVvc var;
	private CuExpr ee;
	public AssignStat (CuVvc t, CuExpr e) {
		var = t;
		ee = e;
		super.text = var.toString() + " := " + ee.toString() + " ;";
	}
	public void buildCFG() {
		super.useV.addAll(ee.getUse());
		super.defV.addAll(ee.getDef());
		super.defV.add(var.toString());
	}
	@Override public String toC(ArrayList<String> localVars) {
		String exp_toC = ee.toC(localVars);
		Helper.cVarType.put(var.toString(), ee.getCastType());
		Helper.iterType.put(var.toString(), ee.getIterType());
		super.ctext ="\n\n\n";
		super.ctext += ee.construct();
		//the below sentence can be removed by higher level blocks
		if (!Helper.funArgList.contains(var.toString()))
			super.ctext += "void * " + var.toString() +" = NULL;\n";
		super.ctext += "if (" + var.toString() + "!= NULL) {\n";
		//check whether it is the last pointer pointing to the object, if yes, x3free memory
		super.ctext += "\tif ((*(int *)" + var.toString() + ") == 1)\n";
		super.ctext += "\t\tx3free(" + var.toString() + ");\n";
		super.ctext += "\telse\n";
		//decrement the reference count
		super.ctext += "\t(*(int *)" + var.toString() + ")--;\n";
		super.ctext += "}\n";
		//((int*) &test)[0]
		super.ctext += var.toString() + " = " + exp_toC + ";\n";
		//increase the new reference count
		super.ctext += "if (" + var.toString() + "!=NULL)\n";
		super.ctext += "\t(*(int *)" + var.toString() + ")++;\n";
		/*if (ee.isFunCall())
			super.ctext += var.toString() + " = " + ee.toC() + ";\n";
		else
			super.ctext += var.toString() + " = &" + ee.toC() + ";\n";  */
		if (!Helper.funArgList.contains(var.toString()))
			super.newVars.add(var.toString());
		if (!localVars.contains(var.toString()) && !Helper.funArgList.contains(var.toString()))
			localVars.add(var.toString());
		return super.ctext;
	}
	
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
Helper.P("assign stat begin " + ee.toString() );
		//System.out.println("In assig start");
		//System.out.println("var="+var.toString() + " expr="+ ee.toString());
		//check var is in immutable, type check fails
		if (context.inVar(var.toString())) {
			throw new NoSuchTypeException(Helper.getLineInfo()); 
		}
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();
		//System.out.println("In assig stat, before expr check");
		CuType exprType = ee.calculateType(tcontext);
Helper.P("ee type is " + exprType);
		//System.out.println("In assig stat, after expr check");
		context.updateMutType(var.toString(), exprType);
		HReturn re = new HReturn();
		re.b = false;
		re.tau = CuType.bottom;
		//System.out.println("In assignment statement end");
Helper.P("assign stat end " + ee.toString());
		return re;
	}
}

class ForStat extends CuStat{
	private CuVvc var;
	private CuExpr e;
	private CuStat s1;
	public ForStat(CuVvc v, CuExpr ee, CuStat ss) {
		var = v;
		e = ee;
		s1 = ss;
		super.text = "for ( " + var.toString() + " in " + e.toString() + " ) " + s1.toString();
	}
	@Override public void buildCFG() {
		//first, build use[n] and def[n]
		
		//the outer level has added the other branch to its successors
		//this is the fall through branch
		super.successors.add(s1.getFirst());
		s1.getLast().successors.add(this);
		//else, empty for statement won't have this loop there
		//recursive build CFG
		s1.buildCFG();
	}
	@Override public String toC(ArrayList<String> localVars)
	{
		String exp_toC = e.toC(localVars);
		super.ctext +="\n\n\n";
		super.ctext += e.construct();
		String itype = e.getIterType();
		/*if (e.getCastType().equals("String")) {
			String iter_name = Helper.getVarName();
			super.ctext += "Iterable *" + iter_name + ";\n";
			super.ctext += iter_name + " = strToIter( ((String *)" + exp_toC + ")->value, ((String *)" + exp_toC + ")->len);\n";
			exp_toC = iter_name;
			Helper.cVarType.put(iter_name, "Iterable");
			itype = "Character";
		}*/
		
		String iter_name1 = Helper.getVarName();
		super.ctext += "void *" + iter_name1 + ";\n";
		super.ctext += iter_name1 + " = " + exp_toC + ";\n";
		super.ctext += "if ("+ iter_name1 +"!=NULL) {\n";
		//no need for reference counting here
		//super.ctext += "(*(int *)" + iter_name1 + ")++;\n";
		super.ctext += "if (" + "(*((int *)(" + exp_toC +"+1))) == 0) {\n";
		//super.ctext += "(*(int *)" + iter_name1 + ")--;\n";
		super.ctext += iter_name1+ " = strToIter( ((String *)" + exp_toC + ")->value, ((String *)" + exp_toC + ")->len);\n";
		super.ctext += "}\n}\n";
		
		//exp_toC = iter_name1;
		Helper.cVarType.put(iter_name1, "Iterable");
		//itype = "Character";
		
		//added for v scoping
		super.ctext += "{\n";
		super.ctext += "\tvoid * " + var.toString() + "=" + iter_name1 + ";\n";
		Helper.cVarType.put(var.toString(), itype);
		String iter_name = Helper.getVarName();
		super.ctext += "\tIterable * " + iter_name + ";\n";
		super.ctext += "\twhile (" + var.toString() + "!=NULL) {\n";
		super.ctext += "\t\t" + iter_name + " = (Iterable *)" + var.toString() + ";\n";
		super.ctext += "\t\t" + var.toString() + " = " + iter_name + "->value;\n";
		super.ctext += "\t\t" + "(*((int *)" + var.toString() + "))++;\n";
		ArrayList<String> localVarsInFor = new ArrayList<String>(localVars);
		String s1ToC = s1.toC(localVarsInFor);
		String temp_str = s1ToC.replaceAll("void \\* " + var.toString() + " = NULL;\n", "");
		super.ctext += "\t\t" + temp_str;
		//some variables in localVarsIn are not newly created, so remove them before decrement ref count/deallocate
		for(String cur_str : localVars) {
			while (localVarsInFor.contains(cur_str)) {
				localVarsInFor.remove(cur_str);
			}
		}
		//newly added 
		if (localVarsInFor.contains(var.toString()))
			localVarsInFor.remove(var.toString());
		//now reference counting/x3free memory due to scoping
		for (String cur_str : localVarsInFor) {
			super.ctext += "\t\t" + "\n\n\n";
			super.ctext += "\t\t" + "if (" + cur_str + "!= NULL) {\n";
			//check whether it is the last pointer pointing to the object, if yes, x3free memory
			super.ctext += "\t\t\t" + "if ((*(int *)" + cur_str + ") == 1)\n";
			super.ctext += "\t\t\t\t" + "x3free(" + cur_str + ");\n";
			super.ctext += "\t\t\t" + "else\n";
			//decrement the reference count
			super.ctext += "\t\t\t\t" + "(*(int *)" + cur_str + ")--;\n";
			super.ctext += "\t\t" + "}\n";
		}
		super.ctext += "\t\t" + "(*(int *)" + var.toString() + ")--;\n";
		super.ctext += "\t\t" + var.toString() + " = iterGetNext(" + iter_name + ");\n";
		super.ctext += "\t" + "}\n";	
		//value is null now, so no need for deallocation
		super.ctext += "}\n";
		return super.ctext;
	}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		//System.out.println("in for stat, begin");
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();		
    	//check whether e is an iterable of tau
    	CuType eType = e.calculateType(tcontext);
Helper.P(String.format("FOR %s is %s<%s>", e, eType, eType.map));

 		Boolean flag = eType.isIterable();
    	if (flag != true) {
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	}
    	//eType.type = Helper.getTypeForIterable(eType.toString());
    	//var can't appear in mutable or immutable variables
    	if (context.inMutVar(this.var.toString()) || context.inVar(this.var.toString())) {
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	}
    	//System.out.println("etype is " + eType.toString());
    	CuType iter_type = eType.type;
    	//System.out.println("variable type is " + iter_type.id);
    	CuContext s_context = new CuContext(context);
    	s_context.updateMutType(this.var.toString(), iter_type);
    	HReturn re = s1.calculateType(s_context);
    	//System.out.println("return type is " + re.tau.id);
    	
    	//type weakening to make it type check
    	context.weakenMutType(s_context);
		
		re.b = false;
		//System.out.println("in for stat, end");
		return re;
	}
}

class IfStat extends CuStat{
	private CuExpr e;
	private CuStat s1=null;
	private CuStat s2=null;
	public IfStat (CuExpr ex, CuStat st) {
		this.e = ex;
		this.s1 = st;
		super.text = "if ( " + e.toString() + " ) " + s1.toString();
	}
	
    @Override public void add (CuStat st) {
    	s2 = st;
    	super.text += " else " + s2.toString();
    }
    
	@Override public void buildCFG() {
		s1.getLast().successors = super.successors;
		if (s2!=null) 
			s2.getLast().successors = super.successors;
		super.successors = new ArrayList<CuStat>();
		super.successors.add(s1.getFirst());
		if (s2!=null)
			super.successors.add(s2.getFirst());
		//recursively buildCFG
		s1.buildCFG();
		if (s2!=null)
			s2.buildCFG();
	}
    
    //for if statement, ctext is build here
    @Override public String toC(ArrayList<String> localVars) {
    	String exp_toC = e.toC(localVars);
		super.ctext ="\n\n\n";
    	super.ctext += this.e.construct();
    	ArrayList<String> s1_localVars = new ArrayList<String>(localVars);
    	ArrayList<String> s2_localVars = new ArrayList<String>(localVars);
    	String temp_s1 = s1.toC(s1_localVars);
    	String temp_s2 = "";
    	if (s2 != null) {
    		temp_s2 = s2.toC(s2_localVars);
        	//if we don't have s2, there won't be new vars
    		for (String str : s1.newVars) {
    			if (s2.newVars.contains(str)) {
    				super.newVars.add(str);
    			}
    		}
    		Iterator<String> i = s1_localVars.iterator();
    		while (i.hasNext()) {
    			String str = i.next();
    			if (s2_localVars.contains(str)) {
    				s2_localVars.remove(str);
    				if (!localVars.contains(str))
    					localVars.add(str);
    				i.remove();
    			}
    		}
    	}
    	for (String str : localVars) {
    		while (s1_localVars.contains(str))
    			s1_localVars.remove(str);
    		while (s2_localVars.contains(str))
    			s2_localVars.remove(str);  		
    	}
    	//dealing with scoping
    	for (String str : super.newVars) {
    		temp_s1 = temp_s1.replaceAll("void \\* " + str + " = NULL;\n", "");
    		temp_s2 = temp_s2.replaceAll("void \\* " + str + " = NULL;\n", "");
    		super.ctext += "void * " + str + " = NULL;\n";
    	}
    	if (e instanceof VvExp)
    		super.ctext += "if ( ((Boolean *)" + exp_toC + ")->value) {\n";
    	else
    		super.ctext += "if (" + exp_toC + ") {\n";
    	super.ctext += temp_s1;
		//now reference counting/x3free memory due to scoping
		for (String cur_str : s1_localVars) {
			super.ctext += "\n\n\n";
			super.ctext += "if (" + cur_str + "!= NULL) {\n";
			//check whether it is the last pointer pointing to the object, if yes, x3free memory
			super.ctext += "if ((*(int *)" + cur_str + ") == 1)\n";
			super.ctext += "x3free(" + cur_str + ");\n";
			super.ctext += "else\n";
			//decrement the reference count
			super.ctext += "(*(int *)" + cur_str + ")--;\n";
			super.ctext += "}\n";
		}
    	super.ctext += "}\n";
    	if (s2 != null) {
    		super.ctext += "else {\n";
    		super.ctext += temp_s2;
    		//now reference counting/x3free memory due to scoping
    		for (String cur_str : s2_localVars) {
    			super.ctext += "\n\n\n";
    			super.ctext += "if (" + cur_str + "!= NULL) {\n";
    			//check whether it is the last pointer pointing to the object, if yes, x3free memory
    			super.ctext += "if ((*(int *)" + cur_str + ") == 1)\n";
    			super.ctext += "x3free(" + cur_str + ");\n";
    			super.ctext += "else\n";
    			//decrement the reference count
    			super.ctext += "(*(int *)" + cur_str + ")--;\n";
    			super.ctext += "}\n";
    		}   		
    		super.ctext += "}\n";
    	}
    	return super.ctext;
    }
    
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
Helper.P("if begin, e is " + e.toString());
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();		
    	//check whether e is boolean
Helper.P(tcontext.mVariables.toString());
    	CuType eType = e.calculateType(tcontext);
Helper.P("e type is " + eType);
    	if (!eType.isBoolean()) {
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	}
    	CuContext temp_context1 = new CuContext (context);
    	
		HReturn re1 = s1.calculateType(temp_context1);
		//if we don't have s2, temp_context2 will simply be context
		CuContext temp_context2 = new CuContext (context);
		//default is false and bottom
		HReturn re2 = new HReturn();
		if (s2 != null) {
			re2 = s2.calculateType(temp_context2);		
		}
		
		//System.out.println("temp_c1: " + temp_context1.mMutVariables.toString());
		//System.out.println("temp_c2: " + temp_context2.mMutVariables.toString());
				
		temp_context1.weakenMutType(temp_context2);
		//we are passing reference, this is suppose to change
		context.mMutVariables = temp_context1.mMutVariables;
		
		//System.out.println("after weakining " + context.mMutVariables.toString());
		HReturn re_out = new HReturn();
		if (re1.b==false || re2.b==false) {
			re_out.b = false;
		}
		else {
			re_out.b = true;
		}
		re_out.tau = CuType.commonParent(re1.tau, re2.tau);
Helper.P("if end, e is " + e.toString());
		return re_out;
	}

}

class ReturnStat extends CuStat{
	private CuExpr e;
	public ReturnStat (CuExpr ee) {
		e = ee;
		super.text = "return " + e.toString() + " ;";
	}
	@Override public void buildCFG() {
		//return stat doesn't have any successors
		super.successors = new ArrayList<CuStat>();
	}
	@Override public String toC(ArrayList<String> localVars) {
		//now reference counting/x3free memory due to scoping
		super.ctext +="\n\n\n";
		String exp_toC = e.toC(localVars);
		super.ctext += e.construct();
		for (String cur_str : localVars) {
			super.ctext += "\n\n\n";
			super.ctext += "if (" + cur_str + "!= NULL) {\n";
			//check whether it is the last pointer pointing to the object, if yes, x3free memory
			//special treatment is e is a local variable, we only dereference if so
			if (!cur_str.equals(exp_toC)) {
				super.ctext += "if ((*(int *)" + cur_str + ") == 1)\n";
				super.ctext += "x3free(" + cur_str + ");\n";
				super.ctext += "else\n";
			}
			//decrement the reference count
			super.ctext += "(*(int *)" + cur_str + ")--;\n";
			super.ctext += "}\n";
		}
		super.ctext += "return " + exp_toC + ";\n";
		/*if (e.isFunCall())
			super.ctext += "return " + e.toC() + ";\n";
		else
			super.ctext += "return &" + e.toC() + ";\n";*/
		return super.ctext;
	}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
Helper.P("return begin " + e.toString());
		//System.out.println("in return stat, begin");
		HReturn re = new HReturn();
		re.b = true;
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();	
		re.tau = e.calculateType(tcontext);
Helper.P("e type is " + re.tau);
		//System.out.println("in return stat, exp is " + e.toString() + " end");
		return re;
	}
}

class Stats extends CuStat{
	public ArrayList<CuStat> al = new ArrayList<CuStat>();
	public Stats (List<CuStat> cu) {
		al = (ArrayList<CuStat>) cu;
		text = "{ " + Helper.listFlatten(al) + " }";
	}
	@Override public void buildCFG() {
		//build this connections first
		for(int i=0; i<(this.al.size()-1); i++) {
			al.get(i).successors.add(al.get(i+1));			
		}
		//recursively build connections for each elements
		for(int i=0; i<this.al.size(); i++)
			al.get(i).buildCFG();
	}
	@Override public CuStat getFirst() {
		//if empty, return itself
		if (al.size()==0)
			return this;
		return al.get(0);
	}
	@Override public CuStat getLast() {
		//if empty, return itself
		if (al.size()==0)
			return this;
		return al.get(al.size()-1);
	}
	@Override public String toC(ArrayList<String> localVars) {
		String temp_str = "";

		super.ctext ="\n\n\n";
		for(CuStat cs : al) {
			temp_str += cs.toC(localVars);
			//newVars are generated after toC call
			for (String str: cs.newVars) {
				if (!super.newVars.contains(str)) {
					super.newVars.add(str);
				}
			}
		}
		
		for(String str : super.newVars) {
			super.ctext += "void * " + str + " = NULL;\n";
		}

		for(String str : super.newVars) {
			temp_str = temp_str.replaceAll(("void \\* " + str + " = NULL;\n"), "");
		}

		super.ctext += temp_str;
		return super.ctext;
	}
	
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//System.out.println("in stats statement, begin");
		//System.out.println("number of elements: "+al.size());
		//default is false, bottom
		HReturn re = new HReturn();
		for (CuStat cs : al) {
			//System.out.println(cs.toString());
			HReturn temp = cs.calculateType(context);
			if (temp.b==true) {
				re.b = true;
			}
			//System.out.println("finished " + cs.toString() + "before common parrent");
			//System.out.println("re tau is " + re.tau.id + ", temp tau is " + temp.tau.id);
			re.tau = CuType.commonParent(re.tau, temp.tau);
			//System.out.println("finished " + cs.toString() + "after common parrent, common type is " + re.tau.id);
		}
		//System.out.println("in stats statement, end");
		return re;
	}
}

class WhileStat extends CuStat{
	private CuExpr e;
	private CuStat s1;
	public WhileStat (CuExpr ex, CuStat st){
		e = ex;
		s1 = st;
		text = "while ( " + e.toString() + " ) " + s1.toString();
	}
	//while is the same as for statement
	@Override public void buildCFG() {
		//the outer level has added the other branch to its successors
		//this is the fall through branch
		super.successors.add(s1.getFirst());
		s1.getLast().successors.add(this);
		//recursive build CFG
		s1.buildCFG();
	}
	@Override public String toC(ArrayList<String> localVars) {
		String exp_toC = e.toC(localVars);

		super.ctext +="\n\n\n";
		super.ctext += e.construct();
    	if (e instanceof VvExp)
    		super.ctext += "while (((Boolean *)" + exp_toC + ")->value) {\n";
    	else
    		super.ctext += "while (" + exp_toC + ") {\n";
		
		ArrayList<String> while_localVars = new ArrayList<String>(localVars);
		super.ctext += s1.toC(while_localVars);
		//some variables in localVarsIn are not newly created, so remove them before decrement ref count/deallocate
		for(String cur_str : localVars) {
			while (while_localVars.contains(cur_str)) {
				while_localVars.remove(cur_str);
			}
		}
		//now reference counting/x3free memory due to scoping
		for (String cur_str : while_localVars) {
			super.ctext += "\n\n\n";
			super.ctext += "if (" + cur_str + "!= NULL) {\n";
			//check whether it is the last pointer pointing to the object, if yes, x3free memory
			super.ctext += "if ((*(int *)" + cur_str + ") == 1)\n";
			super.ctext += "x3free(" + cur_str + ");\n";
			super.ctext += "else\n";
			//decrement the reference count
			super.ctext += "(*(int *)" + cur_str + ")--;\n";
			super.ctext += "}\n";
		}
		super.ctext += "}\n";
		return super.ctext;
	}
    public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();		
    	//check whether e is boolean
		//System.out.println("in while, before checking expr");
		//System.out.println(this.e.toString());
    	CuType eType = e.calculateType(tcontext);
    	//System.out.println("in while, after checking expr");
    	if (!eType.isBoolean()) {
    		//System.out.println("in while, expr is not boolean");
    		//System.out.println("in while, expr type is " + eType.id);
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	} 
    	CuContext s_context = new CuContext(context);
    	HReturn re = s1.calculateType(s_context);   	
    	//type weakening to make it type check
    	context.weakenMutType(s_context);
    	re.b = false;
    	return re;
    }
}

class EmptyBody extends CuStat {
	public EmptyBody(){
		text=" ;";
	}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//default is false and bottom
		return new HReturn();
	}
} 
