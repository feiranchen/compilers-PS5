import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;


public class CSE {

	static public void startCSE(CuStat orgS) throws Exception{
	//delete keys with empty list
		HashMap<CuVvc,ArrayList<CuExpr>> varMap= new HashMap<CuVvc,ArrayList<CuExpr>>();
		HashMap<CuExpr, CuVvc> exprMap= new HashMap<CuExpr, CuVvc>();
		CuStat nextS=doCSE(orgS,varMap,exprMap);
		while(nextS!=null){
			nextS=doCSE(nextS,varMap,exprMap);
		}
	}
	static public void markCSE(){
		
	}
	
	static public CuStat doCSE(CuStat orgS,
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
			}
			varMap.get(s.var).add(s.ee);
			
			//simplify and update the expression map
			((AssignStat) orgS).ee=updateExpr(s.var, s.ee,exprMap);
			if (!((AssignStat) orgS).ee.equals(varMap.get(s.var).get(0))){
				varMap.get(s.var).add(0,((AssignStat) orgS).ee);}
			if(exprMap.containsKey(((AssignStat) orgS).ee)){
				exprMap.put(((AssignStat) orgS).ee, s.var);}
			return orgS.getNext();
		}
		else if (orgS instanceof WhileStat){
			WhileStat s=(WhileStat)orgS;
			//simplify. no need to maintain map as in Assign
			((WhileStat) orgS).e=updateExpr(null, s.e,exprMap);
			CuStat nextS=orgS.whileBranch();
			
			HashMap<CuVvc,ArrayList<CuExpr>>  varMap2 =new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			HashMap<CuExpr,CuVvc> exprMap2 = new HashMap<CuExpr, CuVvc>(exprMap);
			
			//finish evaluating everything in the scope before we say we can move on.
			while (nextS!=orgS){
				doCSE(nextS,varMap2,exprMap2);
				nextS=nextS.getNext();
			}
			//end of scope
			return orgS.noBranch();
		}
		else if (orgS instanceof ForToWhileStat){
			CuStat nextS=orgS.whileBranch();
			
			HashMap<CuVvc,ArrayList<CuExpr>>  varMap2 =new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			HashMap<CuExpr,CuVvc> exprMap2 = new HashMap<CuExpr, CuVvc>(exprMap);
			
			//finsh evaluating everything in the scope before we say we can move on.
			while (nextS!=orgS){
				doCSE(nextS,varMap2,exprMap2);
				nextS=nextS.getNext();
			}
			//end of scope
			return orgS.noBranch();
		}
		else if (orgS instanceof IfStat){
			IfStat s=(IfStat) orgS;

			//simplify. no need to maintain map as in Assign
			((IfStat) orgS).e=updateExpr(null, s.e,exprMap);

			CuStat ifS=orgS.ifBranch();
			HashMap<CuVvc,ArrayList<CuExpr>>  varMapIf = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			HashMap<CuExpr,CuVvc> 			 exprMapIf = new HashMap<CuExpr, CuVvc>(exprMap);
			//finish evaluating everything in the scope before we say we can move on.
			while (!ifS.ifElseMergePoint.contains(orgS)){
				doCSE(ifS,varMapIf,exprMapIf);
				ifS=ifS.getNext();
			}

			//only do else branch handling and merging if there is an else block
			CuStat elseS=orgS.elseBranch();
			if (elseS!=null){
				HashMap<CuVvc,ArrayList<CuExpr>>  varMapElse = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
				HashMap<CuExpr,CuVvc> 			 exprMapElse = new HashMap<CuExpr, CuVvc>(exprMap);
				while (!elseS.ifElseMergePoint.contains(orgS)){
					doCSE(elseS,varMapElse,exprMapElse);
					elseS=elseS.getNext();
				}
				//assert:elseS and ifS should be the same
				//merging and updating old map
					//HashMap<CuVvc,ArrayList<CuExpr>>  varMapMerged = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
					//HashMap<CuExpr,CuVvc> 			 exprMapMerged = new HashMap<CuExpr, CuVvc>(exprMap);
				/*
				// We only care about: new variables(old, global ones are always immutable) 
				// that exist in both branches and has the same value (otherwise value can't be exploited and thus no need to store)
				for (Entry e :varMapElse.entrySet()){
					if (varMapIf.containsKey(e.getKey())&&
							(e.getKey().equals(varMapIf.get(e.getKey())){
						
						//both branches has the value, this assignment needs to be preserved
						if (!varMap.containsKey(e.getKey())){
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
				}
				*/
			}
			return ifS;
		}
		else if (orgS instanceof ReturnStat){
			ReturnStat s=(ReturnStat)orgS;
			//simplify. no need to maintain map
			s.e=updateExpr(null, s.e,exprMap);

			return orgS.getNext();
		}
		else {
			throw new Exception("Statement not making sense");
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
				if (e.es!=null){
					for (CuExpr elem :e.es){
						updateInput.add(updateExpr(null, elem,exprMap));
					}
					e.es=updateInput;
				}
				return e;
			}else {
				System.out.println("\n\n Did not update expr: "+orgE.toString());
			}
			
			return orgE;
		}
	}
}