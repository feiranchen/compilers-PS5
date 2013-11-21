import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map.Entry;


public class CSE {

	static public void startCSE(CuStat orgS) throws Exception{
	//delete keys with empty list
		HashMap<CuVvc,ArrayList<CuExpr>> varMap= new HashMap<CuVvc,ArrayList<CuExpr>>();
		HashMap<CuExpr, CuVvc> exprMap= new HashMap<CuExpr, CuVvc>();
		doCSE(orgS,varMap,exprMap);
	}
	static public void doCSE(CuStat orgS,
			HashMap<CuVvc,ArrayList<CuExpr>> varMap,
			HashMap<CuExpr, CuVvc> exprMap) throws Exception{
		if (orgS instanceof AssignStat){
			AssignStat s=(AssignStat)orgS;
			
			if (!varMap.containsKey(s.var)){
				varMap.put(s.var, new ArrayList<CuExpr>());
			} 
			//variable already defined, now invalid all of them, update both maps
			else {
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					for(int i =elem.getValue().size()-1;i>=0;i--){
						if (elem.getValue().get(i).containsVar.contains(s.var)){
							if (exprMap.get(elem.getValue().get(i)).equals(elem.getKey())){
								exprMap.remove(elem.getValue().get(i));
							}
							elem.getValue().remove(i);
						}
					}
				}
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					exprMap.put(elem.getValue().get(0),elem.getKey());
				}
				varMap.get(s.var).add(s.ee);
			}
			
			//simplify and update the expression map
			((AssignStat) orgS).ee=updateExpr(s.var, s.ee,exprMap);
			if (!((AssignStat) orgS).ee.equals(varMap.get(s.var).get(0))){
				varMap.get(s.var).add(0,((AssignStat) orgS).ee);}
			if(exprMap.containsKey(((AssignStat) orgS).ee)){
				exprMap.put(((AssignStat) orgS).ee, s.var);}
			
			doCSE(((AssignStat)orgS).getNext(),varMap,exprMap);
		}
		else if (orgS instanceof WhileStat){
			WhileStat s=(WhileStat)orgS;
			//simplify. no need to maintain map
			((WhileStat) orgS).e=updateExpr(null, s.e,exprMap);
			doCSE(((WhileStat)orgS).getFirst(),varMap,exprMap);
			doCSE(((WhileStat)orgS).getSecond(),(HashMap<CuExpr,CuVvc>)varMap.clone(),(HashMap<CuExpr,CuVvc>)exprMap.clone());
		}
		else if (orgS instanceof IfStat){
			
		}
		else if (orgS instanceof ReturnStat){
			ReturnStat s=(ReturnStat)orgS;
			//simplify. no need to maintain map
			((AssignStat) orgS).ee=updateExpr(null, s.e,exprMap);
			return;
		}
	}
	
	static private CuExpr updateExpr(CuVvc name,CuExpr orgE,HashMap<CuExpr, CuVvc> exprMap) throws Exception{
		if(exprMap.containsKey(orgE)){
			return new VvExp(exprMap.get(orgE).text);
		}else{
			if(name!=null){
				exprMap.put(orgE, name);
			}
			if (orgE instanceof AndExpr){
				AndExpr e=(AndExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof AppExpr){
				AppExpr e=(AppExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof BrkExpr){
				BrkExpr e=(BrkExpr) orgE;
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :e.val){
					updateInput.add(updateExpr(null, elem,exprMap));
				}
				e.val=updateInput;
				return e;
			}
			else if (orgE instanceof DivideExpr){
				DivideExpr e=(DivideExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof EqualExpr){
				EqualExpr e=(EqualExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof GreaterThanExpr){
				GreaterThanExpr e=(GreaterThanExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof LessThanExpr){
				LessThanExpr e=(LessThanExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof MinusExpr){
				MinusExpr e=(MinusExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof ModuloExpr){
				ModuloExpr e=(ModuloExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof NegateExpr){
				NegateExpr e=(NegateExpr) orgE;
				e.val=updateExpr(null,e.val,exprMap);//shouldn't need a name
				return e;
			}
			else if (orgE instanceof NegativeExpr){
				NegativeExpr e=(NegativeExpr) orgE;
				e.val=updateExpr(null,e.val,exprMap);//shouldn't need a name
			}
			else if (orgE instanceof OrExpr){
				OrExpr e=(OrExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof PlusExpr){
				PlusExpr e=(PlusExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof ThroughExpr){
				ThroughExpr e=(ThroughExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof TimesExpr){
				TimesExpr e=(TimesExpr) orgE;
				e.left=updateExpr(null,e.left,exprMap);//shouldn't need a name
				e.right=updateExpr(null,e.right,exprMap);
				return e;
			}
			else if (orgE instanceof VarExpr){
				VarExpr e=(VarExpr) orgE;
				e.val=updateExpr(null,e.val,exprMap);//shouldn't need a name
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :e.es){
					updateInput.add(updateExpr(null, elem,exprMap));
				}
				e.es=updateInput;
				return e;
			}
			else if (orgE instanceof VcExp){
				VcExp e=(VcExp) orgE;
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :e.es){
					updateInput.add(updateExpr(null, elem,exprMap));
				}
				e.es=updateInput;
				return e;
			}
			else if (orgE instanceof VvExp){
				VvExp e=(VvExp) orgE;
				//even if argument set is null that's fine
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :e.es){
					updateInput.add(updateExpr(null, elem,exprMap));
				}
				e.es=updateInput;
				return e;
			}
			
			throw new Exception("what is this??? @cse");
			
		}
	}
}