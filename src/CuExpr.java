import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

//*************** TO DO check related operators against figures 9************************


public abstract class CuExpr {
	protected String text = "";
	protected String methodId = null;
	protected String cText = "";
	protected String name = "";
	protected String castType = "", iterType = "";
	protected ArrayList<String> def = new ArrayList<String>();
	protected ArrayList<String> use = new ArrayList<String>();
	protected Pair<List<CuStat>, CuExpr> hir;
	//decorate the tree with its type when typechecking, 
	//but for now, will just use castType for most cases
	protected String expType = "";
	
	//castType, expType, type ideally should be the same thing, but for safety, we added them
	protected CuType type = null;
	//added for primitive optimization, default is boxed
	protected boolean boxed = true;
	protected  Set<String> containsVar= new HashSet<String>();
	public void add(List<CuType> pt, List<CuExpr> es) {}
	public final CuType getType(CuContext context) throws NoSuchTypeException {
		if(type == null) { type = calculateType(context); }
		Helper.P("return expression type " + type);
		return type;
	}
	protected CuType calculateType(CuContext context) throws NoSuchTypeException { return null;};
	@Override public String toString() {return text;}
	public CuExpr copyFieldsTo(CuExpr that){
		that.text=text;
		that.methodId=methodId;
		that.cText = cText;
		that.name = name;
		that.castType = castType; 
		that.iterType = iterType;
		that.def = new ArrayList<String>(def);
		that.use = new ArrayList<String>(use);
		//ALARM: second field copying reference
		if (hir!=null)
			that.hir = new Pair<List<CuStat>, CuExpr>(new ArrayList(hir.getFirst()),hir.getSecond());
		that.expType = expType;
		that.type = type;
		that.boxed = boxed;
		//that.containsVar=new HashSet<String>(containsVar);
		
		return that;
	}
	
	public String toC(ArrayList<String> localVars) {
		return cText;
	}
	
	//by default, it is the same as toC
	public String toC_opt() {
		ArrayList<String> fake_localVars = new ArrayList<String>();
		//I verified that this will call the actual class's toC, instead of this toC
		return toC(fake_localVars);
	}
	
	public String construct(){
		return name;
	}
	
	public String getCastType(){
		return castType;
	}
	
	public String getIterType(){
		return iterType;
	}
	
	public ArrayList<String> getDef(){
		return def;
	}
	
	public ArrayList<String> getUse(){
		return use;
	}
	
	public Pair<List<CuStat>, CuExpr> toHIR() {
		return hir;
	}
	
	public boolean isFunCall () {
		return false;
	}
	protected CuType binaryExprType(CuContext context, String leftId, String methodId, CuType rightType) throws NoSuchTypeException {
		//System.out.println("in binaryExprType, begin");
		//System.out.println("leftid is " + leftId + ", methodid is " + methodId + ",right type is " + rightType.id);
		// get the functions of left class
		CuClass cur_class = context.mClasses.get(leftId);
		if (cur_class == null) {
			Helper.P(" cur_class of %s is null", leftId);
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		Map<String, CuTypeScheme> funcs =  cur_class.mFunctions;
		// check the method typescheme
		CuTypeScheme ts = funcs.get(methodId);
		if (ts == null ) {
			Helper.P("   ts is null");
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		Helper.ToDo("we know there is only one parameter for now");
		CuType tR = null;
		for (String mystr : ts.data_tc.keySet()) {
			tR = ts.data_tc.get(mystr);
		}
		/** if this method exists, kindcontext is <>, and type scheme matches with input */
		if (!rightType.isSubtypeOf(tR)) {
			Helper.P("   rightType %s is not subtype of %s", rightType, tR);
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		//System.out.println("in binaryExprType, end");
		return ts.data_t;
	}

	protected CuType unaryExprType(CuContext context, String id, String methodId) throws NoSuchTypeException {
		// get the functions of left class
		CuClass cur_class = context.mClasses.get(id);
		if (cur_class == null) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		Map<String, CuTypeScheme> funcs = cur_class.mFunctions;
		// check the method typescheme
		CuTypeScheme ts = funcs.get(methodId);
		if (ts==null) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		return ts.data_t;
	}
	
	protected Boolean isTypeOf(CuContext context, CuType t) {
		return this.getType(context).isSubtypeOf(t);
	}
    protected Boolean isTypeOf(CuContext context, CuType t, Map<String, CuType> map) {
        CuType type = this.getType(context);
        //System.out.println("in isType of, before type check, type is " + type.toString());
        if (type == null)
        	type.calculateType(context);
        //System.out.println("in isType of, after type check, type is " + type.toString());
        
        t.plugIn(map);
        if (t instanceof VTypePara) {
        	t = map.get(t.id);
        }
        //System.out.println("t type is " + t.type.toString());
        Helper.P(String.format("this=%s<%s> parent %s, that=%s<%s>, map=%s", type,type.map,type.parentType, t,t.map, map));
        return type.isSubtypeOf(t);
    }
    
	public boolean expBoxed () {
		//if the expression is a variable, need to look it up from the map
		if ((this instanceof VvExp) && !this.isFunCall()) {
			if (Helper.unboxedVar.containsKey(((VvExp)this).val))
				return false;
			else
				return true;
		}
		else {
			return this.boxed;
		}
	}
}

//verified and method is only for boolean and it returns boolean
class AndExpr extends CuExpr{
	public CuExpr left, right;
	public AndExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
//		super.desiredType = CuType.bool;
		super.methodId = "and";
		
		//since the return type is always boolean, then we can always unbox it
		super.expType = "Boolean";
		super.boxed = false;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof AndExpr &&
				left.equals(((AndExpr)that).left)&&
				right.equals(((AndExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		//right should pass in a type
		
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		
		//the assign statement constructor does this now
		//a.setUnboxType();
		//b.setUnboxType();
		
		stats.add(a);
		stats.add(b);
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		//we also know var1 and var2 should have be boolean type
		//for variable expression (VvExp but not function call)
		//boxed or not is know, it is only know in toC, after the AST is constructed

		var1.expType = "Boolean";

		var2.expType = "Boolean";
		
		//AndExpr has box unset in the constructor, so don't need to anything here
		CuExpr expr = new AndExpr(var1, var2);	
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp;
		super.castType = "Boolean";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		name += "\n" + leftC + rightC;
		
		super.name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		super.name += String.format("((%s*)%s)->value && ((%s*)%s)->value;\n", "Boolean", leftToC, "Boolean", rightToC);
		//if (!localVars.contains(temp))
			//localVars.add(temp);
		Helper.cVarType.put(temp, "Boolean");
		
		
		/*if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);
		
		def.add(temp);*/

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		
		super.castType = "Boolean";
		String leftToC = left.toC_opt();
		String rightToC = right.toC_opt();
		String leftC = left.construct();
		String rightC = right.construct();
		
		name += "\n" + leftC + rightC;
		
	    if (left.expBoxed())
	    	super.cText = Helper.unbox(leftToC, left.expType);
	    else
	    	super.cText = leftToC;
	    
	    super.cText += " && ";
	    
	    if (right.expBoxed())
	    	super.cText += Helper.unbox(rightToC, right.expType);
	    else
	    	super.cText += rightToC;
	    
	    super.cText += ";\n";
		
		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		return super.toC_opt();
	}
}

class AppExpr extends CuExpr {
	CuExpr left;
	CuExpr right;
	public AppExpr(CuExpr e1, CuExpr e2) {
		this.left = e1;
		this.right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		
		super.expType = "Iterable";
		super.boxed = true;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof AppExpr &&
				left.equals(((AppExpr)that).left)&&
				right.equals(((AppExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override public String toString() {
		super.text = left.toString() + " ++ " + right.toString();
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		CuType t1 = left.calculateType(context);
		CuType t2 = right.calculateType(context);
		if (!t1.isIterable() || !t2.isIterable()) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		//added by Yinglei to fix PA3, Iterable can't be extended, so I think we only need to treat string separately
		if (t1.isString()) {
			t1 = new Iter(CuType.character);
		}
		if (t2.isString()) {
			t2 = new Iter(CuType.character);
		}
Helper.P("t1 is " + t1.toString() + " t2 is " + t2.toString() + ", t1 type is " + t1.type.toString() + " t2 type is " + t2.type.toString());
		CuType type = CuType.commonParent(t1.type, t2.type);
Helper.P("common parent of types is " + type.toString());
		return new Iter(type);		
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		//added for opt3
		//a.setUnboxType();
		//b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		//added for opt3
		var1.boxed = true;
		var1.expType = "Iterable";
		var2.boxed = true;
		var2.expType = "Iterable";		
		CuExpr expr = new AppExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String leftToC = left.toC(localVars), rightToC = right.toC(localVars);
		castType = "Iterable";
		String iter = Helper.getVarName();
		
		
		/*temp += "char* " charVal + " = ((String*) " + leftToC + ")->value;\n" 
				+ "int " + len + " = ((String*) " + leftToC + ")->len;\n"
				+ "Iterable* " + rand1 + ";\n"
				+ "int " + flag + "= 0;\n"
				+ "for(" + i + "=" + len + "; " + i + ">=0; " + i +"--) {\n"
				+ "Character* " + temp1 + "= (Character*) malloc (sizeof(Character));\n"
				+ temp1 + "->value = " + "temp1" + "[" + len + "];\n"
				+ temp1 + "->nrefs = 0;\n";
			
		temp += "if(" + flag + "== 0) {\n"
				+ "Iterable* " + (rand = Helper.getVarName()) + "(Iterable*) malloc (sizeof(Iterable));\n"
				+
			rand->value = temp1;
			rand->nrefs = 0;
			rand->next = NULL;
			rand->concat = NULL;
			rand->additional = NULL;
			rand1 = rand;
			flag = 1;
			}
			else {
				Iterable* rand = (Iterable*) malloc (sizeof(Iterable));
				rand->value = temp1;
				rand->nrefs = 0;
				rand->next = NULL;
				rand->concat = NULL;
				rand->additional = rand1;
				rand1 = rand;				
			}
		}*/
		

		String rightC = left.construct();
		String leftC = right.construct();
		
		name += leftC + rightC;
		String iter_name1 = Helper.getVarName();
		super.name += "void *" + iter_name1 + ";\n";
		super.name += iter_name1 + " = " + leftToC + ";\n";
		super.name += "if ("+ iter_name1 +"!=NULL) {\n";
		super.name += "(*((int *)" + iter_name1 + "))++;\n";
		super.name += "if (" + "(*((int *)" + leftToC +"+1)) == 0) {\n";		//checking if isIter is false 
		super.name += Helper.decRefCount(iter_name1);
		super.name += iter_name1+ " = strToIter( ((String *)" + leftToC + ")->value, ((String *)" + leftToC + ")->len);\n";
		super.name += "}\n}\n";
		
		String iter_name2 = Helper.getVarName();
		super.name += "void *" + iter_name2 + ";\n";
		super.name += iter_name2 + " = " + rightToC + ";\n";
		super.name += "if ("+ iter_name2 +"!=NULL) {\n";
		super.name += "(*((int *)" + iter_name2 + "))++;\n";
		super.name += "if (" + "(*((int *)" + rightToC +"+1)) == 0) {\n";		//checking if isIter is false
		super.name += Helper.decRefCount(iter_name2);
		super.name += iter_name2+ " = strToIter( ((String *)" + rightToC + ")->value, ((String *)" + rightToC + ")->len);\n";
		super.name += "}\n}\n";

		String leftIterType = Helper.iterType.get(left.toString());
		String rightIterType = Helper.iterType.get(right.toString());
		
		if (leftIterType == null)
			leftIterType = left.getIterType();
		if (rightIterType == null)
			rightIterType = right.getIterType();
		
		if(leftIterType.equals(rightIterType))
			iterType = leftIterType;
		else if (leftIterType.equals("Empty"))
			iterType = rightIterType;
		else if (rightIterType.equals("Empty"))
			iterType = leftIterType;
		else
			iterType = "Thing";
		
		
		name +=  "Iterable* " + iter + ";\n" + iter + " = concatenate((Iterable*)" + iter_name1 + ", (Iterable*) " + iter_name2 + ");\n";
		name += Helper.incrRefCount(iter);
		
		cText = iter;
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(iter);
		def.add(iter_name1);
		def.add(iter_name2);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/
		
		if (!leftC.equals(""))
			name += Helper.decRefCount(leftToC);
		if (!rightC.equals(""))
			name += Helper.decRefCount(rightToC);
		
		return super.toC(localVars);
	}
	
	//this is the same as toC
	@Override
	public String toC_opt() {
		ArrayList<String> fake_localVars = new ArrayList<String>();
		return this.toC(fake_localVars);
	}
}

class BrkExpr extends CuExpr {
	public List<CuExpr> val;
	public BrkExpr(List<CuExpr> es){
		this.val = es;
		for (CuExpr e : es){
			containsVar.addAll(e.containsVar);
		}
		super.boxed = true;
		super.expType = "Iterable";
	}	
	
	@Override
	public boolean equals(Object that){
		if (that instanceof BrkExpr &&
				val.equals(((BrkExpr)that).val))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text=Helper.printList("[", val, "]", ",");
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) {
		//System.out.println("in bracket expression, start");
		if (val == null || val.isEmpty()) return new Iter(CuType.bottom);
		CuType t = val.get(0).getType(context);
		//System.out.println("type id is " + t.id);
		for (int i = 0; i+1 < val.size(); i++) {
			t = CuType.commonParent(val.get(i).getType(context), val.get(i+1).getType(context));
		} // find the common parent type of all expressions here
		
		//System.out.println("in bracket expression end");
		
		return new Iter(t);
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> expToHir = new Pair<List<CuStat>, CuExpr>();
		List<CuExpr> expressions = new ArrayList<CuExpr>();
		
		for(CuExpr exp : val){
			expToHir = exp.toHIR();
			stats.addAll(expToHir.getFirst());
			
			String name1 = Helper.getVarName();
			CuVvc temp1 = new Vv(name1);
			CuStat a = new AssignStat(temp1, expToHir.getSecond());
			stats.add(a);
			
			//assume getSecond already has boxed and expType fields set, should be correct but not 100% sure
			a.setUnboxType();
			
			CuExpr var1 = new VvExp(name1);
			//var1 should be consistent with temp/name1, if that is unboxed, this VvExp is also unboxed
			var1.boxed = a.boxed;
			var1.expType = a.statType;
			
			expressions.add(var1);
			
			use.add(var1.toString());	
			
		}
		
		CuExpr expr = new BrkExpr(expressions);
		expr.use = use;
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String eToC = "", typeCast = "";
		
		ArrayList<String> tempNameArr=new ArrayList<String>();	
		ArrayList<String> tempDataArr=new ArrayList<String>();
		for (CuExpr e : val) {
			eToC = e.toC(localVars);
			String eC = e.construct();
			name += eC;
			
			/*if (!e.getDef().isEmpty())
				def.addAll(e.getDef());
			if (!e.getUse().isEmpty())
				use.addAll(e.getUse());
*/			
			String eCastType = e.getCastType();
			if (eCastType.equals(""))
				eCastType = Helper.cVarType.get(e.toString());
			
			if(iterType == null)
				iterType = "";
			
			if(iterType.equals("")) 
				iterType = eCastType;
			else if (!iterType.equals(eCastType))
				iterType = "Thing";
			
			
			tempNameArr.add(Helper.getVarName());
			tempDataArr.add(eToC);
			typeCast = e.getCastType();
			if(typeCast == null) 
				typeCast = Helper.cVarType.get(eToC);
		}
		tempNameArr.add("NULL");

		int i;
		for (i= val.size() - 1; i >= 0; i--) {
			name += "Iterable* " + tempNameArr.get(i) + ";\n" 
					+ tempNameArr.get(i) + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
					+ tempNameArr.get(i) + "->isIter = 1;\n"
					+ tempNameArr.get(i) + "->nrefs = 0;\n" 
					+ tempNameArr.get(i) + "->value = " + tempDataArr.get(i) + ";\n"
					+ tempNameArr.get(i) + "->additional = " + tempNameArr.get(i + 1) + ";\n" 
					+ tempNameArr.get(i) + "->next = NULL;\n" 
					+ tempNameArr.get(i)+ "->concat = NULL;\n";
			
			if (!tempNameArr.get(i+1).equals("NULL") && !tempDataArr.isEmpty())
				name += Helper.incrRefCount(tempDataArr.get(i+1));
			
			//def.add(tempNameArr.get(i+1));
		}	
			
		if (!tempDataArr.isEmpty())
			name += Helper.incrRefCount(tempDataArr.get(0));
		//def.add(tempNameArr.get(0));
		
		cText = tempNameArr.get(0);
		
		if(val.size() == 0) 
			iterType = "Empty";
		
		super.castType = "Iterable";
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		String eToC = "", typeCast = "";
		
		ArrayList<String> tempNameArr=new ArrayList<String>();	
		ArrayList<String> tempDataArr=new ArrayList<String>();
		for (CuExpr e : val) {
			eToC = e.toC_opt();
			String eC = e.construct();
			name += eC;
						
			String eCastType = e.getCastType();
			if (eCastType.equals(""))
				eCastType = Helper.cVarType.get(e.toString());
			
			if(iterType == null)
				iterType = "";
			
			if(iterType.equals("")) 
				iterType = eCastType;
			else if (!iterType.equals(eCastType))
				iterType = "Thing";
			
			
			tempNameArr.add(Helper.getVarName());
			tempDataArr.add(eToC);
			typeCast = e.getCastType();
			if(typeCast == null) 
				typeCast = Helper.cVarType.get(eToC);
		}
		tempNameArr.add("NULL");

		int i;
		for (i= val.size() - 1; i >= 0; i--) {
			String boxedValue = tempDataArr.get(i);
			if (!val.get(i).expBoxed()) {
				String reName = Helper.getVarName();
				name += Helper.box(tempDataArr.get(i), val.get(i).expType, reName);
				boxedValue = reName;
			}
			name += "Iterable* " + tempNameArr.get(i) + ";\n" 
					+ tempNameArr.get(i) + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
					+ tempNameArr.get(i) + "->isIter = 1;\n"
					+ tempNameArr.get(i) + "->nrefs = 0;\n" 
					+ tempNameArr.get(i) + "->value = " + boxedValue + ";\n"
					+ tempNameArr.get(i) + "->additional = " + tempNameArr.get(i + 1) + ";\n" 
					+ tempNameArr.get(i) + "->next = NULL;\n" 
					+ tempNameArr.get(i)+ "->concat = NULL;\n";
			
			name += Helper.incrRefCount(boxedValue);
			//if (!tempNameArr.get(i+1).equals("NULL") && !tempDataArr.isEmpty())
			//	name += Helper.incrRefCount(tempDataArr.get(i+1));
			
			//def.add(tempNameArr.get(i+1));
		}	
			
		//if (!tempDataArr.isEmpty())
		//	name += Helper.incrRefCount(tempDataArr.get(0));
		
		cText = tempNameArr.get(0);
		
		if(val.size() == 0) 
			iterType = "Empty";
		
		super.castType = "Iterable";
		return super.toC_opt();
	}

}

class CBoolean extends CuExpr{
	Boolean val;
	
	public CBoolean(Boolean b){
		val=b;
		super.boxed = false;
		super.expType = "Boolean";
	}
	
	@Override public String toString() {
		super.text=val.toString();
		return super.text;
	}
	
	@Override protected CuType calculateType(CuContext context) {
		if (val == null) { throw new NoSuchTypeException(Helper.getLineInfo());}
		return CuType.bool;
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof CBoolean &&
				val==(((CBoolean)that).val))
			return true;
		else 
			return false;
	}
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> cuStat = new ArrayList<CuStat>();
		CuExpr cuExpr = this;
		
		return new Pair<List<CuStat>, CuExpr>(cuStat, cuExpr);
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		super.castType = "Boolean";
		String temp = Helper.getVarName();
		super.cText = temp;
		
		if (val)			
			super.name = String.format("Boolean* %s;\n%s = (Boolean *) x3malloc(sizeof(Boolean));\n"
					+ "(%s->nrefs) = 0;\n"
					+ "%s->value = %d;\n", temp, temp, temp, temp, 1);
		else
			super.name = String.format("Boolean* %s;\n%s = (Boolean *) x3malloc(sizeof(Boolean));\n"
					+ "(%s->nrefs) = 0;\n"
					+ "%s->value = %d;\n", temp, temp, temp, temp, 0);
	
		//if (!localVars.contains(temp))
			//localVars.add(temp);
		Helper.cVarType.put(temp, "Boolean");
		
		//def.add(temp);
		
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		//name is empty string
		//I don't think this castType will be used, but put it here for safety
		super.castType = "Boolean";
		if (val)
			super.cText = "1";
		else
			super.cText = "0";
		
		return super.cText;
	}
}

/*as an example, cinteger will always be assigned to a  variable in HIR,
 * so it should always be unboxed
 */
class CInteger extends CuExpr {
	Integer val;
	public CInteger(Integer i){
		val=i;
		super.boxed = false;
		super.expType = "Integer";
	}
	@Override public String toString() {
		super.text=val.toString();
		return super.text;
	}
	@Override
	public boolean equals(Object that){
		if (that instanceof CInteger &&
				val==(((CInteger)that).val))
			return true;
		else 
			return false;
	}
	@Override protected CuType calculateType(CuContext context) {
		if (val == null) { throw new NoSuchTypeException(Helper.getLineInfo());}
		return CuType.integer;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> cuStat = new ArrayList<CuStat>();
		CuExpr cuExpr = this;
		
		return new Pair<List<CuStat>, CuExpr>(cuStat, cuExpr);
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		super.name = String.format("Integer* %s;\n%s = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "(%s->nrefs) = 0;\n"
				+ "%s->value = %d;\n", temp, temp, temp, temp, val);		
		super.cText = temp;
		super.castType = "Integer";
		//if (!localVars.contains(temp))
			//localVars.add(temp);
		Helper.cVarType.put(temp, "Integer");
		
		//def.add(temp);
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		//name is empty string
		//I don't think this castType will be used, but put it here for safety
		super.castType = "Integer";
		super.cText = val.toString();
		return super.cText;
	}
}

class CString extends CuExpr {
	String val;
	public CString(String s){
		val=s;
		super.boxed = true;
		super.expType = "String";
	}
	
	@Override public String toString() {
		super.text=val;
		return super.text;
	}
	@Override
	public boolean equals(Object that){
		if (that instanceof CString &&
				val.equals(((CString)that).val))
			return true;
		else 
			return false;
	}
	@Override protected CuType calculateType(CuContext context) {
		if (val == null) { throw new NoSuchTypeException(Helper.getLineInfo());}
		return CuType.string;
	}
	
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> cuStat = new ArrayList<CuStat>();
		CuExpr cuExpr = this;
		
		return new Pair<List<CuStat>, CuExpr>(cuStat, cuExpr);
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		iterType = "Character";
		super.name = String.format("String* %s;\n"
				+ "%s = (String *) x3malloc(sizeof(String));\n"
				+ "(%s->isIter) = 0;\n"
				+ "%s->value = (char*) x3malloc(sizeof(%s));\n"
				+ "(%s->nrefs) = 0;\n"
				+ "(%s->isStr) = 1;\n"
				+ "%s->len = sizeof(%s) - 1;\n"
				+ "mystrcpy(%s->value, %s);\n", temp, temp, temp, temp, val, temp, temp, temp, val, temp, val);	
		
		super.cText = temp;
		super.castType = "String";
		if (!localVars.contains(temp))
			localVars.add(temp);
		Helper.cVarType.put(temp, "String");
		
		//def.add(temp);
		
		/*ArrayList<String> tempNameArr=new ArrayList<String>();	
		ArrayList<String> tempDataArr=new ArrayList<String>();
		for (int i=(val.length()-1); i>=0; i--) {
		
		
			
			String tempName = Helper.getVarName();
			helper += "Character* " + tempName + " = (Character*) malloc(sizeof(Character));\n"
					+ tempName + "->value = " + val.substring(i, i+1) + ";\n"
					+ tempName + "->nrefs = 0;\n";			
					
			tempNameArr.add(Helper.getVarName());
			tempDataArr.add(tempName);
			typeCast = "Character";
			
		}
		tempNameArr.add("NULL");

		for (int i = val.length() - 1; i >= 0; i--) {
			helper += "Iterable* " + tempNameArr.get(i) + ";\n" 
					+ tempNameArr.get(i) + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
					+ tempNameArr.get(i) + "->isIter = 1;\n"
					+ tempNameArr.get(i) + "->nrefs = 0;\n" 
					+ tempNameArr.get(i) + "->value = " + tempDataArr.get(i) + ";\n"
					+ tempNameArr.get(i) + "->additional = " + tempNameArr.get(i + 1) + ";\n" 
					+ tempNameArr.get(i) + "->next = NULL;\n" 
					+ tempNameArr.get(i)+ "->concat = NULL;\n";
		}	
			
		helperHead = tempNameArr.get(0);
		if (val.equals("\"\"")) {
			helperHead = "NULL";
			helper = "";
		}
		
		name += helper;*/
		
		return super.toC(localVars);
	}
	
	//this is the same as toC
	@Override
	public String toC_opt() {
		ArrayList<String> fake_localVars = new ArrayList<String>();
		return this.toC(fake_localVars);
	}
}

class DivideExpr extends CuExpr{
	public CuExpr left, right;
	public DivideExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "divide";
		super.boxed = true;
		super.expType = "Iterable";
	}
	
	@Override 
	public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	/*
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		if (!left.getType(context).isInteger() || !right.getType(context).isInteger())
			throw new NoSuchTypeException(Helper.getLineInfo());
		return CuType.integer;
	}
	 */
	
	@Override
	public boolean equals(Object that){
		if (that instanceof DivideExpr &&
				left.equals(((DivideExpr)that).left)&&
				right.equals(((DivideExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		//a.setUnboxType();
		//b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		//for var1 and var2, we know they are integers
		//var1.boxed = false;
		var1.expType = "Integer";
		//var2.boxed = false;
		var2.expType = "Integer";
		
		CuExpr expr = new DivideExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.castType = "Iterable";
		super.iterType = "Integer";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		String intName = Helper.getVarName();
		
		name += "\n" + leftC + rightC;
		
		super.name += "Iterable* " + temp + ";\n"
				+ "Integer* " + intName + ";\n";
		super.name += String.format("if(((%s*)%s)->value == 0) \n\t"
				+ temp + " = NULL;\n"
				,  "Integer", rightToC);
		super.name += "else {\n";
		super.name += String.format("\t%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "\t%s->nrefs = 0;\n"
				+ "\t%s->value=", intName, intName, intName);
		super.name += String.format("((%s*)%s)->value / ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);	
		
		super.name += "\t" + temp + " = (Iterable*) x3malloc(sizeof(Iterable));\n\t"
				+ temp + "->isIter = 1;\n"
				+ temp + "->nrefs = 0;\n\t"
				+ temp + "->value = " + intName + ";\n\t"
				+ temp + "->additional = NULL;\n\t"
				+ temp + "->next = NULL;\n\t"
				+ temp + "->concat = NULL;\n";
		
		super.name += Helper.incrRefCount(intName);		
		super.name += "}\n";
		super.cText = temp;
		Helper.cVarType.put(temp, "Iterable");
		Helper.cVarType.put(intName, "Integer");
		
		/*		if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		def.add(intName);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);
		*/
		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("((%s*)%s)->value / ((%s*)%s)->value;\n", "Integer", left.toC(), "Integer", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value / %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value / (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value / %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		String temp = Helper.getVarName();
		
		super.castType = "Iterable";
		super.iterType = "Integer";
		String leftToC = left.toC_opt();
		String rightToC = right.toC_opt();
		String leftC = left.construct();
		String rightC = right.construct();
		
		String intName = Helper.getVarName();
		
		name += "\n" + leftC + rightC;
		
		super.name += "Iterable* " + temp + ";\n"
				+ "Integer* " + intName + ";\n";
		
		if (right.expBoxed()) {
			super.name += String.format("if(((%s*)%s)->value == 0) \n\t"
					+ temp + " = NULL;\n"
					,  "Integer", rightToC);
		}
		else {
			super.name += "if (" + rightToC + "==0) {\n";
			super.name += "\t" + temp + " = NULL;\n";
			super.name += "}\n";
		}
		super.name += "else {\n";
		super.name += String.format("\t%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "\t%s->nrefs = 0;\n"
				+ "\t%s->value=", intName, intName, intName);
		
		String fLeft = leftToC;
		if (left.expBoxed()) 
			fLeft = Helper.unbox(leftToC, "Integer");
		String fRight = rightToC;
		if (right.expBoxed())
			fRight = Helper.unbox(rightToC, "Integer");
		//super.name += String.format("((%s*)%s)->value / ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);	
		super.name += fLeft + " / " + fRight + ";\n";
		
		super.name += "\t" + temp + " = (Iterable*) x3malloc(sizeof(Iterable));\n\t"
				+ temp + "->isIter = 1;\n"
				+ temp + "->nrefs = 0;\n\t"
				+ temp + "->value = " + intName + ";\n\t"
				+ temp + "->additional = NULL;\n\t"
				+ temp + "->next = NULL;\n\t"
				+ temp + "->concat = NULL;\n";
		
		super.name += Helper.incrRefCount(intName);		
		super.name += "}\n";
		super.cText = temp;
		Helper.cVarType.put(temp, "Iterable");
		Helper.cVarType.put(intName, "Integer");
		

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		return super.toC_opt();
	}
}

class EqualExpr extends CuExpr{
	public CuExpr left, right;
	public String method2= null;
	Boolean bool;
	
	public EqualExpr(CuExpr e1, CuExpr e2, Boolean eq) {
		left = e1;
		right = e2;
		bool = eq;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "equals";
		
		if (eq) {
			super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		}
		else {
			method2 = "negate";
			super.text = String.format("%s . %s < > ( %s ) . negate ( )", left.toString(), super.methodId, right.toString());
		}
		
		super.boxed = false;
		super.expType = "Boolean";
	}
	
	@Override 
	public String toString() {
		if (bool) {
			super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		}
		else {
			super.text = String.format("%s . %s < > ( %s ) . negate ( )", left.toString(), super.methodId, right.toString());
		}
		return super.text;
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof EqualExpr &&
				left.equals(((EqualExpr)that).left)&&
				right.equals(((EqualExpr)that).right)&&
				bool==((EqualExpr)that).bool)
			return true;
		else 
			return false;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		CuType t = binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
		if (method2 != null) {
			CuClass cur_class = context.mClasses.get(t.id);
			return cur_class.mFunctions.get(method2).data_t;
		}
		return t;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		//a.setUnboxType();
		//b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		//var1.boxed = a.boxed;
		var1.expType = a.statType;
		//var2.boxed = b.boxed;
		var2.expType = b.statType;
		
		CuExpr expr = new EqualExpr(var1, var2, bool);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = "Boolean";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		String leftCastType = ""; 
		String rightCastType = "";
		
		name += "\n" + leftC + rightC;
		
		if (leftC.equals("") && rightC.equals("")){
			leftCastType = "(" + Helper.cVarType.get(leftToC) + "*)";
			rightCastType = "(" + Helper.cVarType.get(rightToC) + "*)";
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			leftCastType = "(" + right.getCastType() + "*)";
			rightCastType = "(" + right.getCastType() + "*)";
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			rightCastType = "(" + left.getCastType() + "*)";
			leftCastType = "(" + left.getCastType() + "*)";
		}
		else {
			leftCastType =  "(" + left.getCastType() + "*)";
			rightCastType = "(" + right.getCastType() + "*)";
		}
		
		String temp = Helper.getVarName();
		
		name += "Boolean* " + temp + " = (Boolean*) malloc(sizeof(Boolean);\n" +
				temp + "->nrefs = 0;\n" +
				temp + "->value = ";
		
		if (!leftCastType.equals("(String*)") && !rightCastType.equals("(String*)")) {
			if (method2 == null)
				name += String.format(
						"(%s %s)->value == (%s %s)->value", leftCastType,
						leftToC, rightCastType, rightToC);
			else
				name += String.format(
						"(%s %s)->value != (%s %s)->value", leftCastType,
						leftToC, rightCastType, rightToC);
		}
		else {
			if (method2 == null)
				name += String.format(
						"(mystrcmp(((%s %s)->value), ((%s %s)->value)) ? 0 : 1)", leftCastType,
						leftToC, rightCastType, rightToC);
			else
				name += String.format(
						"(mystrcmp(((%s %s)->value), ((%s %s)->value)) ? 1 : 0)", leftCastType,
						leftToC, rightCastType, rightToC);
		
		}
		
		name += ";\n";
		
		cText = temp;
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (leftC.equals("") && rightC.equals("")){
			leftCastType = "(" + Helper.cVarType.get(left.toC()) + "*)";
			rightCastType = "(" + Helper.cVarType.get(right.toC()) + "*)";
			
			if (!Helper.cVarType.get(left.toC()).equals("String") && !Helper.cVarType.get(right.toC()).equals("String")) {
				if (eq)
					super.cText = String.format(
							"(%s %s)->value == (%s %s)->value", leftCastType,
							left.toC(), rightCastType, right.toC());
				else
					super.cText = String.format(
							"(%s %s)->value != (%s %s)->value", leftCastType,
							left.toC(), rightCastType, right.toC());
			}
			else {
				if (eq)
					super.cText = String.format(
							"*((%s %s)->value) == *((%s %s)->value)", leftCastType,
							left.toC(), rightCastType, right.toC());
				else
					super.cText = String.format(
							"*((%s %s)->value) != *((%s %s)->value)", leftCastType,
							left.toC(), rightCastType, right.toC());
			
			}
			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right's type is known
			leftCastType = "(" + right.getCastType() + "*)";
			
			if (!right.castType.equals("String")) {			
				if (eq)
					super.cText = String.format("(%s %s)->value == %s.value",
							leftCastType, left.toC(), right.toC());
				else
					super.cText = String.format("(%s %s)->value != %s.value",
							leftCastType, left.toC(), right.toC());
			}
			else {
				if (eq)
					super.cText = String.format("*((%s %s)->value) == *(%s.value)",
							leftCastType, left.toC(), right.toC());
				else
					super.cText = String.format("*((%s %s)->value) != *(%s.value)",
							leftCastType, left.toC(), right.toC());
			}
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left's type is known
			rightCastType = "(" + left.getCastType() + "*)";
			
			if (!left.castType.equals("String")) {			
				if (eq)
					super.cText = String.format("%s.value == (%s %s)->value",
							left.toC(), rightCastType, right.toC());
				else
					super.cText = String.format("%s.value != (%s %s)->value",
							left.toC(), rightCastType, right.toC());
			}
			else {
				if (eq)
					super.cText = String.format("*(%s.value) == *((%s %s)->value)", left.toC(), rightCastType, right.toC());
				else
					super.cText = String.format("*(%s.value) != *((%s %s)->value)", left.toC(), rightCastType, right.toC());
				
			}
		}
		else {
			//both types are not known
			if (!left.castType.equals("String") && !right.castType.equals("String")) {
				if (eq)
					super.cText = String.format("%s.value == %s.value",
							left.toC(), right.toC());
				else
					super.cText = String.format("%s.value != %s.value",
							left.toC(), right.toC());
			}
			else
			{
				if (eq)
					super.cText = String.format("*(%s.value) == *(%s.value)",
							left.toC(), right.toC());
				else
					super.cText = String.format("*(%s.value) != *(%s.value)",
							left.toC(), right.toC());			
			}
		}*/
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		castType = "Boolean";
		String leftToC = left.toC_opt();
		String rightToC = right.toC_opt();
		String leftC = left.construct();
		String rightC = right.construct();
		
		String leftCastType = ""; 
		String rightCastType = "";
		
		name += "\n" + leftC + rightC;
		
		if (leftC.equals("") && rightC.equals("")){
			leftCastType = "(" + Helper.cVarType.get(leftToC) + "*)";
			rightCastType = "(" + Helper.cVarType.get(rightToC) + "*)";
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			leftCastType = "(" + right.getCastType() + "*)";
			rightCastType = "(" + right.getCastType() + "*)";
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			rightCastType = "(" + left.getCastType() + "*)";
			leftCastType = "(" + left.getCastType() + "*)";
		}
		else {
			leftCastType =  "(" + left.getCastType() + "*)";
			rightCastType = "(" + right.getCastType() + "*)";
		}
		
		/*String temp = Helper.getVarName();
		
		name += "Boolean* " + temp + " = (Boolean*) malloc(sizeof(Boolean);\n" +
				temp + "->nrefs = 0;\n" +
				temp + "->value = ";*/
		
		String fLeft = leftToC;
		String fRight = rightToC;
		
		if (left.expBoxed()) {
			fLeft = String.format("(%s %s)->value", leftCastType, leftToC);
		}
		
		if (right.expBoxed()) {
			fRight = String.format("(%s %s)->value", rightCastType, rightToC);
		}
		
		if (!leftCastType.equals("(String*)") && !rightCastType.equals("(String*)")) {			
			if (method2 == null)
				super.cText = String.format(
						"%s == %s", fLeft, fRight);
			else
				super.cText = String.format(
						"%s != %s", fLeft, fRight);
		}
		else {
			if (method2 == null)
				super.cText = String.format(
						"(mystrcmp(%s, %s) ? 0 : 1)", fLeft, fRight);
			else
				super.cText = String.format(
						"(mystrcmp(%s, %s) ? 1 : 0)", fLeft, fRight);
		
		}
		
		super.cText += ";\n";

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
	
		return super.toC_opt();
	}
}

class GreaterThanExpr extends CuExpr{
	public CuExpr left, right;
	boolean b;
	public GreaterThanExpr(CuExpr e1, CuExpr e2, Boolean strict) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		b = strict;
		super.methodId = "greaterThan";
		Helper.ToDo("strict boolean??");
		super.boxed = false;
		super.expType = "Boolean";
	}
	
	@Override public String toString() {
		super.text = String.format("%s . %s < > ( %s , %s )", left.toString(), super.methodId, right.toString(), b);
		return super.text;
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof GreaterThanExpr &&
				left.equals(((GreaterThanExpr)that).left)&&
				right.equals(((GreaterThanExpr)that).right)&&
				b==((GreaterThanExpr)that).b)
			return true;
		else 
			return false;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		boolean b1 = left.isTypeOf(context, CuType.integer) && right.isTypeOf(context, CuType.integer);
		boolean b2 = left.isTypeOf(context, CuType.bool) && right.isTypeOf(context, CuType.bool);
		if ((!b1) && (!b2))
			throw new NoSuchTypeException(Helper.getLineInfo());
		return CuType.bool;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		//a.setUnboxType();
		//b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		//var1.boxed = a.boxed;
		var1.expType = a.statType;
		//var2.boxed = b.boxed;
		var2.expType = b.statType;
		
		CuExpr expr = new GreaterThanExpr(var1, var2, this.b);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = "Boolean";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		String leftCastType = "(" + left.getCastType() + "*)"; 
		String rightCastType = "(" + right.getCastType() + "*)";
		
		name += "\n" + leftC + rightC;
		
		if(leftCastType.equals(""))
			leftCastType = "(" + Helper.cVarType.get(leftToC) + "*)";
		if(rightCastType.equals(""))
			rightCastType = "(" + Helper.cVarType.get(rightToC) + "*)";
		
		String temp = Helper.getVarName();
		
		name += "Boolean* " + temp + " = (Boolean*) malloc(sizeof(Boolean);\n" +
				temp + "->nrefs = 0;\n" +
				temp + "->value = ";
		
		if (b)
			name += String.format("(%s %s)->value > (%s %s)->value", leftCastType, leftToC, rightCastType, rightToC);
		else
			name += String.format("(%s %s)->value >= (%s %s)->value", leftCastType, leftToC, rightCastType, rightToC);
		
		name += ";\n";
		
		super.cText = temp;

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";	
			
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		castType = "Boolean";
		String leftToC = left.toC_opt();
		String rightToC = right.toC_opt();
		String leftC = left.construct();
		String rightC = right.construct();
		
		String leftCastType = "(" + left.getCastType() + "*)"; 
		String rightCastType = "(" + right.getCastType() + "*)";
		
		name += "\n" + leftC + rightC;
		
		if(leftCastType.equals(""))
			leftCastType = "(" + Helper.cVarType.get(leftToC) + "*)";
		if(rightCastType.equals(""))
			rightCastType = "(" + Helper.cVarType.get(rightToC) + "*)";
		
		String fLeft = leftToC;
		String fRight = rightToC;
		if (left.expBoxed())
			fLeft = String.format("(%s %s)->value", leftCastType, leftToC);
		if (right.expBoxed())
			fRight = String.format("(%s %s)->value", rightCastType, rightToC);
		
		if (b)
			super.cText = String.format("%s > %s", fLeft, fRight);
		else
			super.cText = String.format("%s >= %s", fLeft, fRight);
		
		super.cText += ";\n";
		

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";	
			
		return super.toC_opt();
	}
}

class LessThanExpr extends CuExpr{
	public CuExpr left, right;
	boolean b;
	public LessThanExpr(CuExpr e1, CuExpr e2, Boolean strict) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		b = strict;
		super.methodId = "lessThan";
		
		super.boxed = false;
		super.expType = "Boolean";
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof LessThanExpr &&
				left.equals(((LessThanExpr)that).left)&&
				right.equals(((LessThanExpr)that).right)&&
				b==((LessThanExpr)that).b)
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( %s, %s )", left.toString(), super.methodId, right.toString(), b);
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		boolean b1 = left.isTypeOf(context, CuType.integer) && right.isTypeOf(context, CuType.integer);
		boolean b2 = left.isTypeOf(context, CuType.bool) && right.isTypeOf(context, CuType.bool);
		if ((!b1) && (!b2))
			throw new NoSuchTypeException(Helper.getLineInfo());
		return CuType.bool;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		//a.setUnboxType();
		//b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		//var1.boxed = a.boxed;
		var1.expType = a.statType;
		//var2.boxed = b.boxed;
		var2.expType = b.statType;	
		
		CuExpr expr = new LessThanExpr(var1, var2, this.b);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
				
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = "Boolean";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		String leftCastType = "(" + left.getCastType() + "*)"; 
		String rightCastType = "(" + right.getCastType() + "*)";
		
		name += "\n" + leftC + rightC;
		
		if(leftCastType.equals(""))
			leftCastType = "(" + Helper.cVarType.get(leftToC) + "*)";
		if(rightCastType.equals(""))
			rightCastType = "(" + Helper.cVarType.get(rightToC) + "*)";
		
		String temp = Helper.getVarName();
		
		name += "Boolean* " + temp + " = (Boolean*) malloc(sizeof(Boolean);\n" +
				temp + "->nrefs = 0;\n" +
				temp + "->value = ";
		
		if (b)
			name += String.format("(%s %s)->value < (%s %s)->value", leftCastType, leftToC, rightCastType, rightToC);
		else
			name += String.format("(%s %s)->value <= (%s %s)->value", leftCastType, leftToC, rightCastType, rightToC);
		
		name += ";\n";
		
		super.cText = temp;

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());
		
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/
		
		/*if (leftC.equals("") && rightC.equals("")) {
			leftCastType = "(" + Helper.cVarType.get(left.toC()) + "*)";
			rightCastType = "(" + Helper.cVarType.get(right.toC()) + "*)";
			if (strict)
				super.cText = String.format("(%s %s)->value < (%s %s)->value", leftCastType, left.toC(), rightCastType, right.toC());
			else
				super.cText = String.format("(%s %s)->value <= (%s %s)->value", leftCastType, left.toC(), rightCastType, right.toC());
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";
			
			if (strict)
				super.cText = String.format("(%s %s)->value < %s.value", leftCastType, left.toC(), right.toC());
			else
				super.cText = String.format("(%s %s)->value <= %s.value", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			
			if (strict)
				super.cText = String.format("%s.value < (%s %s)->value", left.toC(), rightCastType, right.toC());
			else
				super.cText = String.format("%s.value <= (%s %s)->value", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			if (strict)
				super.cText = String.format("%s.value < %s.value", left.toC(), right.toC());
			else
				super.cText = String.format("%s.value <= %s.value", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

class MinusExpr extends CuExpr{
	public CuExpr left, right;
	public MinusExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "minus";
		
		super.boxed = false;
		super.expType = "Integer";
	}
	
	@Override 
	public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof MinusExpr &&
				left.equals(((MinusExpr)that).left)&&
				right.equals(((MinusExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	/*
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		if (!left.getType(context).isInteger() || !right.getType(context).isInteger())
			throw new NoSuchTypeException(Helper.getLineInfo());
		return CuType.integer;
	}*/
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = false;
		var1.expType = "Integer";
		var2.boxed = false;
		var2.expType = "Integer";
		
		CuExpr expr = new MinusExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp;
		super.castType = "Integer";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		//String leftCastType = ""; 
		//String rightCastType = "";
		
		name += "\n" + leftC + rightC;

		super.name += String.format("Integer* %s;\n%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		super.name += String.format("((%s*)%s)->value - ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);			

		if (!localVars.contains(temp))
			localVars.add(temp);
		Helper.cVarType.put(temp, "Integer");
		
		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);
*/		
		/*if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("((%s*)%s)->value - ((%s*)%s)->value;\n", "Integer", left.toC(), "Integer", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value - %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value - (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value - %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

class ModuloExpr extends CuExpr{
	public CuExpr left, right;
	public ModuloExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "modulo";
		
		super.boxed = true;
		super.expType = "Iterable";
		
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof ModuloExpr &&
				left.equals(((ModuloExpr)that).left)&&
				right.equals(((ModuloExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = false;
		var1.expType = "Integer";
		var2.boxed = false;
		var2.expType = "Integer";
		
		CuExpr expr = new ModuloExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.castType = "Iterable";
		super.iterType = "Integer";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		String intName = Helper.getVarName();
		
		name += "\n" + leftC + rightC;
		
		super.name += "Iterable* " + temp + " = NULL;\n"
				+ "Integer* " + intName + " = NULL;\n";
		super.name += String.format("if(((%s*)%s)->value == 0) \n\t"
				+ temp + " = NULL;\n"
				,  "Integer", rightToC);
		super.name += "else {\n";
		super.name += String.format("\t%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "\t%s->nrefs = 0;\n"
				+ "\t%s->value=", intName, intName, intName);
		super.name += String.format("((%s*)%s)->value %% ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);	
		
		super.name += "\t" + temp + " = (Iterable*) x3malloc(sizeof(Iterable));\n\t"
				+ temp + "->isIter = 1;\n"
				+ temp + "->nrefs = 0;\n\t"
				+ temp + "->value = " + intName + ";\n\t"
				+ temp + "->additional = NULL;\n\t"
				+ temp + "->next = NULL;\n\t"
				+ temp + "->concat = NULL;\n";
		
		super.name += Helper.incrRefCount(intName);		
		super.name += "}\n";
		super.cText = temp;
		Helper.cVarType.put(temp, "Iterable");
		Helper.cVarType.put(intName, "Integer");
		
		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		def.add(intName);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/
		
		/*if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("((%s*)%s)->value % ((%s*)%s)->value;\n", "Integer", left.toC(), "Integer", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value % %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value % (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value % %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

class NegateExpr extends CuExpr{
	public CuExpr val;
	public NegateExpr(CuExpr e) {
		val = e;
		containsVar.addAll(val.containsVar);
		super.methodId = "negate";

		super.boxed = false;
		super.expType = "Boolean";

	}

	@Override
	public boolean equals(Object that){
		if (that instanceof NegateExpr &&
				val.equals(((NegateExpr)that).val))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( )", val.toString(), super.methodId);
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return unaryExprType(context, val.getType(context).id, super.methodId);
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> valToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName();
		
		valToHir = val.toHIR();
		stats.addAll(valToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuStat a = new AssignStat(temp1, valToHir.getSecond());
		stats.add(a);
		
		a.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		
		var1.boxed = false;
		var1.expType = "Boolean";
		
		CuExpr expr = new NegateExpr(var1);		
		
		//if (valToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp+".val";
		super.castType = "Boolean";
		String valToC = val.toC(localVars);
		String eC = val.construct();		
		
		name += "\n" + eC;	
		
		name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		name += String.format("!(((%s*)%s)->value);\n", "Boolean", valToC);

		if (!localVars.contains(temp))
			localVars.add(temp);
		Helper.cVarType.put(temp, "Boolean");
		
		if (!eC.equals(""))
			name += "x3free(" + valToC + ");\n";
		
		/*if (!val.getDef().isEmpty())
			def.addAll(val.getDef());
		if (!val.getUse().isEmpty())
			use.addAll(val.getUse());

		def.add(temp);
		if (eC.equals(""))
			use.add(valToC);*/
		
		
/*		if(eC.equals(""))
		{
			name += String.format("Boolean %s;\n%s.value=", temp, temp);
			name += String.format("!(((%s*)%s)->value);\n", "Boolean", e.toC());
		}
		else
		{
			name += String.format("Boolean %s;\n%s.value=", temp, temp);
			name += String.format("!(%s.value);\n", e.toC());
		}*/

		return super.toC(localVars);
	}
}

class NegativeExpr extends CuExpr{
	public CuExpr val;
	public NegativeExpr(CuExpr e) {
		val = e;
		containsVar.addAll(val.containsVar);
		super.methodId = "negative";
		
		super.boxed = false;
		super.expType = "Integer";
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof NegativeExpr &&
				val.equals(((NegativeExpr)that).val))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( )", val.toString(), super.methodId);
		return super.text;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return unaryExprType(context, val.getType(context).id, super.methodId);
	}
	/*
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		if (!val.getType(context).isInteger())
			throw new NoSuchTypeException(Helper.getLineInfo());
		return CuType.integer;
	}*/
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> valToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName();
		
		valToHir = val.toHIR();
		stats.addAll(valToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuStat a = new AssignStat(temp1, valToHir.getSecond());
		stats.add(a);
		
		a.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		
		var1.boxed = false;
		var1.expType = "Integer";
		
		CuExpr expr = new NegativeExpr(var1);		
		
		//if (valToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp;
		super.castType = "Integer";
		String valToC = val.toC(localVars);
		String eC = val.construct();		
		
		name += "\n" + eC;
		
		name += String.format("Integer* %s;\n%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		name += String.format("-(((%s*)%s)->value);\n", "Integer", valToC);	
		
		if (!localVars.contains(temp))
			localVars.add(temp);
		Helper.cVarType.put(temp, "Integer");

		if (!eC.equals(""))
			name += "x3free(" + valToC + ");\n";
		
		/*if (!val.getDef().isEmpty())
			def.addAll(val.getDef());
		if (!val.getUse().isEmpty())
			use.addAll(val.getUse());

		def.add(temp);
		if (eC.equals(""))
			use.add(valToC);*/
		
		/*if(eC.equals(""))
		{
			name += String.format("Integer* %s  = (Integer*) x3malloc(sizeof(Integer));\n"
					+ "%s->value=", temp, temp);
			name += String.format("-(((%s*)%s)->value);\n", "Integer", e.toC());
		}
		else
		{
			name += String.format("Integer %s;\n%s.value=", temp, temp);
			name += String.format("-(%s.value);\n", e.toC());
		}*/
		return super.toC(localVars);
	}
}

class OnwardsExpr extends CuExpr{
	public CuExpr val;
	boolean inclusive;
	public OnwardsExpr(CuExpr e, Boolean inclusiveness) {
		val = e;
		containsVar.addAll(e.containsVar);
		inclusive = inclusiveness;
		super.methodId = "onwards";
		
		super.boxed = true;
		super.expType = "Iterable";
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof OnwardsExpr &&
				val.equals(((OnwardsExpr)that).val)&&
				inclusive==((OnwardsExpr)that).inclusive)
			return true;
		else 
			return false;
	}
	
	@Override public String toString() {
		super.text = String.format("%s . %s < > ( %s )", val.toString(), super.methodId, inclusive);
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, val.getType(context).id, super.methodId, CuType.bool);
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> valToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName();
		
		valToHir = val.toHIR();
		stats.addAll(valToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuStat a = new AssignStat(temp1, valToHir.getSecond());
		stats.add(a);
		
		a.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		
		//I suddenly feel this is better, because this vvexpr needs to consistent with variable declaration
		var1.boxed = a.boxed;
		var1.expType = a.statType;
		
		CuExpr expr = new OnwardsExpr(var1, inclusive);		
		
		//if (valToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = "Iterable";		
		String valToC = val.toC(localVars);
		
		if (val.getCastType().equals("Boolean"))
		{			
			iterType = "Boolean";
			if (val.toString().equals("true")) {
				if (inclusive) {
					String iter = Helper.getVarName();
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					Helper.cVarType.put(iter, "Iterable");
				}
				else
					cText = "NULL";
			}
			else {
				if(inclusive) {
					String iter = Helper.getVarName();
					String iterTemp = Helper.getVarName(), falseTemp = Helper.getVarName(), trueTemp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							trueTemp, trueTemp, trueTemp, trueTemp);
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 0;\n"
							+ "%s->nrefs = 1;\n",
							falseTemp, falseTemp, falseTemp, falseTemp);
					
					name +=  "Iterable* " + iterTemp + ";\n" + iterTemp+ " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iterTemp + "->isIter = 1;\n"
							+ iterTemp + "->nrefs = 1;\n"
							+ iterTemp + "->value = " + trueTemp + ";\n"
							+ iterTemp + "->additional = NULL;\n"
							+ iterTemp + "->next = NULL;\n"
							+ iterTemp + "->concat = NULL;\n";
										
					name +=  "Iterable* " + iter + ";\n" + iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + falseTemp + ";\n"
							+ iter + "->additional =" + iterTemp + ";\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(iter, "Iterable");
					
					Helper.cVarType.put(iterTemp, "Iterable");
					
					Helper.cVarType.put(trueTemp, "Boolean");
					
					Helper.cVarType.put(falseTemp, "Boolean");
				}
				
				else {
					String iter = Helper.getVarName();
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					
					Helper.cVarType.put(iter, "Iterable");
				}
			}
				
			
		}
		
		else {
			iterType = "Integer";
			if(inclusive) {
				name += val.construct();
				String iter = Helper.getVarName();
		
				name += "Iterable* " + iter + ";\n" + iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + valToC + ";\n"
						+ iter + "->additional = NULL;\n"
						+ iter + "->next = &" + val.getCastType() + "_onwards;\n"
						+ iter + "->concat = NULL;\n";
		
				cText = iter;
				Helper.cVarType.put(iter, "Iterable");
			}
			else {
				String temp = Helper.getVarName();
				String iter = Helper.getVarName();
												
				int i = (Integer.parseInt(val.toString())) + 1;
				name += "Integer* " + temp + ";\n" +temp + " = (Integer*) x3malloc(sizeof(Integer));\n"
						+ temp + "->value = " + i + ";\n"
						+ temp + "->nrefs = 1;\n";					
					
				
				name +=  "Iterable* " + iter + ";\n" +iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + temp + ";\n"
						+ iter + "->additional = NULL;\n"
						+ iter + "->next = &" + val.getCastType() + "_onwards;\n"
						+ iter + "->concat = NULL;\n";
				
				cText = iter;
				Helper.cVarType.put(iter, "Iterable");
				Helper.cVarType.put(temp, "Integer");
			}
		}
		return super.toC(localVars);
	}
}

class OrExpr extends CuExpr{
	public CuExpr left, right;
	public OrExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "or";
		
		super.boxed = false;
		super.expType = "Boolean";
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof OrExpr &&
				left.equals(((OrExpr)that).left)&&
				right.equals(((OrExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override 
	public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = a.boxed;
		var1.expType = a.statType;
		var2.boxed = b.boxed;
		var2.expType = b.statType;
		
		CuExpr expr = new OrExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {

		String temp = Helper.getVarName();
		
		super.cText = temp+".value";
		super.castType = "Boolean";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		name += "\n" + leftC + rightC;
		
		super.name += String.format("Boolean* %s;\n%s  = (Boolean*) x3malloc(sizeof(Boolean));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		super.name += String.format("((%s*)%s)->value || ((%s*)%s)->value;\n", "Boolean", leftToC, "Boolean", rightToC);	
		
		if (!localVars.contains(temp))
			localVars.add(temp);
		Helper.cVarType.put(temp, "Boolean");

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/
		
		/*if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Boolean* %s  = (Boolean*) x3malloc(sizeof(Boolean));\n"
					+ "%s->nrefs = 0;\n"
					+ "%s->value=", temp, temp, temp);
			super.name += String.format("((%s*)%s)->value || ((%s*)%s)->value;\n", "Boolean", left.toC(), "Boolean", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is Boolean
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Boolean %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value || %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is Boolean
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Boolean %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value || (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are Booleans
			super.name += String.format("Boolean %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value || %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

/*
 * For plusExpr, left and right can be boxed (caused by generic types, as in the function example Ross gives),
 * or it can be unboxed. If it is boxed, it left and right will be void pointers
 */
class PlusExpr extends CuExpr{
	public CuExpr left, right;
	public PlusExpr(CuExpr e1, CuExpr e2) {
		left = e1;
		right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "plus";
		
		super.boxed = false;
		super.expType = "Integer";
	}
	
	@Override public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	@Override
	public boolean equals(Object that){
		if (that instanceof PlusExpr &&
				left.equals(((PlusExpr)that).left)&&
				right.equals(((PlusExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		//System.out.println("in plus expr begin");
		CuType lt = left.getType(context);
		Helper.P("PlusExpr: %s is class %b", lt, lt instanceof VClass);
		if (lt.isClassOrInterface()) {
			VClass lc = (VClass)lt;
			Helper.P("PlusExpr: %s mapping %s", lc, lc.map);
		}
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = a.boxed;
		var1.expType = a.statType;
		var2.boxed = b.boxed;
		var2.expType = b.statType;		
		
		CuExpr expr = new PlusExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp;
		super.castType = "Integer";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		name += "\n" + leftC + rightC;
		
		super.name += String.format("Integer* %s;\n%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		super.name += String.format("((%s*)%s)->value + ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);			
		
		/*if (!localVars.contains(temp))
			localVars.add(temp);*/
		Helper.cVarType.put(temp, "Integer");

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);
*/		
		/*
		if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("((%s*)%s)->value + ((%s*)%s)->value;\n", "Integer", left.toC(), "Integer", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value + %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value + (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value + %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

class ThroughExpr extends CuExpr{
	public CuExpr left, right;
	boolean bLow, bUp;
	public ThroughExpr(CuExpr e1, CuExpr e2, Boolean low, Boolean up) {
		left = e1;
		right = e2;
		bLow = low;
		bUp = up;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "through";
		
		super.boxed = true;
		super.expType = "Iterable";
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( %s , %s , %s )", left.toString(), methodId, right.toString(), bLow, bUp);
		return super.text;
	}
	@Override
	public boolean equals(Object that){
		if (that instanceof ThroughExpr &&
				left.equals(((ThroughExpr)that).left)&&
				right.equals(((ThroughExpr)that).right)&&
				bLow==((ThroughExpr)that).bLow&&
				bUp==((ThroughExpr)that).bUp)
			return true;
		else 
			return false;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		boolean b1 = left.isTypeOf(context, CuType.integer) && right.isTypeOf(context, CuType.integer);
		boolean b2 = left.isTypeOf(context, CuType.bool) && right.isTypeOf(context, CuType.bool);
		if ((!b1) && (!b2))
			throw new NoSuchTypeException(Helper.getLineInfo());
		if (b1)
			return new Iter(CuType.integer);
		else
			return new Iter(CuType.bool);
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = a.boxed;
		var1.expType = a.statType;
		var2.boxed = b.boxed;
		var2.expType = b.statType;	
		
		CuExpr expr = new ThroughExpr(var1, var2, bLow, bUp);	
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;		
	}
	
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = "Iterable";
		String leftToC = left.toC(localVars), rightToC = right.toC(localVars);
		String iter = Helper.getVarName();
		
		if(bLow && bUp)	{
			if(left.getCastType().equals("Boolean")) {
				iterType = "Boolean";
				//true..true
				if(left.toString().equals("true") && right.toString().equals("true"))
				{
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					Helper.cVarType.put(iter, "Iterable");
				}
				
				//false..true
				else if (left.toString().equals("false") && right.toString().equals("true"))
				{
					String iterTemp = Helper.getVarName(), falseTemp = Helper.getVarName(), trueTemp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							trueTemp, trueTemp, trueTemp, trueTemp);
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 0;\n"
							+ "%s->nrefs = 1;\n",
							falseTemp, falseTemp, falseTemp, falseTemp);
					
					name +=  "Iterable* " + iterTemp + ";\n" + iterTemp +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iterTemp + "->isIter = 1;\n"
							+ iterTemp + "->nrefs = 1;\n"					//because first iter points to this
							+ iterTemp + "->value = " + trueTemp + ";\n"
							+ iterTemp + "->additional = NULL;\n"
							+ iterTemp + "->next = NULL;\n"
							+ iterTemp + "->concat = NULL;\n";
										
					name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + falseTemp + ";\n"
							+ iter + "->additional =" + iterTemp + ";\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(iter, "Iterable");
					
					Helper.cVarType.put(iterTemp, "Iterable");
					
					Helper.cVarType.put(trueTemp, "Boolean");
					Helper.cVarType.put(falseTemp, "Boolean");
				}
				
				//true..false
				else if (left.toString().equals("true") && right.toString().equals("false"))
				{
					cText = "NULL";
				}
				
				//false..false
				else
				{
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 0;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					Helper.cVarType.put(iter, "Iterable");
				}
			}
			
			else {
				iterType = "Integer";
				String leftC = left.construct();
				String rightC = right.construct();
				
				name += leftC;
				name += rightC;
			
				name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + leftToC + ";\n"
						+ iter + "->additional = " + rightToC + ";\n"
						+ iter + "->next = &" + left.getCastType() + "_through;\n"
						+ iter + "->concat = NULL;\n";
				
				if(leftC.equals(""))
					name += Helper.incrRefCount(leftToC);
				if(rightC.equals(""))
					name += Helper.incrRefCount(rightToC);
				
				cText = "checkIter(" + iter + ")";
			}
		}
		else if (bUp){
			
			if(left.getCastType().equals("Boolean")) {
				iterType = "Boolean";
				//true<.true; true<.false; false<.false
				if ((left.toString().equals("True")) 
					|| (left.toString().equals("false") && right.toString().equals("false")) )
				{
					cText = "NULL";
				}
				
				//false<.true
				else
				{
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 1;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					Helper.cVarType.put(iter, "Iterable");
				}
			}
			
			else {
				String temp = Helper.getVarName();
				int i = (Integer.parseInt(left.toString())) + 1;
				name += "Integer* " + temp + ";\n" + temp +  " = (Integer*) x3malloc(sizeof(Integer));\n"
						+ temp + "->value = " + i + ";\n"
						+ temp + "->nrefs = 1;\n";							
					
				name += right.construct();
				
				name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + temp + ";\n"
						+ iter + "->additional = " + rightToC + ";\n"
						+ iter + "->next = &" + left.getCastType() + "_through;\n"
						+ iter + "->concat = NULL;\n";
				
				cText = "checkIter(" + iter + ")";
			}
		}
		else if (bLow) {
			
			if(left.getCastType().equals("Boolean")) {
				
				//true.<true; true.<false; false.<false
				if ((left.toString().equals("True")) 
					|| (left.toString().equals("false") && right.toString().equals("false")) )
				{
					cText = "NULL";
				}
				
				//false.<true
				else
				{
					String temp = Helper.getVarName();
					name += String.format("Boolean* %s;\n%s = (Boolean*) x3malloc(sizeof(Boolean));\n"
							+ "%s->value = 0;\n"
							+ "%s->nrefs = 1;\n",
							temp, temp, temp, temp);
					
					name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iter + "->isIter = 1;\n"
							+ iter + "->nrefs = 0;\n"
							+ iter + "->value = " + temp + ";\n"
							+ iter + "->additional = NULL;\n"
							+ iter + "->next = NULL;\n"
							+ iter + "->concat = NULL;\n";
					
					cText = iter;
					Helper.cVarType.put(temp, "Boolean");
					Helper.cVarType.put(iter, "Iterable");
				}
			}
			
			else {
				iterType = "Integer";
				String temp = Helper.getVarName();
				name += left.construct();
								
				int i = (Integer.parseInt(left.toString())) - 1;
				name += "Integer* " + temp + ";\n" + temp +  " = (Integer*) x3malloc(sizeof(Integer));\n"
						+ temp + "->value = " + i + ";\n"
						+ temp + "->nrefs = 1;\n";							
					
				
				name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + leftToC + ";\n"
						+ iter + "->additional = " + temp + ";\n"
						+ iter + "->next = &" + left.getCastType() + "_through;\n"
						+ iter + "->concat = NULL;\n";
				
				cText = iter;
			}					
		}
		else {
			
			if(left.getCastType().equals("Boolean")) {
				iterType = "Boolean";
				//true<<true; true<<false; false<<false; false<<true
				cText = "NULL";
			}
				
			else {
				iterType = "Integer";
				String temp1 = Helper.getVarName(), temp2 = Helper.getVarName(), iterTemp = Helper.getVarName();
				//name += left.construct();
								
				int i = (Integer.parseInt(left.toString())) + 1;
				name += "Integer* " + temp1 + ";\n" + temp1 +  " = (Integer*) x3malloc(sizeof(Integer));\n"
						+ temp1 + "->value = " + i + ";\n"
						+ temp1 + "->nrefs = 1;\n";							
				
				i = (Integer.parseInt(left.toString())) - 1;
				name += "Integer* " + temp2 + ";\n" + temp2 +  " = (Integer*) x3malloc(sizeof(Integer));\n"
						+ temp2 + "->value = " + i + ";\n"
						+ temp2 + "->nrefs = 1;\n";							
					
				name +=  "Iterable* " + iterTemp + ";\n" + iterTemp +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iterTemp + "->isIter = 1;\n"
						+ iterTemp + "->nrefs = 1;\n"					//because first iter points to this
						+ iterTemp + "->value = " + temp2 + ";\n"
						+ iterTemp + "->additional = NULL;\n"
						+ iterTemp + "->next = NULL;\n"
						+ iterTemp + "->concat = NULL;\n";
				
				name +=  "Iterable* " + iter + ";\n" + iter +  " = (Iterable*) x3malloc(sizeof(Iterable));\n"
						+ iter + "->isIter = 1;\n"
						+ iter + "->nrefs = 0;\n"
						+ iter + "->value = " + temp1 + ";\n"
						+ iter + "->additional = " + iterTemp + ";\n"
						+ iter + "->next = &" + left.getCastType() + "_through;\n"
						+ iter + "->concat = NULL;\n";
				
				cText = "checkIter(" + iter + ")";
			}
		}
		return super.toC(localVars);
	}
}

class TimesExpr extends CuExpr{
	public CuExpr left, right;
	public TimesExpr(CuExpr e1, CuExpr e2) {
		this.left = e1;
		this.right = e2;
		containsVar.addAll(left.containsVar);
		containsVar.addAll(right.containsVar);
		super.methodId = "times";
		
		super.boxed = false;
		super.expType = "Integer";

	}

	@Override
	public boolean equals(Object that){
		if (that instanceof TimesExpr &&
				left.equals(((TimesExpr)that).left)&&
				right.equals(((TimesExpr)that).right))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s < > ( %s )", left.toString(), super.methodId, right.toString());
		return super.text;
	}
	
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		return binaryExprType(context, left.getType(context).id, super.methodId, right.getType(context));
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> leftToHir = new Pair<List<CuStat>, CuExpr>();
		Pair<List<CuStat>, CuExpr> rightToHir = new Pair<List<CuStat>, CuExpr>();
		String name1 = Helper.getVarName(), name2 = Helper.getVarName();
		
		leftToHir = left.toHIR();
		rightToHir = right.toHIR();
		stats.addAll(leftToHir.getFirst());
		stats.addAll(rightToHir.getFirst());
		
		CuVvc temp1 = new Vv(name1);
		CuVvc temp2 = new Vv(name2);
		CuStat a = new AssignStat(temp1, leftToHir.getSecond());
		CuStat b = new AssignStat(temp2, rightToHir.getSecond());
		stats.add(a);
		stats.add(b);
		
		a.setUnboxType();
		b.setUnboxType();
		
		CuExpr var1 = new VvExp(name1);
		CuExpr var2 = new VvExp(name2);
		
		var1.boxed = a.boxed;
		var1.expType = a.statType;
		var2.boxed = b.boxed;
		var2.expType = b.statType;	
		
		CuExpr expr = new TimesExpr(var1, var2);		
		
		//if (leftToHir.getFirst().isEmpty())
			expr.use.add(var1.toString());
		//if (rightToHir.getFirst().isEmpty())
			expr.use.add(var2.toString());
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String temp = Helper.getVarName();
		
		super.cText = temp;
		super.castType = "Integer";
		String leftToC = left.toC(localVars);
		String rightToC = right.toC(localVars);
		String leftC = left.construct();
		String rightC = right.construct();
		
		name += "\n" + leftC + rightC;
		
		super.name += String.format("Integer* %s;\n%s  = (Integer*) x3malloc(sizeof(Integer));\n"
				+ "%s->nrefs = 0;\n"
				+ "%s->value=", temp, temp, temp, temp);
		super.name += String.format("((%s*)%s)->value * ((%s*)%s)->value;\n", "Integer", leftToC, "Integer", rightToC);			

		/*if (!localVars.contains(temp))
			localVars.add(temp);*/
		Helper.cVarType.put(temp, "Integer");

		if (!leftC.equals(""))
			name += "x3free(" + leftToC + ");\n";
		if (!rightC.equals(""))
			name += "x3free(" + rightToC + ");\n";
		
		/*if (!left.getDef().isEmpty())
			def.addAll(left.getDef());
		if (!right.getDef().isEmpty())
			def.addAll(right.getDef());
		if (!left.getUse().isEmpty())
			use.addAll(left.getUse());
		if (!right.getUse().isEmpty())
			use.addAll(right.getUse());

		def.add(temp);
		if (leftC.equals(""))
			use.add(leftToC);
		if (rightC.equals(""))
			use.add(rightToC);*/
		
		/*if (leftC.equals("") && rightC.equals("")){
			//both are variables
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("((%s*)%s)->value * ((%s*)%s)->value;\n", "Integer", left.toC(), "Integer", right.toC());			
		}
		else if (leftC.equals("") && !rightC.equals("")) { 
			//right is number
			leftCastType = "(" + right.getCastType() + "*)";			
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("(%s %s)->value * %s.value;\n", leftCastType, left.toC(), right.toC());
		}
		else if (!leftC.equals("") && rightC.equals("")) {
			//left is number
			rightCastType = "(" + left.getCastType() + "*)";
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value * (%s %s)->value;\n", left.toC(), rightCastType, right.toC());
		}
		else {
			//both are numbers
			super.name += String.format("Integer %s;\n%s.value=", temp, temp);
			super.name += String.format("%s.value * %s.value;\n", left.toC(), right.toC());
		}*/
		return super.toC(localVars);
	}
}

class VarExpr extends CuExpr{// e.vv<tao1...>(e1,...)
	public CuExpr val;
	public String method;
	public List<CuType> types;
	List<CuExpr> es;
	public VarExpr(CuExpr e, String var, List<CuType> pt, List<CuExpr> es) {		
		this.val = e;
		this.method = var;
		this.types = pt;
		this.es = es;
		containsVar.addAll(e.containsVar);
		for (CuExpr elem : es){
			containsVar.addAll(elem.containsVar);
		}
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof VarExpr &&
				val.equals(((VarExpr)that).val)&&
				((types==null&&((VarExpr)that).types==null)||types.equals(((VarExpr)that).types))&&
				((es==null&&((VarExpr)that).es==null)||es.equals(((VarExpr)that).es)))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text = String.format("%s . %s %s %s", this.val.toString(), this.method, 
				Helper.printList("<", this.types, ">", ","), Helper.printList("(", this.es, ")", ","));
		return super.text;
	}
	
	@Override public boolean isFunCall () {
		return true;
	}
	@Override protected CuType calculateType(CuContext context) throws NoSuchTypeException {
//System.out.println("in VarExp, begin");
        CuType tHat = val.getType(context); // 1st line in Figure 5 exp
//System.out.println("t_hat is " + tHat.id);
        CuClass cur_class = context.mClasses.get(tHat.id);
        if (cur_class == null) {
        	throw new NoSuchTypeException(Helper.getLineInfo());
        }
        CuTypeScheme ts = cur_class.mFunctions.get(method);
        if (ts == null) {
        	throw new NoSuchTypeException(Helper.getLineInfo());
        }
        //System.out.println("got this function");
        
        if (ts.data_kc.size() != types.size()) throw new NoSuchTypeException(Helper.getLineInfo());
        Map<String, CuType> mapping = new HashMap<String, CuType>();
        Helper.P(String.format("kc=%s. types=%s. eMap=%s",ts.data_kc, types,val.calculateType(context).map));
        for (int i = 0; i < types.size(); i++) {
        	mapping.put(ts.data_kc.get(i), types.get(i));
        }
        mapping.putAll(val.getType(context).map); // add mapping from the expression that owns this method
        //added by Yinglei
        if (ts.data_tc.size() != es.size()) throw new NoSuchTypeException(Helper.getLineInfo());
        List<CuType> tList = new ArrayList<CuType>();
        for (CuType ct : ts.data_tc.values()) {
        	tList.add(ct);
        }   
        for (int i = 0; i < es.size(); i++) {
        	if (!es.get(i).isTypeOf(context, tList.get(i), mapping)) {
        		//System.out.println(es.get(i).toString() + " doesnt match " + tList.get(i).toString() );
        		throw new NoSuchTypeException(Helper.getLineInfo());
        	}
        }        	
        //System.out.println("in VarExp, end");
        /*ts.data_t.plugIn(mapping);
        Helper.P(String.format("%s returns %s<%s>, mapping %s", this, ts.data_t,ts.data_t.map, mapping));
        return ts.data_t;*/
        //Yinglei: should not change data_t, should make a copy
        CuType reType = ts.data_t.getcopy();
        reType.plugIn(mapping);
//Helper.P(String.format("VvExp returns %s<%s>", cur_ts.data_t, cur_ts.data_t.map));
        //return cur_ts.data_t;
		return reType;
	}
	
	@Override
		public Pair<List<CuStat>, CuExpr> toHIR() {
			Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>();
			List<CuStat> stats = new ArrayList<CuStat>();
			List<CuExpr> newEs = new ArrayList<CuExpr>();
			
			
			for (CuExpr exp : es) {
				Pair<List<CuStat>, CuExpr> expToHir = exp.toHIR();
				stats.addAll(expToHir.getFirst());
				String name1 = Helper.getVarName();
				CuVvc vvc = new Vv(name1);			
				CuStat a = new AssignStat(vvc, expToHir.getSecond());
				stats.add(a);
				
				CuExpr e = new VvExp(name1);
				newEs.add(e);
				//if (expToHir.getFirst().isEmpty())
					use.add(e.toString());
			}
			
			CuExpr exp = new VarExpr(val, method, types, newEs);
			exp.use = use;
			
			temp.setFirst(stats);
			temp.setSecond(exp);
			
			return temp;
		}
	
	@Override
		public String toC(ArrayList<String> localVars) {
		
		String newTemp = Helper.cVarType.get(val.toString())+"_"+method;
		castType = Helper.cFunType.get(newTemp);
		iterType = Helper.iterType.get(newTemp);

		if(castType == null)
			castType = "";
		if(iterType == null)
			iterType = "";
		
		String tempName = Helper.getVarName();
		//String tempCastType = "";
		String classType = Helper.cVarType.get(val.toString());
		String valToC = val.toC(localVars);
		name += val.construct();
		name += "\n";
		name += String.format("void* this%s = %s;\n", tempName, valToC);
		String temp = "", expToC = "";
		if (es == null)
		{
			temp = String.format("(this%s)", tempName);
			//fptrArg = "(" + classType + ")";
		}
		else {
			temp += String.format("(this%s, ", tempName);
			//fptrArg = "(" + classType + ", ";
			for (CuExpr exp : es) {
				expToC = exp.toC(localVars);
				String eC = exp.construct();
				super.name += eC;
				/*tempCastType = exp.getCastType();
				if (tempCastType.equals(""))
					tempCastType = Helper.cVarType.get(expToC);*/
				temp += /*"(" + tempCastType + "*)" +*/ expToC + ", ";
				//fptrArg += tempCastType + "*, ";
				
				/*if (!exp.getDef().isEmpty())
					def.addAll(exp.getDef());
				if (!exp.getUse().isEmpty())
					use.addAll(exp.getUse());

				if (eC.equals(""))
					use.add(expToC);*/
			}
			int j = temp.lastIndexOf(", ");
			if (j > 1)
				temp = temp.substring(0, j);			
			temp += ")";
			//fptrArg += ")";
		}
		
		//B=a->TypeTable->fun(e1,e2);
		
		//name += String.format("void* (*%s) %s = (((%s) &%s)[0])[%d];	//unsure of this! needs testing\n", 	//unsure of this! needs testing				
		//						/*Helper.cVarType.get(var),*/ fptr, fptrArg, classType, val.toString(), offset);
		String returnName = Helper.getVarName();
		super.name += "void* " + returnName + ";\n";
		super.name += String.format("%s = (((%s*)%s)->%s)->%s%s;\n", returnName, classType, valToC, classType+"_Tbl", method.toString(), temp);
		
		/*def.add(returnName);
		use.add(valToC);*/
		
		
		super.cText = returnName;
		return super.toC(localVars);
		}

}
class VcExp extends CuExpr {// vc<tao1...>(e1,...)
	public String val; 
	public List<CuType> types;
	public List<CuExpr> es;
	public VcExp(String v, List<CuType> pt, List<CuExpr> e){
		//System.out.println("in VcExp constructor, begin");
		this.val=v;
		this.types=pt;
		this.es=e;

		for (CuExpr elem : es){
			containsVar.addAll(elem.containsVar);
		}
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof VcExp &&
				val.equals(((VcExp)that).val)&&
				((types==null&&((VcExp)that).types==null)||types.equals(((VcExp)that).types))&&
				((es==null&&((VcExp)that).es==null)||es.equals(((VcExp)that).es)))
			return true;
		else 
			return false;
	}
	
	@Override 
	public String toString() {
		super.text=val.toString()+Helper.printList("<", types, ">", ",")+Helper.printList("(", es, ")", ",");
		return super.text;
	}
	
	@Override public boolean isFunCall () {
		return true;
	}
	@Override protected CuType calculateType(CuContext context)  throws NoSuchTypeException{
		//System.out.println("in VcExp, begin val is " + val);
		//type check each tao_i // check tao in scope
		for (CuType ct : types) {
			ct.calculateType(context);
		}      
		
        if (context.getFunction(val) == null) throw new NoSuchTypeException(Helper.getLineInfo());
        // check each es 
        TypeScheme cur_ts = (TypeScheme) context.getFunction(val);
        List<CuType> tList = new ArrayList<CuType>();
        for (CuType cur_type : cur_ts.data_tc.values()) {
            tList.add(cur_type);
        }
        Map<String, CuType> mapping = new HashMap<String, CuType>();
        for (int i = 0; i < types.size(); i++) {
        	mapping.put(cur_ts.data_kc.get(i), types.get(i));
        }
  Helper.P(String.format("mapping=%s. types=%s. data_kc=%s ", mapping, types, cur_ts.data_kc));
  		//added by Yinglei
        if (es.size() != cur_ts.data_tc.size()) throw new NoSuchTypeException(Helper.getLineInfo());
        for (int i = 0; i < es.size(); i++) {
            if (!es.get(i).isTypeOf(context, tList.get(i), mapping)) {
            	//System.out.println(es.get(i).toString() + " doesnt match " + tList.get(i).toString() );
            	throw new NoSuchTypeException(Helper.getLineInfo());
            }
        }
        //System.out.println("in VcExp, end");
       /* cur_ts.data_t.plugIn(mapping);
 Helper.P(String.format("VcExp return %s<%s>", cur_ts.data_t, cur_ts.data_t.map));
        return cur_ts.data_t;*/
        //Yinglei: should not change data_t, should make a copy
        CuType reType = cur_ts.data_t.getcopy();
        reType.plugIn(mapping);
//Helper.P(String.format("VvExp returns %s<%s>", cur_ts.data_t, cur_ts.data_t.map));
        //return cur_ts.data_t;
		return reType;
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>();
		List<CuStat> stats = new ArrayList<CuStat>();
		List<CuExpr> newEs = new ArrayList<CuExpr>();

		for (CuExpr exp : es) {
			Pair<List<CuStat>, CuExpr> expToHir = exp.toHIR();
			stats.addAll(expToHir.getFirst());
			String name1 = Helper.getVarName();
			CuVvc vvc = new Vv(name1);
			CuStat a = new AssignStat(vvc, expToHir.getSecond());
			stats.add(a);

			CuExpr e = new VvExp(name1);
			newEs.add(e);
			//if (expToHir.getFirst().isEmpty())
				use.add(e.toString());
		}

		CuExpr exp = new VcExp(val, types, newEs);
		exp.use = use;
		
		temp.setFirst(stats);
		temp.setSecond(exp);

		return temp;
	}	
	
	@Override
	public String toC(ArrayList<String> localVars) {
		castType = Helper.cFunType.get("new_"+val);
		String temp = "", tempCastType = "", expToC = "", expConstruct = "";
		if (es == null)
			temp = "()";
		else {
			temp += "(";
			for (CuExpr exp : es) {
				expToC = exp.toC(localVars);
				expConstruct = exp.construct();
				String eC = expConstruct;
				super.name += eC;
				tempCastType = exp.getCastType();
				if (tempCastType.equals(""))
					tempCastType = Helper.cVarType.get(expToC);
				temp += expToC + ", ";
				if (!expConstruct.equals("")) {
					Helper.cVarType.put(expToC, tempCastType);
				}
			
				/*if (!exp.getDef().isEmpty())
					def.addAll(exp.getDef());
				if (!exp.getUse().isEmpty())
					use.addAll(exp.getUse());

				if (eC.equals(""))
					use.add(expToC);*/
				
			}
			int j = temp.lastIndexOf(", ");
			if (j > 1)
				temp = temp.substring(0, j);
			temp += ")";
		}
		
		String objectName = Helper.getVarName();
		super.name += String.format("%s* %s;\n%s = (%s*) x3malloc(sizeof(%s));\n"
				+ "%s->nrefs = 0; \n",
				val, objectName, objectName, val, val, objectName);
		
		//j = 2;
		
		super.name += String.format("%s = new_%s %s;\n", objectName, val, temp);
		
		/*def.add(objectName);
		use.add(val);*/
		
		/*for (CuExpr exp : es) {
			expToC = exp.toC(localVars);
			tempCastType = exp.getCastType();
			if(tempCastType.equals("")) tempCastType = Helper.cVarType.get(expToC);
			super.name += String.format("((" + tempCastType + "*) &%s)[%d] = " + expToC + ";\n", objectName, j++);
		}*/
		
		//super.name += "\n"+Helper.cClassStats.get(val) + "\n";
		super.cText= objectName;
		return super.toC(localVars);
	}
}

class VvExp extends CuExpr{//varname or function call
	public String val;
	public List<CuType> types = new ArrayList<CuType>();
	public List<CuExpr> es = null;
	
	public CuType retype = null;
	public CuType oriReType = null;

	static private boolean initialized = false;
	static String  iter = Helper.getVarName(), temp = Helper.getVarName();
	
	public VvExp(String str){
		val = str;
		super.text=str;
		containsVar.add(str);
	}
	
	@Override public void add(List<CuType> pt, List<CuExpr> e){
		types = pt;
		es = e;
		super.text += Helper.printList("<", pt, ">", ",")+Helper.printList("(", es, ")", ",");
	}

	@Override
	public boolean equals(Object that){
		if (that instanceof VvExp &&
				val.equals(((VvExp)that).val)&&
				((types==null&&((VvExp)that).types==null)||types.equals(((VvExp)that).types))&&
				((es==null&&((VvExp)that).es==null)||es.equals(((VvExp)that).es)))
			return true;
		else 
			return false;
	}
	
	@Override public String toString() {
		super.text=val;
		if (es!=null)
			super.text += Helper.printList("<", types, ">", ",")+Helper.printList("(", es, ")", ",");
		return super.text;
	}
	@Override public boolean isFunCall () {
		if (es == null)
			return false;
		else
			return true;
	}

	@Override protected CuType calculateType(CuContext context) {
Helper.P("in VvExp typechecker, var is " + val.toString());
		//System.out.println(String.format("in VvExp %s, begin %s", text, val));
		if (es == null) {
			this.retype = context.getVariable(val);
			return this.retype;
		}
Helper.P("es is not null, es is " + es.toString());
		//else, it will be the same as in VcExp
        // check tao in scope
		//System.out.println("not a variable, checking function context");
        if (context.getFunction(val) == null) throw new NoSuchTypeException(Helper.getLineInfo());
        //System.out.println("got this function from function context");
		//type check each tao_i // check tao in scope
		for (CuType ct : types) {
			ct.calculateType(context);
		}     
        // check each es 
        TypeScheme cur_ts = (TypeScheme) context.getFunction(val);
        
        //added in PA5
        this.oriReType = cur_ts.data_t;
        		
        List<CuType> tList = new ArrayList<CuType>();
        for (CuType cur_type : cur_ts.data_tc.values()) {
        	//if(cur_type.id.equals("Iterable"))
        	//	cur_type.type = Helper.getTypeForIterable(cur_type.text);
            tList.add(cur_type);
        }
        Map<String, CuType> mapping = new HashMap<String, CuType>();
        for (int i = 0; i < types.size(); i++) {
        	mapping.put(cur_ts.data_kc.get(i), types.get(i));
        }
        Helper.P("VvExp MAPPING "+mapping);
		//added by Yinglei
		if (cur_ts.data_tc.size() != es.size()) throw new NoSuchTypeException(Helper.getLineInfo());
        for (int i = 0; i < es.size(); i++) {
        	//System.out.println(es.get(i).toString());
            if (!es.get(i).isTypeOf(context, tList.get(i), mapping)) {
Helper.P(" type mismatch, " + "es is " + es.get(i).toString() + ", tListgeti is " + tList.get(i).toString() + ", mapping is "+ mapping );
                throw new NoSuchTypeException(Helper.getLineInfo());
            }
Helper.P(String.format("calculated %s", es.get(i)));
        }
Helper.P(" 1mapping is " + mapping.toString());
        //Yinglei: should not change data_t, should make a copy
        CuType reType = cur_ts.data_t.getcopy();
        reType.plugIn(mapping);
        Helper.P("   VvExp reType %s isTypePara %b, mapping %s get %s", reType, reType.isTypePara(), mapping, mapping.get(reType.id));
		if (reType.isTypePara() && mapping.containsKey(reType.id)) {
			this.retype = mapping.get(reType.id);
			return this.retype;
		}
		this.retype = reType;
		return reType;
	}



	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		//it can either be there in the original cubex program, or get generated in toHIR
		if (this.retype != null) {
			if (retype.id.equals("Integer") || retype.id.equals("Boolean")) {
				//for generic functions, boxed is still true
				if ((this.oriReType==null) || !(this.oriReType instanceof VTypePara))
					this.boxed = false;  
				this.expType = retype.id;
			}			
		}
		if(es == null) 
		{
			Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>();
			String name1 = Helper.getVarName();
			List<CuStat> stats = new ArrayList<CuStat>();
			CuExpr exp = new VvExp(val);
			
			if(val.equals("input")) {
				CuVvc vvc = new Vv(name1);			
				CuStat a = new AssignStat(vvc, exp);
				stats.add(a);
				
				CuExpr e = new VvExp(name1);
				e.use.add(e.toString());
				temp.setSecond(e);
			}
			else {
				exp.use.add(val);
				temp.setSecond(exp);				
			}
			exp.boxed = this.boxed;
			exp.expType = this.expType;
			
			//CuVvc vvc = new Vv(name1);			
			//CuStat a = new AssignStat(vvc, exp);
			//stats.add(a);
			
			exp.use.add(val);
			
			temp.setFirst(stats);
			
			return temp;
		}
		else 
		{
			Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>();
			List<CuStat> stats = new ArrayList<CuStat>();
			List<CuExpr> newEs = new ArrayList<CuExpr>();
			
			
			for (CuExpr exp : es) {
				Pair<List<CuStat>, CuExpr> expToHir = exp.toHIR();
				stats.addAll(expToHir.getFirst());
				String name1 = Helper.getVarName();
				CuVvc vvc = new Vv(name1);			
				CuStat a = new AssignStat(vvc, expToHir.getSecond());
				stats.add(a);
				
				a.setUnboxType();
				
				CuExpr e = new VvExp(name1);
				
				e.boxed = a.boxed;
				e.expType = a.statType;
				
				newEs.add(e);
				//if (expToHir.getFirst().isEmpty())
					use.add(e.toString());
			}
			
			CuExpr exp = new VvExp(val);
			exp.add(types, newEs);
			exp.use = use;
			
			exp.boxed = this.boxed;
			exp.expType = this.expType;
			
			temp.setFirst(stats);
			temp.setSecond(exp);
			
			return temp;
		}		
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		if(es==null)
		{
			super.cText = val;
			super.castType = Helper.cVarType.get(val.toString());
			super.iterType = Helper.iterType.get(val.toString());
			
			if(castType == null)
				castType = "";
			if(super.iterType == null)
				super.iterType = "";
			
			//use.add(val);
			
			if(val.equals("input"))
			{
				iterType = "String";				
				castType = "Iterable";
				String len = Helper.getVarName();
				String iterNew = Helper.getVarName();
				//iter = "input";
								
				if(!initialized) {
				
					name += "int " + len + ";\n"
						+ "Iterable* " + iter + "= NULL;\n"
						+ "String* " + temp + "= NULL;\n" 
						+ len + " = next_line_len();\n"
						+ "if(" + len + " == 0) {\n\t"
						+ iter + " = NULL;\n}\n"
						+ "else {\n\t";
				
					name +=  temp + " = (String*) x3malloc(sizeof(String));\n\t"
						+ temp + "->isIter = 0;\n\t"
						+ temp + "->nrefs = 1;\n\t"
						+ temp + "->value = (char*) x3malloc("+ len + " * sizeof(char));\n\t"
						+ temp + "->len = " + len + ";\n\t"
						+ "read_line(" + temp + "->value);\n\t";
		
					name += Helper.incrRefCount(temp);
					
					name += iter + " = (Iterable*) x3malloc(sizeof(Iterable));\n\t"
						+ iter + "->isIter = 1;\n\t"
						+ iter + "->nrefs = 0;\n\t"
						+ iter + "->value = " + temp + ";\n\t"
						+ iter + "->additional = NULL;\n\t"
						+ iter + "->next = &input_onwards;\n\t"
						+ iter + "->concat = NULL;\n}\n";
				
		
					Helper.cVarType.put(temp, "String");
				
					Helper.cVarType.put(iter, "Iterable");
					cText = iter;
					initialized = true;
					
					//def.add(temp);
				}
				else {
					name += "Iterable* " + iterNew + ";\n"
							+ iterNew + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
							+ iterNew + "->isIter = 1;\n"
							+ iterNew + "->nrefs = 0;\n"
							+ iterNew + "->value = " + temp + ";\n"
							+ iterNew + "->additional = ((Iterable*)" + iter + ")->additional;\n"
							+ iterNew + "->next = NULL;\n"
							+ iterNew + "->concat = NULL;\n";
								
					name += Helper.incrRefCount(temp);
					cText = iterNew;
				}
				
				//use.add(val);
				return super.toC(localVars);
			}
		}
		else
		{
			String temp = "", tempName = "", expToC = "";
			String tempCastType = "", varName = Helper.getVarName();
			
			if(val.equals("character")) {
				super.castType = "Character";
				super.name += "\n";
				
				CuExpr exp = es.get(0);
				expToC = exp.toC(localVars);
				tempName = exp.construct();
				name += tempName;
				tempCastType = exp.getCastType();
				if(tempCastType == null) tempCastType = Helper.cVarType.get(expToC);
				if (!tempName.equals("")) {
					Helper.cVarType.put(expToC, tempCastType);
				}
				name += "Character* " + varName + ";\n" + varName +  " = (Character*) x3malloc(sizeof(Character));\n"
						+ varName + "->value = "
						+ "unichar (((" + tempCastType + "*)" + expToC + ")->value);\n";
				
				super.cText = varName;
				/*def.add(varName);
				
				if (!exp.getDef().isEmpty())
					def.addAll(exp.getDef());
				if (!exp.getUse().isEmpty())
					use.addAll(exp.getUse());

				if (tempName.equals(""))
					use.add(expToC);*/
				
				return super.toC(localVars);
			}
			
			if(val.equals("string")) {
				castType = "String";
				name += "\n";
				CuExpr exp = es.get(0);
				expToC = exp.toC(localVars);
				tempName = exp.construct();
				name += tempName;
				if (!tempName.equals("")) {
					Helper.cVarType.put(expToC, "Iterable");
				}
				name += "void* " + varName + ";\n"
						+ varName + " = concatChars((Iterable*)" + expToC + ");\n"; 
					
				super.cText = varName;
				
				/*if (!exp.getDef().isEmpty())
					def.addAll(exp.getDef());
				if (!exp.getUse().isEmpty())
					use.addAll(exp.getUse());

				def.add(varName);
				if (tempName.equals(""))
					use.add(expToC);*/
				 
				return super.toC(localVars);
			}
			
				
			
			super.castType = Helper.cFunType.get(val);
			super.name += "\n";
			
			if (es == null)
				temp = "()";
			temp += "(";
			for (CuExpr exp : es) {
				expToC = exp.toC(localVars);
				tempName = exp.construct();
				tempCastType = exp.getCastType();
				if(tempCastType == null) tempCastType = Helper.cVarType.get(expToC);
				temp += "(void*) " + expToC + ", ";
				super.name += tempName;
				if (!tempName.equals("")) {
					Helper.cVarType.put(expToC, tempCastType);
				}
				
				/*if (!exp.getDef().isEmpty())
					def.addAll(exp.getDef());
				if (!exp.getUse().isEmpty())
					use.addAll(exp.getUse());

				if (tempName.equals(""))
					use.add(expToC);*/
					
			}
			int j = temp.lastIndexOf(", ");
			if (j > 1) temp = temp.substring(0, j);
			temp += ")";
			name += "void* " + varName + ";\n"
					+ varName + " = " + val.toString() + temp + ";\n"; 
			super.cText= varName;
			
			//def.add(varName);
			//use.add(val);
		}
		return super.toC(localVars);
	}
}
