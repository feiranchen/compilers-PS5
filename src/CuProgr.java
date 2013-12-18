import java.util.ArrayList;
import java.util.List;
import java.util.Map.Entry;


public abstract class CuProgr {
	protected String text = "";
	protected String ctext = "";
	//the first node of CFG
	protected CuStat entry = null;
	protected ArrayList<CuStat> nodes = new ArrayList<CuStat>();
	@Override public String toString() {
		return text;
	}
	//added for project 5
	public void toHIR() {}
	public void buildCFG() {}
	//added for project 4
	protected List<String> newVars = new ArrayList<String>();
	//new functions
	public void add_prg(CuProgr p){}
	public void add_lastStat(CuStat s) {}
	
	public void calculateType(CuContext context) throws NoSuchTypeException {}
	
	public abstract String toC(ArrayList<String> localVars);
	
	public void buildSets() {}
	
	public void setUseDef() {}
	
	public void printHIR() {}
}

class FullPrg extends CuProgr {
	List<CuProgr> elements = new ArrayList<CuProgr>();
	CuStat s;
	List<CuStat> statements = new ArrayList<CuStat>();
	public void add_prg(CuProgr p){
		elements.add(p);
	}
	public void add_lastStat(CuStat s) {
		this.s = s;
	}
	@Override public void toHIR() {
		for (CuProgr pr : elements) 
			pr.toHIR();
			s = s.toHIR();
		if (Helper.DEBUG) {
			System.out.println(s.toString());
		}
	}
	
	@Override public void printHIR() {
		for (CuProgr pr : elements) 
			pr.printHIR();
		System.out.println(s.toString());
	}
	
	@Override public void buildCFG()  {	
		//HashMap<CuStat, CuProgr> stFun = new 
		for (CuProgr pr : elements) {
			if (pr instanceof ClassPrg) {
				//TO Do, probably never do
			}
			else if (pr instanceof FunPrg) {
				pr.buildCFG();
			}
			else {
				statements.add(((StatPrg)pr).stat);
			}
		}
		statements.add(s);
		super.entry = statements.get(0).getFirst();
		//the same way as dealing with stats
		CuStat temp = new Stats(statements);
		temp.buildCFG();
	}
	
	@Override public void buildSets() {
		boolean nothingDies = false;
		//first do functions, because we need to know the global variables that
		//each function uses
		for (CuProgr pr : elements) {
			if (pr instanceof ClassPrg) {
				//TO Do, probably never do
			}
			else if (pr instanceof FunPrg) {
				((FunPrg) pr).statement.setUseDef();
				pr.nodes = Helper.buildSet(pr.entry);
				
				nothingDies = false;
				while (!nothingDies) {
					nothingDies = true;
					for (CuStat cs : pr.nodes) {
						cs.resetInOutSet();
					}
					pr.nodes = Helper.buildSet(pr.entry);
					for (CuStat cs : pr.nodes) {
						if (cs.dies())
							nothingDies = false;
					}
				}
				ArrayList<String> gvars_used = new ArrayList<String>();
				for (String str : pr.entry.inV) {
					//for in set elements, if it is not in the argument list, it 
					//should be a global variable
					if (!((FunPrg) pr).typeScheme.data_tc.keySet().contains(str)) {
						gvars_used.add(str);
					}
				}
				Helper.fun_gvars.put(((FunPrg) pr).name, gvars_used);
				
				//global variables should all go out
				CuStat lastnode = ((FunPrg) pr).statement.getLast();
				if (Helper.DEBUG) {
					System.out.println("last node of the function is " + lastnode.toString());
				}
				for(String str : gvars_used) {
					if (!lastnode.useV.contains(str)) {
						lastnode.useV.add(str);
					}
					//if (!lastnode.outV.contains(str)) {
					//	lastnode.outV.add(str);
					//}
				}
				//needs to build set again
				pr.nodes = Helper.buildSet(pr.entry);
				//added it to outV so that they won't get deallocated
				for(String str : gvars_used) {
					if (!lastnode.outV.contains(str)) {
						lastnode.outV.add(str);
					}
				} 
				
				
				//if the argument variable is not in the in set, put it in the in set
				for (String str : ((FunPrg) pr).typeScheme.data_tc.keySet()) {
					if (!pr.entry.inV.contains(str)) {
						pr.entry.inV.add(str);
					}
				}
			}
		}
		
		//first build the use def sets
		//the same way as dealing with stats
		CuStat temp = new Stats(statements);
		temp.setUseDef();
		
		//next, iteratively build the in out sets
		nodes = Helper.buildSet(entry);
		//dead code elimination
		nothingDies = false;
		while (!nothingDies) {
			nothingDies = true;
			for (CuStat cs : nodes) {
				cs.resetInOutSet();
			}
			nodes = Helper.buildSet(entry);
			for (CuStat cs : nodes) {
				if (cs.dies())
					nothingDies = false;
			}
		}
		
	}
	
	@Override public String toC(ArrayList<String> localVars) {
		ArrayList<String> gVars = new ArrayList<String>();
		
		String fnClass_str = "", temp_str = "";
		for (CuProgr cp : elements) {
			if (cp instanceof ClassPrg || cp instanceof FunPrg) {
				//whenever we meet this, the previous ones becomes global variables
				for (String str : super.newVars) {
					if (!gVars.contains(str)) {
						gVars.add(str);
					}
				}
				//emtpy super.newVars
				super.newVars = new ArrayList<String>();
				fnClass_str += cp.toC(localVars);
			} 
			else {				
				temp_str += cp.toC(localVars);
				for (String str : cp.newVars) {
					if (!super.newVars.contains(str)) {
						super.newVars.add(str);
					}
				}
			}
		}
		//need to call toC first before using newVars		
		temp_str += s.toC(localVars);
		for(String str : s.newVars) {
			if (!super.newVars.contains(str)) {
				super.newVars.add(str);
			}
		}
		
		super.ctext = 
				  "#include \"cubex_main.h\"\n"
				+ "#include \"cubex_external_functions.h\"\n"
				+ "#include \"cubex_lib.h\"\n\n";
		
		//input is a global variable
		super.ctext += "Iterable* " + "input_" + "= NULL;\n"
				+ "int initialized_pqr = 0;\n";
		
    	for (String str : gVars) {
    		super.ctext += "void * " + str + " = NULL;\n";
    		temp_str = temp_str.replaceAll("void \\* " + str + " = NULL;\n", "");
    	}	
    	
		super.ctext +=  fnClass_str + "\n\n"
				+ "void* our_main()\n{\n";
		
    	for (String str : super.newVars) {
    		super.ctext += "void * " + str + " = NULL;\n";
    		temp_str = temp_str.replaceAll("void \\* " + str + " = NULL;\n", "");
    	}
    	
    	super.ctext += temp_str;
    	
    	super.ctext += "}\n\n\n"
    			+ "void cubex_main() {\n"
				+ "Iterable* ourMain, *temp;\n"
				+ "ourMain = (Iterable*) our_main();\n"
				+ "temp = ourMain;\n"
				+ "while(ourMain != NULL) {\n\t"
				+ "print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);\n\t"
				+ "ourMain = iterGetNext(ourMain);\n}\n"
				+ "freeIter(temp);\n}";
				
    	
		return super.ctext;
	}
	public void calculateType(CuContext context) throws NoSuchTypeException {
		
		for (int i=0; i<elements.size(); i++) {
			CuProgr prg = elements.get(i);
			if (prg instanceof FunPrg) {
				for (int j=i; j<elements.size(); j++) {
					CuProgr cur_prg = elements.get(j);
					if (cur_prg instanceof FunPrg) {
						//added by Yinglei, only check this when first add this in
						if (((FunPrg)cur_prg).inContext == false) {
							if (context.mFunctions.containsKey(((FunPrg)cur_prg).name)) {
								throw new NoSuchTypeException(Helper.getLineInfo());
							}
							else {
								context.updateFunction(((FunPrg)cur_prg).name, ((FunPrg)cur_prg).typeScheme);
							}
							((FunPrg)cur_prg).inContext = true;
						}
						else {
							//else, do nothing
						}						
					}
					//if not function
					else {
						break;
					}
				}
			}
			prg.calculateType(context);
		}
		
		/*for (CuProgr prg1 : elements) {
			
			prg1.calculateType(context);
			
		}*/
		HReturn re = this.s.calculateType(context);
		Helper.P("______%s, %s, %s, __%s__", re, re.b, re.tau, Helper.getLineInfo());
		if (!re.tau.isSubtypeOf(new Iter(CuType.string)) || (re.b== false)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
	}
	
	
}

class ClassPrg extends CuProgr {
	CuClass c; 
	public ClassPrg (CuClass c) {
		//System.out.println("in class program constructor");
		this.c = c;
		super.text = c.toString();
		//System.out.println("exit class program constructor");
	}
	@Override public void calculateType(CuContext context) throws NoSuchTypeException {
		//Yinglei's guess it that depends on its detailed type (class/interface),
		//it will use the correct function and change the context properly
		//System.out.println("in class program");
		context.mergeVariable();
		c.calculateType(context);
		//System.out.println("in class program, end");
	}
	public String toC(ArrayList<String> localVars) {
		return c.toC();
	}
}

class FunPrg extends CuProgr {
	//used for printing in project 2
	List<String> fun; // need to change
	//used for type checking in project 3
	String name;
	CuTypeScheme typeScheme;
	CuStat statement;
	
	//added by Yinglei in pa5 fixing--type checking
	boolean inContext = false;

	public FunPrg(CuVvc var, CuTypeScheme ts, CuStat s) {
		//System.out.println("in fun program constructor, begin");
		//String t = String.format("fun %s %s %s", var.toString(), ts.toString(), s.toString());
		//fun.add(t);
		this.name = var.toString();
		this.typeScheme = ts;
		this.statement = s;
		//System.out.println("in fun program constructor, end");
	}
	
	@Override public void toHIR() {
		this.statement = this.statement.toHIR();
		if (Helper.DEBUG) {
			System.out.println("fun " + name + this.typeScheme.toString() + "{\n");
			System.out.println(this.statement.toString());
			System.out.println("}\n");
		}
	}
	
	@Override public void printHIR() {
		System.out.println("fun " + name + this.typeScheme.toString() + "{\n");
		System.out.println(this.statement.toString());
		System.out.println("}\n");
	}
	
	@Override public void buildCFG() {
		super.entry = this.statement.getFirst();
		this.statement.buildCFG();
	}
	
	@Override public void setUseDef() {
		this.statement.setUseDef();
	}
	
	@Override public String toString() {
		return Helper.printList("", fun, "", "");
	}
	@Override  public void calculateType(CuContext context) throws NoSuchTypeException {
Helper.P("in func program " + name);
		//System.out.println(this.statement.toString());
		//update the function context
		context.mergeVariable();
		//added by Yinglei, only check this when first add this in
		if (this.inContext == false) {
			if (context.mFunctions.containsKey(this.name)) {
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
			context.updateFunction(this.name, this.typeScheme);
		}
		//type check typeschemes and statements
		this.typeScheme.calculateType(context);
		CuContext temp_context = new CuContext (context);
		temp_context.updateKc(this.typeScheme.data_kc);
		for(String cur_str : this.typeScheme.data_tc.keySet())
		{
			if(context.mVariables.containsKey(cur_str)){
				throw new NoSuchTypeException(Helper.getLineInfo());
			}
		}
		temp_context.updateMutType(this.typeScheme.data_tc);
		HReturn re = this.statement.calculateType(temp_context);
		if (re.b == false) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		if (!re.tau.isSubtypeOf(this.typeScheme.data_t)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
	}
	@SuppressWarnings("unchecked")
	public String toC(ArrayList<String> localVars){
		StringBuilder sb= new StringBuilder();
		StringBuilder inputs=new StringBuilder();
		Helper.cFunType.put(name, typeScheme.data_t.id);
		ArrayList<String> local=new ArrayList<String>();
		Helper.funArgList	   =(ArrayList<String>) localVars.clone();
		
		sb.append("void* "+name.toString()+"(");
		String delim = "";
		for (Entry<String, CuType> e : typeScheme.data_tc.entrySet()){
			inputs.append(delim).append("void *"+e.getKey());
			delim=" , ";
			Helper.cVarType.put(e.getKey(), e.getValue().id);
			Helper.funArgList.add(e.getKey());
		}
		sb.append(inputs);
		sb.append(") {\n");
		for (String str : this.typeScheme.data_tc.keySet()) {
			sb.append(Helper.incrRefCount(str));
		}
		sb.append(statement.toC(local));
		sb.append("}\n");
		//added by Yinglei, when we get out of function, should clear this because this is 
		//a global list
		Helper.funArgList = new ArrayList<String>();
		return sb.toString();
	}

}

class StatPrg extends CuProgr {
	public CuStat stat;
	public StatPrg(CuStat s) {
		//System.out.println("in statement program constructor");
		this.stat = s;
		super.text = s.toString();
	}
	@Override public void toHIR() {
		stat = stat.toHIR();
		if (Helper.DEBUG) {
			System.out.println(stat.toString());
		}
	}
	@Override public void printHIR() {
		System.out.println(stat.toString());
	}
	@Override public String toC(ArrayList<String> localVars) {
		super.ctext = stat.toC(localVars);
		super.newVars = stat.newVars;
		return super.ctext;
	}
	@Override public void calculateType(CuContext context) throws NoSuchTypeException {
		//System.out.println("in statement program");
		HReturn re = stat.calculateType(context);
		//System.out.println("before checking return type, type is "+re.tau.id);
		CuType dtype= new Iter(CuType.string);
		//System.out.println("created type iterable of string ");
		//final tau should be a subtype of iterable string
		if (!re.tau.isSubtypeOf(dtype)) {
			//System.out.println("type is not iterable of string");
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
	}
	
}
