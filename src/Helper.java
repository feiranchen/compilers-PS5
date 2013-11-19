import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.Map.Entry;
import java.util.regex.*;


public class Helper {
	//change this to false when submit
	protected static boolean debug = true;
	//eg. aaa, integer
	protected static HashMap<String, String> cVarType = new HashMap<String, String>();
	protected static HashMap<String, String> iterType = new HashMap<String, String>();
	protected static HashMap<String, String> cFunType = new HashMap<String, String>();
	protected static HashMap<String, CuTypeScheme> funGenType = new HashMap<String, CuTypeScheme>();
	protected static ArrayList<String>		 funArgList=new ArrayList<String>();
	protected static HashMap<String, String> cClassSuper=new HashMap<String, String>();
	protected static HashMap<String, String> cStr = new HashMap<String, String>();
	
	static int one = 97;
	static int two = 97;
	static int three = 97;
    protected static String getVarName() {
    	String first = Character.toString((char)one);
    	String second = Character.toString((char)two);
    	String third = Character.toString((char)three);
    	String out = first+second+third;
    	three = three + 1;
    	if (three==123) {
    		three = 97;
    		two = two + 1;
    		if (two==123) {
    			two = 97;
    			one = one + 1;
    			if (one==123) 
    				System.out.println("run out of names");
    		}
    	}
    	return "aaa"+out;
    }
    
	protected static <T> String printList(String l, List<T> es, String r, String i) {
		if (es == null) return " "+l + " " + r+" ";
		String s = " "+l ;
		for (T e : es) {
			s += e.toString() + i + " ";
		}
		int j = s.lastIndexOf(i+" ");
		if (j > 1) s = s.substring(0, j);
		s +=r;
		return s;
	}
	
	protected static <T, K> String printMap(String l, Map<T,K> es, String r, String i) {
		if (es == null) return " "+l + " " + r+" ";
		String s = " "+l + " ";
		for (Entry<T, K> e : es.entrySet()) {
			s += e.getKey().toString()+" : "+e.getValue().toString() + " "+i + " ";
		}
		int j = s.lastIndexOf(i+" ");
		if (j > 1) s = s.substring(0, j);
		s +=( r+" " );
		return s;
	}
	
	protected static String listFlatten(List<CuStat> cs) {
		if(cs == null) return " ";
		String s=" ";
		if (cs == null || cs.size() == 0) return s;
		for (CuStat t : cs) {
			if (t instanceof Stats) s+=listFlatten((ArrayList<CuStat>) ((Stats)t).al);
			else s+= t.toString() + " ";
		}
		return s;
	}
	protected static <T> boolean equals (Collection<T> x, Collection<T> y) {
		for (T t1 : x) {
			boolean t1E = false;
			for (T t2 : y) {
				if (!t1E && t1.equals(t2))  t1E = true;
			}
			if (!t1E) return false;
		}
		return x.size()==y.size();
	}
	
	protected static void P(Object s) {
		//System.out.println(s.toString());
	}
	protected static void P(String s, Object...args) {
		//System.out.println(String.format(s, args));
	}
	/* thoughts coming, to implement later on */
	protected static void ToDo(String comment){
	}
	
	/** Get the current line number.
	 * @return int - Current line number.
	 */
	public static String getLineInfo() {
        String fullClassName = Thread.currentThread().getStackTrace()[3].getClassName();            
        String methodName = Thread.currentThread().getStackTrace()[3].getMethodName();
        int lineNumber = Thread.currentThread().getStackTrace()[3].getLineNumber();
	    return fullClassName + "." + methodName + "(): line " + lineNumber;
	}
	
	protected static CuType getTypeForIterable(String s){
		CuType type;
		Pattern p = Pattern.compile("[A-Za-z ]*< ?([A-Za-z0-9]*)");		//Iterable  < Integer  < >  >
		Matcher m = p.matcher(s);
		m.find();
		//System.out.println(m.group(1));
		if (m.group(1).length() == 1)
			type = new VTypePara(m.group(1));	
		else
			type = new VClass(m.group(1), new ArrayList<CuType>());
		return type;
	}
	
	//added for PA5
	public static void buildSet(CuStat entry) {
		ArrayList<CuStat> nodes = new ArrayList<CuStat>();
		LinkedList<CuStat> myQ = new LinkedList<CuStat>();
		boolean suc = myQ.offer(entry);
		if(!suc) {
			System.out.println("in BFS, can't insert");
		}
		while(myQ.size()!=0) {
			CuStat cur = myQ.poll();
			if (cur==null) {
				System.out.println("in BFS, can't pop");
			}
			for(CuStat iter : cur.successors) {
				//if not black and not gray (gray means in the queue)
				if (!nodes.contains(iter) && !myQ.contains(iter)) {
					suc = myQ.offer(iter);
					if(!suc) {
						System.out.println("in BFS, can't insert");
					}
				}
			}
			nodes.add(cur);
		}
		
		if (debug) {
			int i = 0;
			System.out.println("printing the CFG");
			for (CuStat cs : nodes) {
				System.out.println(String.valueOf(i) + " : " + cs.toString());
				System.out.println("successors are:");
				for (CuStat css : cs.successors) {
					System.out.println(css.toString());
				}
				System.out.println("\n");
				i = i+1;
			}
		}
		
		//after the breath first search, nodes contains references all of the nodes in the CFG
		//now iteratively build the in out sets
		boolean nochange = false;
		while (!nochange) {
			nochange = true;
			for(CuStat cs : nodes) {
				ArrayList<String> newOutV = new ArrayList<String>();
				ArrayList<String> newInV = new ArrayList<String>();
				//calculate newOutV
				for(CuStat successor : cs.successors) {
					for(String c_var : successor.inV) {
						if (!newOutV.contains(c_var))
							newOutV.add(c_var);
						//check if out set changes
						if (!cs.outV.contains(c_var)) 
							nochange = false;
					}
				}
				cs.outV = newOutV;
				
				//calculate newInV
				ArrayList<String> outExcludeDef =  new ArrayList<String>();
				for(String c_var : cs.outV) {
					if (!cs.defV.contains(c_var)) {
						if(!outExcludeDef.contains(c_var))
							outExcludeDef.add(c_var);
					}
				}				
				newInV.addAll(outExcludeDef);
				for(String c_var : cs.useV) {
					if (!newInV.contains(c_var)) {
						newInV.add(c_var);
					}
				}
				
				//check whether in set changes
				for (String c_var : newInV) {
					if (!cs.inV.contains(c_var)) {
						nochange = false;
					}
				}
				
				cs.inV = newInV;
			}
		}
	}
	public static String incrRefCount(String var) {
		String code = "if (" + var + "!= NULL) {\n";
		//increase ref count
		code +=    "\t" + "(*(int *)" + var + ")++;\n";
		code +=     "}\n";
		return code;
	}
	
	public static String decRefCount(String var) {
		String code = "if (" + var + "!= NULL) {\n";
		//decrement ref count
		code +=    "\t" + "(*(int *)" + var + ")--;\n";
		//check whether it is the last pointer pointing to the object, if yes, x3free memory
		code +=    "\t" + "if ((*(int *)" + var + ") == 0)\n";
		code +=    "\t\t" + "x3free(" + var + ");\n";
		
		//newly added, we feel it should not cause memory bug
		//make var pointing to null
		code +=    "\t" + var + " = NULL;\n";
				
		if (debug) {
			code +=    "\t" + "if ((*(int *)" + var + ") < 0)\n";
			//need to include stdio for debugging
			code +=    "\t\t" + "printf(\"" + var + " ref count is smaller than 0\\n\");\n";
		}
		code +=     "}\n";
		return code;
	}
	
	public static String liveVarAnalysis(List<String> inV, List<String> defV, List<String> outV) {
		String code = "";
		ArrayList<String> inUnionDef = new ArrayList<String>();
		for (String cur : inV) {
			if (!inUnionDef.contains(cur)) {
				inUnionDef.add(cur);
			}
		}
		for (String cur : defV) {
			if (!inUnionDef.contains(cur)) {
				inUnionDef.add(cur);
			}
		}
		for (String cur : inUnionDef) {
			if (!outV.contains(cur)) {
				code += Helper.decRefCount(cur);
			}
		}
		return code;		
	}
	
	public static String refAcquire(String temp_name, String var) {
		String code = "void * " + temp_name +" = NULL;\n";
		code += temp_name + " = " + var + ";\n";
		return code;
	}
}
