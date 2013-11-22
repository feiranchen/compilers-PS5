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
			
			if (!myContainsKey(varMap,s.var)){
				varMap.put(s.var, new ArrayList<CuExpr>());
			} 
			//variable already defined, now invalid all of them, update both maps
			else {
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					for(int i =elem.getValue().size()-1;i>=0;i--){
						if (elem.getValue().get(i).containsVar.contains(s.var)){
							myRemove(exprMap,elem.getValue().get(i));
							elem.getValue().remove(i);
						}
					}
				}
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					exprMap.put(rootExpr(elem.getValue().get(0),exprMap,varMap),elem.getKey());
				}
			}
			myGet(varMap,s.var).add(s.ee);
			
			//simplify and update the expression map
			((AssignStat) orgS).ee=updateExpr(s.var, s.ee,exprMap, varMap);
			if (!((AssignStat) orgS).ee.equals(myGet(varMap,s.var).get(0))){
				myGet(varMap,s.var).add(0,((AssignStat) orgS).ee);}
			//if(exprMap.(((AssignStat) orgS).ee)){
			//	exprMap.put(((AssignStat) orgS).ee, s.var);}
			return orgS.getNext();
		}
		else if (orgS instanceof WhileStat){
			WhileStat s=(WhileStat)orgS;
			//simplify. no need to maintain map as in Assign
			((WhileStat) orgS).e=updateExpr(null, s.e,exprMap, varMap);
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
			((IfStat) orgS).e=updateExpr(null, s.e,exprMap, varMap);

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
			s.e=updateExpr(null, s.e,exprMap, varMap);

			return orgS.getNext();
		}
		else {
			throw new Exception("Statement not making sense");
		}
	}
	
	static private CuExpr updateExpr(CuVvc name,CuExpr orgE,
			HashMap<CuExpr, CuVvc> exprMap,HashMap<CuVvc,ArrayList<CuExpr>> varMap) throws Exception{
		if(myContainsKey(exprMap,rootExpr(orgE,exprMap,varMap))){
			return new VvExp(myGet(exprMap,rootExpr(orgE,exprMap,varMap)).text);
		}else{
			if (orgE instanceof AndExpr){
				((AndExpr)orgE).left=updateExpr(null,((AndExpr)orgE).left,exprMap, varMap);//shouldn't need a name
				((AndExpr)orgE).right=updateExpr(null,((AndExpr)orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof AppExpr){
				((AppExpr) orgE).left=updateExpr(null,((AppExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((AppExpr) orgE).right=updateExpr(null,((AppExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof BrkExpr){
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((BrkExpr) orgE).val){
					updateInput.add(updateExpr(null, elem,exprMap, varMap));
				}
				((BrkExpr) orgE).val=updateInput;

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof DivideExpr){
				((DivideExpr) orgE).left=updateExpr(null,((DivideExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((DivideExpr) orgE).right=updateExpr(null,((DivideExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof EqualExpr){
				((EqualExpr) orgE).left=updateExpr(null,((EqualExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((EqualExpr) orgE).right=updateExpr(null,((EqualExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof GreaterThanExpr){
				((GreaterThanExpr) orgE).left=updateExpr(null,((GreaterThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((GreaterThanExpr) orgE).right=updateExpr(null,((GreaterThanExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof LessThanExpr){
				((LessThanExpr) orgE).left=updateExpr(null,((LessThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((LessThanExpr) orgE).right=updateExpr(null,((LessThanExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof MinusExpr){
				((MinusExpr) orgE).left=updateExpr(null,((MinusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((MinusExpr) orgE).right=updateExpr(null,((MinusExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof ModuloExpr){
				((ModuloExpr) orgE).left=updateExpr(null, ((ModuloExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((ModuloExpr) orgE).right=updateExpr(null, ((ModuloExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof NegateExpr){
				((NegateExpr) orgE).val=updateExpr(null,((NegateExpr) orgE).val,exprMap, varMap);//shouldn't need a name

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof NegativeExpr){
				((NegativeExpr) orgE).val=updateExpr(null,((NegativeExpr) orgE).val,exprMap, varMap);//shouldn't need a name

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof OrExpr){
				((OrExpr) orgE).left=updateExpr(null,((OrExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((OrExpr) orgE).right=updateExpr(null,((OrExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof PlusExpr){
				((PlusExpr) orgE).left=updateExpr(null,((PlusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((PlusExpr) orgE).right=updateExpr(null,((PlusExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof ThroughExpr){
				((ThroughExpr) orgE).left=updateExpr(null,((ThroughExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((ThroughExpr) orgE).right=updateExpr(null,((ThroughExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof TimesExpr){
				((TimesExpr) orgE).left=updateExpr(null,((TimesExpr) orgE).left,exprMap, varMap);//shouldn't need a name
				((TimesExpr) orgE).right=updateExpr(null,((TimesExpr) orgE).right,exprMap, varMap);

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof VarExpr){
				((VarExpr) orgE).val=updateExpr(null,((VarExpr) orgE).val,exprMap, varMap);//shouldn't need a name
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((VarExpr) orgE).es){
					updateInput.add(updateExpr(null, elem,exprMap, varMap));
				}
				((VarExpr) orgE).es=updateInput;

				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof VcExp){
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((VcExp) orgE).es){
					updateInput.add(updateExpr(null, elem, exprMap, varMap));
				}
				((VcExp) orgE).es=updateInput;
				return finalReturn(name,orgE, exprMap, varMap);
			}
			else if (orgE instanceof VvExp){
				//even if argument set is null that's fine
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				if (((VvExp) orgE).es!=null){
					for (CuExpr elem :((VvExp) orgE).es){
						updateInput.add(updateExpr(null, elem, exprMap, varMap));
					}
					((VvExp) orgE).es=updateInput;
				}else{
					if(myContainsKey(varMap, new Vv(((VvExp) orgE).val)))
						return myGet(varMap,new Vv(((VvExp) orgE).val)).get(0);
				}

				return finalReturn(name,orgE, exprMap, varMap);
			}else {
				if(name!=null){
					exprMap.put(rootExpr(orgE,exprMap,varMap), name);
				}
				System.out.println("\n\n Did not update expr: "+orgE.toString());
			}
			
			return orgE;
		}
	}
	
	private static CuExpr finalReturn(CuVvc name,CuExpr orgE,
			HashMap<CuExpr, CuVvc> exprMap,HashMap<CuVvc,ArrayList<CuExpr>> varMap){
		CuVvc betterE=null;
		if(myContainsKey(exprMap,rootExpr(orgE,exprMap,varMap))){
			betterE=myGet(exprMap,rootExpr(orgE,exprMap,varMap));
			if(myContainsKey(varMap, betterE))
				return myGet(varMap,betterE).get(0);
			else
				return new VvExp(betterE.text);
		}
		else{
			if(name!=null){
				exprMap.put(rootExpr(orgE,exprMap,varMap), name);}
			return orgE;
		}

		
		
	}

	private static CuExpr rootExpr(CuExpr orgE, 
			HashMap<CuExpr, CuVvc> exprMap,HashMap<CuVvc,ArrayList<CuExpr>> varMap){
		if (orgE instanceof AndExpr){
			((AndExpr)orgE).left=rootExpr(((AndExpr)orgE).left,exprMap, varMap);//shouldn't need a name
			((AndExpr)orgE).right=rootExpr(((AndExpr)orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof AppExpr){
			((AppExpr) orgE).left=rootExpr(((AppExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((AppExpr) orgE).right=rootExpr(((AppExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof BrkExpr){
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((BrkExpr) orgE).val){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			((BrkExpr) orgE).val=updateInput;

			return orgE;
		}
		else if (orgE instanceof DivideExpr){
			((DivideExpr) orgE).left=rootExpr(((DivideExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((DivideExpr) orgE).right=rootExpr(((DivideExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof EqualExpr){
			((EqualExpr) orgE).left=rootExpr(((EqualExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((EqualExpr) orgE).right=rootExpr(((EqualExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof GreaterThanExpr){
			((GreaterThanExpr) orgE).left=rootExpr(((GreaterThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((GreaterThanExpr) orgE).right=rootExpr(((GreaterThanExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof LessThanExpr){
			((LessThanExpr) orgE).left=rootExpr(((LessThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((LessThanExpr) orgE).right=rootExpr(((LessThanExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof MinusExpr){
			((MinusExpr) orgE).left=rootExpr(((MinusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((MinusExpr) orgE).right=rootExpr(((MinusExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof ModuloExpr){
			((ModuloExpr) orgE).left=rootExpr(((ModuloExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((ModuloExpr) orgE).right=rootExpr(((ModuloExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof NegateExpr){
			((NegateExpr) orgE).val=rootExpr(((NegateExpr) orgE).val,exprMap, varMap);//shouldn't need a name

			return orgE;
		}
		else if (orgE instanceof NegativeExpr){
			((NegativeExpr) orgE).val=rootExpr(((NegativeExpr) orgE).val,exprMap, varMap);//shouldn't need a name

			return orgE;
		}
		else if (orgE instanceof OrExpr){
			((OrExpr) orgE).left=rootExpr(((OrExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((OrExpr) orgE).right=rootExpr(((OrExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof PlusExpr){
			((PlusExpr) orgE).left=rootExpr(((PlusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((PlusExpr) orgE).right=rootExpr(((PlusExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof ThroughExpr){
			((ThroughExpr) orgE).left=rootExpr(((ThroughExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((ThroughExpr) orgE).right=rootExpr(((ThroughExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof TimesExpr){
			((TimesExpr) orgE).left=rootExpr(((TimesExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((TimesExpr) orgE).right=rootExpr(((TimesExpr) orgE).right,exprMap, varMap);

			return orgE;
		}
		else if (orgE instanceof VarExpr){
			((VarExpr) orgE).val=rootExpr(((VarExpr) orgE).val,exprMap, varMap);//shouldn't need a name
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VarExpr) orgE).es){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			((VarExpr) orgE).es=updateInput;

			return orgE;
		}
		else if (orgE instanceof VcExp){
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VcExp) orgE).es){
				updateInput.add(rootExpr(elem, exprMap, varMap));
			}
			((VcExp) orgE).es=updateInput;
			return orgE;
		}
		else if (orgE instanceof VvExp){
			//even if argument set is null that's fine
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			if (((VvExp) orgE).es!=null){
				for (CuExpr elem :((VvExp) orgE).es){
					updateInput.add(rootExpr(elem, exprMap, varMap));
				}
				((VvExp) orgE).es=updateInput;
			}else{
				if(myContainsKey(varMap, new Vv(((VvExp) orgE).val)))
					return myGet(varMap,new Vv(((VvExp) orgE).val)).get(0);
			}

			return orgE;
		}
		
		return orgE;
	}
	
	private static<K,V> boolean myContainsKey(HashMap<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return true;
			} 
		}
		return false;
	}
	private static<K,V> V myGet(HashMap<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return map.get(e.getKey());
			} 
		}
		return null;
	}
	private static<K,V> V myRemove(HashMap<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return map.remove(e.getKey());
			} 
		}
		return null;
	}
	
}