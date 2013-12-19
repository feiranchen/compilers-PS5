import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;


public abstract class CuStat {
	protected String text = "";
	protected String ctext = "";
	
	protected boolean dead = false;
	//added for project 4
	protected List<String> newVars = new ArrayList<String>();
	
	//added for project5
	protected List<String> outV = new ArrayList<String>();
	protected List<String> inV = new ArrayList<String>();
	protected List<String> useV = new ArrayList<String>();
	protected List<String> defV = new ArrayList<String>();
	
	protected List<CuStat> successors = new ArrayList<CuStat>();
	
	protected Set<CuStat> lastInIfScope=new HashSet<CuStat>();
	//initially just created for assignstatements
	protected boolean boxed = true;
	protected String statType = "";
	
	protected CuStat HIR = null;
	
	public void setUnboxType() {}
	
	@Override public String toString() {
		return text;
	}

	public Set<String> getContainsVar(){
		return new HashSet<String>();
	}
	
	//the toC method without primitive generation
	public String toC(ArrayList<String> localVars) {
		return ctext;
	}
	
	//the toC method with primitive generation, should not be called together with toC
	public String toC_opt() {
		return ctext;
	}
	public void add (CuStat st){}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		HReturn re = new HReturn();
		return re;
	}
	
	public void buildCFG() {}
	
	public void setUseDef() {}
	
	public CuStat getFirst() {
		return this;
	}
	
	public CuStat getLast() {
		return this;
	}
	
	public CuStat toHIR() {
		return HIR;
	}
	
	public CuStat getNext() {
		if (successors.isEmpty())
			return null;
		else
			return successors.get(0);
	}
	
	public CuStat ifBranch() {
		if (successors.size()<1)
			return null;
		else
			return successors.get(1);
	}
	
	public CuStat elseBranch() {
		if (successors.isEmpty())
			return null;
		else
			return successors.get(0);
	}
	
	public CuStat noBranch() {
		if (successors.isEmpty())
			return null;
		else
			return successors.get(0);
	}
	
	public CuStat whileBranch() {
		if (successors.size()<1)
			return null;
		else
			return successors.get(1);
	}
	
	//only returns true for newly died assign statements
	public boolean dies() {
		return false;
	}
	
	public void resetInOutSet() {
		outV = new ArrayList<String>();
		inV = new ArrayList<String>();
	}
}

class AssignStat extends CuStat{
	public CuVvc var;
	public CuExpr ee;
	public AssignStat (CuVvc t, CuExpr e) {
		var = t;
		ee = e;
		this.setUnboxType();
	}
	
	@Override public String toString() {
		//if dead, don't print anything, this is for debugging
		if (dead) {
			super.text = "";
			return super.text;
		}
		super.text = var.toString() + " := " + ee.toString() + " ;";
		return super.text;
	}
	
	@Override public boolean dies() {
		//if it is already dead, return false
		if (dead)
			return false;
		//if this variable shows up in outV, then it is still alive
		if (outV.contains(var.toString()))
			return false;
		//reset this node, no use, no def, just pass through
	    useV = new ArrayList<String>();
		defV = new ArrayList<String>();
		dead = true;
		return true;
	}
	
	@Override public Set<String> getContainsVar(){
		Set<String> temp=new HashSet<String>();
		temp.add(var.text);
		return temp;
	}
	
    @Override public void setUnboxType(){
    	//if the expression return a primitive type
		if (ee.expType.equals("Integer") || ee.expType.equals("Boolean")) {
			//if it is already a boxed variable, simply update the type
			if (Helper.boxedVar.containsKey(var.toString())) {
				Helper.boxedVar.put(var.toString(), ee.expType);
			}
			else { //it is in unboxed var, or it is the first time appear, then update/insert
				Helper.unboxedVar.put(var.toString(), ee.expType);
			}
		}
		else { //otherwise
			if (Helper.unboxedVar.containsKey(var.toString())) {
				Helper.unboxedVar.remove(var.toString());
			}
			Helper.boxedVar.put(var.toString(), ee.expType);
		}
	}
	
	//transform to a Stats object
	@Override public CuStat toHIR() {
		Pair<List<CuStat>, CuExpr> pa =  ee.toHIR();
		List<CuStat> curHIR = pa.getFirst();
		CuStat temp = new AssignStat(var, pa.getSecond());
		curHIR.add(temp);
		//every time we create a new assign statement, we need to do that
		temp.setUnboxType();
		super.HIR = new Stats(curHIR);
		return super.HIR;
	}
	
	@Override public void buildCFG() {

	}
	
	@Override public void setUseDef() {
		super.useV.addAll(ee.getUse());
		//super.defV.addAll(ee.getDef());
		super.defV.add(var.toString());		
	}
	
	@Override public String toC(ArrayList<String> localVars) {
		//if dead, we still need to print the definition
		if (dead) {
			super.ctext = "void * " + var.toString() +" = NULL;\n";;
			return super.ctext;
		}
		String exp_toC = ee.toC(localVars);
		Helper.cVarType.put(var.toString(), ee.getCastType());
		Helper.iterType.put(var.toString(), ee.getIterType());
		super.ctext ="\n\n\n";
		super.ctext += ee.construct();
		//the below sentence can be removed by higher level blocks
		if (!Helper.funArgList.contains(var.toString())) {
			super.ctext += "void * " + var.toString() +" = NULL;\n";
		}
		
		//normal ref count
		String temp_name = Helper.getVarName();
		super.ctext += Helper.refAcquire(temp_name, var.toString());		
		super.ctext += var.toString() + " = " + exp_toC + ";\n";
		//normal ref count
		super.ctext += Helper.incrRefCount(var.toString());
		super.ctext += Helper.decRefCount(temp_name);
		/*//increase the new reference count
		super.ctext += "if (" + var.toString() + "!=NULL)\n";
		super.ctext += "\t(*(int *)" + var.toString() + ")++;\n";*/
		
		//live variable analysis
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.outV);

		if (!Helper.funArgList.contains(var.toString()))
			super.newVars.add(var.toString());
		if (!localVars.contains(var.toString()) && !Helper.funArgList.contains(var.toString()))
			localVars.add(var.toString());
		return super.ctext;
	}
	
	@Override public String toC_opt() {
		//if dead, don't print anything
		if (dead) {
			super.ctext = "";
			return super.ctext;
		}
		String exp_toC = ee.toC_opt();
		Helper.cVarType.put(var.toString(), ee.getCastType());
		Helper.iterType.put(var.toString(), ee.getIterType());
		super.ctext ="\n\n\n";
		super.ctext += ee.construct();
		//the below sentence can be removed by higher level blocks
		//variable declaration
		if (!Helper.funArgList.contains(var.toString())) {
			if (Helper.unboxedVar.containsKey(var.toString())) {
				super.ctext += "void * " + var.toString() +" = NULL;\n";
			}
			else {
				//bool is also int in C, so we only need to store the variable name for declaration elimination
				super.ctext += "int " + var.toString() + ";\n";
			}
		}
		
		if (!Helper.unboxedVar.containsKey(var.toString())) {
			//this variable is boxed doesn't mean the expression is boxed
			String temp_name = Helper.getVarName();
			super.ctext += Helper.refAcquire(temp_name, var.toString());
			if (ee.boxed)
				super.ctext += var.toString() + " = " + exp_toC + ";\n";
			else {
				//if expression is unboxed, it must be boolean or integer
				String reName = Helper.getVarName();
				super.ctext += Helper.box(exp_toC, ee.expType, reName);
				super.ctext += var.toString() + " = " + reName + ";\n";
			}
				
			//normal ref count
			super.ctext += Helper.incrRefCount(var.toString());
			super.ctext += Helper.decRefCount(temp_name);
		}
		else { //if the variable is unboxed
			if (ee.boxed) {
				super.ctext += var.toString() + " = " + Helper.unbox(exp_toC, ee.expType) + ";\n";
			}
			else {
				super.ctext += var.toString() + " = " + exp_toC + ";\n";
			}
		}

		
		//live variable analysis
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.outV);

		if (!Helper.funArgList.contains(var.toString()))
			super.newVars.add(var.toString());

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
		CuType exprType = ee.calculateType(Helper.getLineInfo(),tcontext);
		//System.out.println("In assig stat, after expr check");
		context.updateMutType(var.toString(), exprType);
		HReturn re = new HReturn();
		re.b = false;
		re.tau = CuType.bottom;
		//System.out.println("In assignment statement end");
Helper.P("assign stat end " + ee.toString());
Helper.P("var type is %s , __%s__", exprType, Helper.getLineInfo());
		return re;
	}
}

//added for PA5 to HIR
class ForToWhileStat extends CuStat {
	public String var, iter_name;
	private CuStat s1;
	private String iterType;
	
	public ForToWhileStat(String arg_var, String arg_iter_name, CuStat arg_s1, String arg_iterType) {
		this.var = arg_var;
		this.iter_name = arg_iter_name;
		this.s1 = arg_s1;
		this.iterType = arg_iterType;
	}
	
	@Override public void buildCFG() {
		super.successors.add(s1.getFirst());
		s1.getLast().successors.add(this);
		s1.buildCFG();
	}
	
	@Override public void setUseDef() {
		//build use def set along this traversal
		super.useV.add(var);
		super.defV.add(iter_name);
		s1.setUseDef();
	}
	
	@Override public Set<String> getContainsVar(){
		Set<String> temp=s1.getContainsVar();
		temp.add(var);
		temp.add(iter_name);
		return temp;
	}
	
	@Override public CuStat toHIR() {
		//this node includes the 
		/*
		 super.ctext += "\t\t" + iter_name + " = (Iterable *)" + var.toString() + ";\n";
		super.ctext += "\t\t" + var.toString() + " = " + iter_name + "->value;\n";
		 */
		//need to add the last "\t\t" + var.toString() + " = iterGetNext(" + iter_name + ");\n"; to s1
		//make a new function call expression
		CuExpr curExpr = new VvExp("iterGetNext");
		ArrayList<CuExpr> args = new ArrayList<CuExpr>();
		args.add(new VvExp(iter_name));
		curExpr.add(null, args);
		
		Pair<List<CuStat>, CuExpr> pa =  curExpr.toHIR();
		List<CuStat> curHIR = pa.getFirst();		
		//make a new assign statement
		CuStat newAssign = new AssignStat(new Vv(var),pa.getSecond());
		curHIR.add(newAssign);
		
		s1 = s1.toHIR();
		if (s1 instanceof Stats) {
			((Stats) s1).al.addAll(curHIR);
		}
		else {
			ArrayList<CuStat> arg_stats = new ArrayList<CuStat>();
			//we add the object pointed by s1 into the array list
			//another way to say it is we make a copy of s1, and add the reference copy into the list
			arg_stats.add(s1);
			arg_stats.addAll(curHIR);
			s1 = new Stats(arg_stats);
		}
		super.HIR = this;
		return super.HIR;
	}
	
	@Override public String toC(ArrayList<String> localVars) {		
		super.ctext += "\twhile (" + var.toString() + "!=NULL) {\n";
		
		//String temp_name = Helper.getVarName();
		//super.ctext += Helper.refAcquire(temp_name, iter_name);
		super.ctext += "Iterable * " + iter_name +" = NULL;\n";
		super.ctext += "\t\t" + iter_name + " = (Iterable *)" + var.toString() + ";\n";
		super.ctext += "\t\t" + Helper.incrRefCount(iter_name);
		//super.ctext += "\t\t" + Helper.decRefCount(temp_name);
		
		String temp_name = Helper.getVarName();
		super.ctext += Helper.refAcquire(temp_name, var.toString());
		super.ctext += "\t\t" + var.toString() + " = " + iter_name + "->value;\n";
		/////////////////////////////note var is changed to iterType here, it is not an iterable any more
		Helper.cVarType.put(var, this.iterType);
		super.ctext += "\t\t" + Helper.incrRefCount(var.toString());
		super.ctext += "\t\t" + Helper.decRefCount(temp_name);
		
		//existing this node, we need to do live variable analysis
		//this is the edge in the loop
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(1).inV);
		
		//super.ctext += "\t\t" + "(*((int *)" + var.toString() + "))++;\n";
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
		/*//now reference counting/x3free memory due to scoping
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
		}*/
		// ***********this part is commented out because this is already converted to a cubex node ***************
		/*super.ctext += "\t\t" + "(*(int *)" + var.toString() + ")--;\n";
		//note that is another node in C in the for/while loop, var is defined here again, but var will be used in the while
		//node 
		super.ctext += "\t\t" + var.toString() + " = iterGetNext(" + iter_name + ");\n"; */
		super.ctext += "\t" + "}\n";
		
		//exiting the while loop, live variable analysis on the other edge, def set is null here
		super.ctext += Helper.liveVarAnalysis(super.inV, new ArrayList<String>(), super.successors.get(0).inV);
		return super.ctext;
	}
	
	@Override public String toString() {
		String temp = "ForToWhile(" + var + "!=NULL) {\n";
		temp += iter_name + " = (Iterable *)" + var.toString() + ";\n";
		temp += var.toString() + " = " + iter_name + "->value;\n";
		temp += s1.toString();
		temp += "}\n";
		return temp;
	}
}

class ForStat extends CuStat{
	private CuVvc var;
	private CuExpr e;
	private CuStat s1;
	
	private CuType iter_type;
	
	public ForStat(CuVvc v, CuExpr ee, CuStat ss) {
		var = v;
		e = ee;
		s1 = ss;
	}
	
	@Override public Set<String> getContainsVar(){
		Set<String> temp=s1.getContainsVar();
		temp.add(var.text);
		return temp;
	}
	
	@Override public void buildCFG() {
		/*//first, build use[n] and def[n]
		
		//the outer level has added the other branch to its successors
		//this is the fall through branch
		super.successors.add(s1.getFirst());
		s1.getLast().successors.add(this);
		//else, empty for statement won't have this loop there
		//recursive build CFG
		s1.buildCFG();*/
		
		
		//after converting to HIR, this method should never be called
		if (Helper.DEBUG) {
			System.out.println("in ForStat buildCFG, error");
		}
	}
	
	@Override public void setUseDef() {
		//after converting to HIR, this method should never be called
		if (Helper.DEBUG) {
			System.out.println("in ForStat setUseDef, error");
		}
	}
	
	@Override public CuStat toHIR() {
		Pair<List<CuStat>, CuExpr> pa =  e.toHIR();
		//e.construct part
		List<CuStat> curHIR = pa.getFirst();
		//v = e part
		curHIR.add(new AssignStat(var, pa.getSecond()));
		//check if e is string, if so, conver to iter part
		curHIR.add(new ConvertToIter(var.toString()));
		//we need to call it here to get the name
		String iter_name = Helper.getVarName();
		CuStat temp = new ForToWhileStat(var.toString(), iter_name, s1, this.iter_type.id);
		curHIR.add(temp.toHIR());
		super.HIR = new Stats(curHIR);
		return super.HIR;
	}
	
	//this needs to be modified because we now have a new ForToWhile java class now
	@Override public String toC(ArrayList<String> localVars)
	{
		//after converting to HIR, this method should never be called
		if (Helper.DEBUG) {
			System.out.println("in ForStat toC, error");
		}
		/*
		String exp_toC = e.toC(localVars);
		super.ctext +="\n\n\n";
		super.ctext += e.construct();
		String itype = e.getIterType();
		
		//added for v scoping
		super.ctext += "{\n";
		
		super.ctext += "\t" + "void *" + var.toString() + " = NULL;\n";
		Helper.cVarType.put(var.toString(), itype);
		String iter_name = Helper.getVarName();
		super.ctext += "\tIterable * " + iter_name + " = NULL;\n";
		//def here
		super.ctext += "\t" + var.toString() + " = " + exp_toC + ";\n";
		
		super.ctext += "\t" + "if ("+ var.toString() +"!=NULL) {\n";
		//no need for reference counting here
		//super.ctext += "(*(int *)" + iter_name1 + ")++;\n";
		super.ctext += "\t\t" + "if (" + "(*((int *)(" + exp_toC +"+1))) == 0) {\n";
		//super.ctext += "(*(int *)" + iter_name1 + ")--;\n";
		//another def here, previous iter_name1 is dead, should decrease ref 
		super.ctext += "\t\t\t" + var.toString() + " = strToIter( ((String *)" + exp_toC + ")->value, ((String *)" + exp_toC + ")->len);\n";
		super.ctext += "\t\t}\n\t}\n";
		
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
		//note that is another node in C in the for/while loop, var is defined here again, but var will be used in the while
		//node 
		super.ctext += "\t\t" + var.toString() + " = iterGetNext(" + iter_name + ");\n";
		super.ctext += "\t" + "}\n";	
		//value is null now, so no need for deallocation
		//iter_name is only dead here, so don't add it to use[n] and def[n]
		//var is also only dead here
		//should deallocate here, def[n] union in[n] then exclude out[n]
		super.ctext += "}\n"; */
		return super.ctext;
	}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		//System.out.println("in for stat, begin");
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();		
    	//check whether e is an iterable of tau
    	CuType eType = e.calculateType(Helper.getLineInfo(), tcontext);
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
    	iter_type = eType.type;
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
	
	@Override public String toString() {
		super.text = "for ( " + var.toString() + " in " + e.toString() + " ) " + s1.toString();
		return super.text;
	}
}

//added in PA5 to convert for to while in AST->HIR conversion
class ConvertToIter extends CuStat {
	private String var;
	
	public ConvertToIter(String argVar) {
		this.var = argVar;
	}
	
	@Override public CuStat toHIR() {
		return this;
	}
	
	@Override public void buildCFG() {
		//treat this as a whole node, manually do the ref count
	}
	
	@Override public void setUseDef() {
		super.useV.add(var);
	}
	
	@Override public Set<String> getContainsVar(){
		Set<String> temp=new HashSet<String>();
		temp.add(var);
		return temp;
	}
	
	@Override public String toC(ArrayList<String> localVars)
	{
		super.ctext += "\t" + "if ("+ var.toString() +"!=NULL) {\n";
		//no need for reference counting here
		//super.ctext += "(*(int *)" + iter_name1 + ")++;\n";
		super.ctext += "\t\t" + "if (" + "(*((int *)(" + var +"+1))) == 0) {\n";
		//super.ctext += "(*(int *)" + iter_name1 + ")--;\n";
		String temp_name = Helper.getVarName();
		super.ctext += Helper.refAcquire(temp_name, var.toString());
		super.ctext += "\t\t\t" + var.toString() + " = strToIter( ((String *)" + var + ")->value, ((String *)" + var + ")->len);\n";
		super.ctext += Helper.incrRefCount(var.toString());
		super.ctext += Helper.decRefCount(temp_name);
		super.ctext += "\t\t}\n\t}\n";
		
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.outV);
		
		return super.ctext;
	}
	
	@Override public String toString() {
		String temp = "if ("+ var.toString() +"!=NULL) {\n";
		temp += "if (" + var + ".isNotIter)\n";
		temp += var + " = strToIter(" + var + ");\n";
		temp += "}\n";
		return temp;
	}
}

class IfStat extends CuStat{
	public CuExpr e;
	private CuStat s1=null;
	private CuStat s2=null;
	public IfStat (CuExpr ex, CuStat st) {
		this.e = ex;
		this.s1 = st;
	}
	
    @Override public void add (CuStat st) {
    	s2 = st;
    	super.text += " else " + s2.toString();
    }
    
    @Override public CuStat toHIR() {
		Pair<List<CuStat>, CuExpr> pa =  e.toHIR();
		List<CuStat> curHIR = pa.getFirst();
		//make an assign statement to guarentee that each expression is assigned to a variable
		String varName = Helper.getVarName();
		CuStat nassign = new AssignStat(new Vv(varName), pa.getSecond());
		curHIR.add(nassign);
		s1 = s1.toHIR();
		CuStat temp = new IfStat(new VvExp(varName), s1);
		if (s2 != null) {
			s2 = s2.toHIR();
			temp.add(s2);
		}
		curHIR.add(temp);
		super.HIR = new Stats(curHIR);
		
		//markForif()
		if (s1!=null){
			s1.getLast().lastInIfScope.add(temp);
		}
		if (s2!=null){
			s2.getLast().lastInIfScope.add(temp);
		}
		return super.HIR;
    }
    
	
	@Override public Set<String> getContainsVar(){
		Set<String> temp=s1.getContainsVar();
		if (s1!=null)
			temp.addAll(s1.getContainsVar());
		if (s2!=null)
			temp.addAll(s2.getContainsVar());
		return temp;
	}
	
    
	@Override public void buildCFG() {
		s1.getLast().successors = new ArrayList<CuStat>();
		s1.getLast().successors.addAll(super.successors);
		//recursively buildCFG
		s1.buildCFG();
		if (s2!=null) {
			s2.getLast().successors = new ArrayList<CuStat>();
			s2.getLast().successors.addAll(super.successors);
			super.successors = new ArrayList<CuStat>();
			super.successors.add(s2.getFirst());
			//s1 is always the second successor
			super.successors.add(s1.getFirst());
			s2.buildCFG();			
		}
		else {
			//the first successor is always the next big block, for both if and loops
			super.successors.add(s1.getFirst());
		}	
	}
	
	@Override public void setUseDef() {
		//build use def sets, def set is empty
		super.useV.addAll(e.getUse());
		s1.setUseDef();
		if (s2!=null)
			s2.setUseDef();
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
    	
    	//live variable analysis on the s1 edge
    	super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(1).inV);
    	
    	super.ctext += temp_s1;
    	/*  ideally, we should not have this 
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
		} */
    	super.ctext += "}\n";
    	if (s2 != null) {
    		super.ctext += "else {\n";
    		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(0).inV);
    		super.ctext += temp_s2;
    		/*
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
    		}    */		
    		super.ctext += "}\n";
    	}
    	else
    		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(0).inV);
    	return super.ctext;
    }
    
	@Override public CuStat elseBranch() {
		if (s2==null)
			return null;
		return successors.get(0);
	}
	
	public CuStat noBranch() {
		//if we have an else block, there is no noBranch
		if (s2!=null)
			return null;
		return successors.get(0);
	}
    
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
Helper.P("if begin, e is " + e.toString());
		//whenever we calculate expr type, we use a temporary context with merged mutable and
		//immutable variables
		CuContext tcontext = new CuContext (context);
		tcontext.mergeVariable();		
    	//check whether e is boolean
Helper.P(tcontext.mVariables.toString());
    	CuType eType = e.calculateType(Helper.getLineInfo(), tcontext);
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
	
	@Override public String toString() {
		super.text = "if ( " + e.toString() + " ) " + s1.toString();
		if (s2!=null)
			super.text += " else " + s2.toString();
		return super.text;
	}

}

class WhileStat extends CuStat{
	public CuExpr e;
	public CuStat s1;
	public WhileStat (CuExpr ex, CuStat st){
		e = ex;
		s1 = st;
	}
	@Override public CuStat toHIR() {
		Pair<List<CuStat>, CuExpr> pa =  e.toHIR();
		List<CuStat> curHIR = pa.getFirst();
		
		//make all the expressions assigned to a variable
		String varName = Helper.getVarName();
		CuStat nassign = new AssignStat(new Vv(varName), pa.getSecond());
		curHIR.add(nassign);

		s1 = s1.toHIR();
		if (s1 instanceof Stats) {
			((Stats) s1).al.addAll(curHIR);
		}
		else {
			ArrayList<CuStat> arg_stats = new ArrayList<CuStat>();
			//we add the object pointed by s1 into the array list
			//another way to say it is we make a copy of s1, and add the reference copy into the list
			arg_stats.add(s1);
			arg_stats.addAll(curHIR);
			s1 = new Stats(arg_stats);
		}
		curHIR.add(new WhileStat(new VvExp(varName), s1));
		super.HIR = new Stats(curHIR);
		return super.HIR;
	}
	

	@Override public Set<String> getContainsVar(){
		return s1.getContainsVar();
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
	
	
	@Override public void setUseDef() {
		//build use def sets, def set is empty, as in the if statement case
		super.useV = e.getUse();
		s1.setUseDef();
	}
	
	@Override public String toC(ArrayList<String> localVars) {
		String exp_toC = e.toC(localVars);

		super.ctext +="\n\n\n";
		super.ctext += e.construct();
    	if (e instanceof VvExp)
    		super.ctext += "while (((Boolean *)" + exp_toC + ")->value) {\n";
    	else
    		super.ctext += "while (" + exp_toC + ") {\n";
		
    	super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(1).inV);
    	
		ArrayList<String> while_localVars = new ArrayList<String>(localVars);
		super.ctext += s1.toC(while_localVars);
		//some variables in localVarsIn are not newly created, so remove them before decrement ref count/deallocate
		for(String cur_str : localVars) {
			while (while_localVars.contains(cur_str)) {
				while_localVars.remove(cur_str);
			}
		}
		/*
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
		} */
		super.ctext += "}\n";
		
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.successors.get(0).inV);
		
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
    	CuType eType = e.calculateType(Helper.getLineInfo(), tcontext);
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
    
    @Override public String toString() {
    	text = "while ( " + e.toString() + " ) " + s1.toString();
    	return text;
    }
}

class ReturnStat extends CuStat{
	public CuExpr e;
	public ReturnStat (CuExpr ee) {
		e = ee;
	}
	

	@Override public Set<String> getContainsVar(){
		return new HashSet<String>();
	}
	@Override public CuStat toHIR() {
		Pair<List<CuStat>, CuExpr> pa =  e.toHIR();
		List<CuStat> curHIR = pa.getFirst();
		//added for fix
		String name1 = Helper.getVarName();
		CuVvc temp1 = new Vv(name1);
		CuStat a = new AssignStat(temp1, pa.getSecond());
		curHIR.add(a);
		CuExpr temp_expr = new VvExp(name1);
		curHIR.add(new ReturnStat(temp_expr));
		//end of added for fix
		super.HIR = new Stats(curHIR);
		return super.HIR;
	}
	@Override public void buildCFG() {
		//return stat doesn't have any successors
		super.successors = new ArrayList<CuStat>();
	}
	@Override public void setUseDef() {
		//build the use def set, def set is empty
		super.useV = e.getUse();
	}
	@Override public String toC(ArrayList<String> localVars) {
		//now reference counting/x3free memory due to scoping
		super.ctext +="\n\n\n";
		String exp_toC = e.toC(localVars);
		super.ctext += e.construct();
		/*
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
		} */
		
		//special process for return statement
		/*super.ctext += "if (" + exp_toC + "!= NULL) {\n";
		super.ctext += "(*(int *)" + exp_toC + ")--;\n";
		super.ctext += "}\n"; */
		
		if ((e instanceof VvExp) && (!e.isFunCall())) {
			super.outV.add(e.toString());
			//we don't deallocate it, but we need to decrease its ref count
			super.ctext += "if (" + exp_toC + "!= NULL) {\n";
			super.ctext += "(*(int *)" + exp_toC + ")--;\n";
			super.ctext += "}\n"; 
		}
		
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.outV);
			
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
		re.tau = e.calculateType(Helper.getLineInfo(), tcontext);
Helper.P("e type is " + re.tau);
		//System.out.println("in return stat, exp is " + e.toString() + " end");
		return re;
	}
	
	 @Override public String toString() {
		 super.text = "return " + e.toString() + " ;";
		 return super.text;
	 }
}

class EmptyBody extends CuStat {
	public EmptyBody(){
		text=" ;";
	}
	

	@Override public Set<String> getContainsVar(){
		return new HashSet<String>();
	}
	@Override public CuStat toHIR() {
		return this;
	}
	@Override public String toC(ArrayList<String> localVars) {
		super.ctext += Helper.liveVarAnalysis(super.inV, super.defV, super.outV);
		return super.ctext;
	}
	public HReturn calculateType(CuContext context) throws NoSuchTypeException {
		//default is false and bottom
		return new HReturn();
	}
	
	@Override public String toString() {
		text=" ;";
		return text;
	}
} 

class Stats extends CuStat{
	public ArrayList<CuStat> al = new ArrayList<CuStat>();
	public Stats (List<CuStat> cu) {
		al = (ArrayList<CuStat>) cu;
	}
	@Override public String toString() {
		text = "{ " + Helper.listFlatten(al) + " }";
		return text;
	}

	@Override public Set<String> getContainsVar(){
		Set<String> temp= new HashSet<String>();
		for (CuStat s: al){
			temp.addAll(s.getContainsVar());
		}
		return temp;
	}
	@Override public CuStat toHIR() {
		ArrayList<CuStat> newAl = new ArrayList<CuStat>();
		IfStat divergePoint= null;
		for (CuStat cs : al) {
			//note this will form each element into Stats because of the flattening
			CuStat StatHIR=cs.toHIR();
			newAl.add(StatHIR);
		}
		super.HIR = new Stats(newAl);
		return super.HIR;
	}
	@Override public void buildCFG() {
		//build this connections first
		for(int i=0; i<(this.al.size()-1); i++) {
			al.get(i).getLast().successors.add(al.get(i+1).getFirst());			
		}
		//recursively build connections for each elements
		for(int i=0; i<this.al.size(); i++)
			al.get(i).buildCFG();		
	}
	@Override public void setUseDef() {
		//both use and def set is empty here
		//recursively build
		for(int i=0; i<this.al.size(); i++)
			al.get(i).setUseDef();	
	}
	@Override public CuStat getFirst() {
		//if empty, return itself
		if (al.size()==0)
			return this;
		CuStat first = al.get(0);
		while (first.getFirst()!=first)
			first = first.getFirst();
		return first;
	}
	@Override public CuStat getLast() {
		//if empty, return itself
		if (al.size()==0)
			return this;
		CuStat last = al.get(al.size()-1);
		while (last.getLast()!=last)
			last = last.getLast();
		return last;
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
