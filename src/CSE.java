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
			System.out.println("\n\n Did not process stat: "+orgS.toString());
			return orgS.getNext();
		}
	}
	
	static private CuExpr updateExpr(CuVvc name,CuExpr orgE,
			HashMap<CuExpr, CuVvc> exprMap,HashMap<CuVvc,ArrayList<CuExpr>> varMap) throws Exception{
		CuExpr temp=rootExpr(orgE,exprMap,varMap);
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

		CuExpr temp=rootExpr(orgE,exprMap,varMap);
		if(myContainsKey(exprMap,rootExpr(orgE,exprMap,varMap))){
			betterE=myGet(exprMap,rootExpr(orgE,exprMap,varMap));
			return new VvExp(betterE.text);
		}
		else{
			if(name!=null){
				exprMap.put(rootExpr(orgE,exprMap,varMap), name);}
			return orgE;
		}

		
		
	}

	//make sure this is returning a new copy
	private static CuExpr rootExpr(CuExpr orgE, 
			HashMap<CuExpr, CuVvc> exprMap,HashMap<CuVvc,ArrayList<CuExpr>> varMap){
		CuExpr newE=null;
		if (orgE instanceof AndExpr){
			newE=new AndExpr(new NullExp(), new NullExp());
			((AndExpr)newE).left=rootExpr(((AndExpr)orgE).left,exprMap, varMap);//shouldn't need a name
			((AndExpr)newE).right=rootExpr(((AndExpr)orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof AppExpr){
			newE=new AppExpr(new NullExp(), new NullExp());
			((AppExpr) newE).left=rootExpr(((AppExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((AppExpr) newE).right=rootExpr(((AppExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof BrkExpr){
			newE=new BrkExpr(new ArrayList<CuExpr>());
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((BrkExpr) orgE).val){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			((BrkExpr) newE).val=updateInput;

			return newE;
		}
		else if (orgE instanceof DivideExpr){
			newE=new DivideExpr(new NullExp(), new NullExp());
			((DivideExpr) newE).left=rootExpr(((DivideExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((DivideExpr) newE).right=rootExpr(((DivideExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof EqualExpr){
			newE=new EqualExpr(new NullExp(), new NullExp(),((EqualExpr) orgE).bool);
			((EqualExpr) newE).left=rootExpr(((EqualExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((EqualExpr) newE).right=rootExpr(((EqualExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof GreaterThanExpr){
			newE=new GreaterThanExpr(new NullExp(), new NullExp(),((GreaterThanExpr) orgE).b);
			((GreaterThanExpr) newE).left=rootExpr(((GreaterThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((GreaterThanExpr) newE).right=rootExpr(((GreaterThanExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof LessThanExpr){
			newE=new LessThanExpr(new NullExp(), new NullExp(),((LessThanExpr) orgE).b);
			((LessThanExpr) newE).left=rootExpr(((LessThanExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((LessThanExpr) newE).right=rootExpr(((LessThanExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof MinusExpr){
			newE=new MinusExpr(new NullExp(), new NullExp());
			((MinusExpr) newE).left=rootExpr(((MinusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((MinusExpr) newE).right=rootExpr(((MinusExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof ModuloExpr){
			newE=new ModuloExpr(new NullExp(), new NullExp());
			((ModuloExpr) newE).left=rootExpr(((ModuloExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((ModuloExpr) newE).right=rootExpr(((ModuloExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof NegateExpr){
			newE=new NegateExpr(new NullExp());
			((NegateExpr) newE).val=rootExpr(((NegateExpr) orgE).val,exprMap, varMap);//shouldn't need a name

			return newE;
		}
		else if (orgE instanceof NegativeExpr){
			newE=new NegativeExpr(new NullExp());
			((NegativeExpr) newE).val=rootExpr(((NegativeExpr) orgE).val,exprMap, varMap);//shouldn't need a name

			return newE;
		}
		else if (orgE instanceof OrExpr){
			newE=new OrExpr(new NullExp(),new NullExp());
			((OrExpr) newE).left=rootExpr(((OrExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((OrExpr) newE).right=rootExpr(((OrExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof PlusExpr){
			newE=new PlusExpr(new NullExp(),new NullExp());
			((PlusExpr) newE).left=rootExpr(((PlusExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((PlusExpr) newE).right=rootExpr(((PlusExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof ThroughExpr){
			newE=new ThroughExpr(new NullExp(),new NullExp(),((ThroughExpr) orgE).bLow,((ThroughExpr) orgE).bUp);
			((ThroughExpr) newE).left=rootExpr(((ThroughExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((ThroughExpr) newE).right=rootExpr(((ThroughExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof TimesExpr){
			newE=new TimesExpr(new NullExp(),new NullExp());
			((TimesExpr) newE).left=rootExpr(((TimesExpr) orgE).left,exprMap, varMap);//shouldn't need a name
			((TimesExpr) newE).right=rootExpr(((TimesExpr) orgE).right,exprMap, varMap);

			return newE;
		}
		else if (orgE instanceof VarExpr){
			newE=new VarExpr(new NullExp(),orgE.methodId,((VarExpr) orgE).types,null);
			((VarExpr) newE).val=rootExpr(((VarExpr) orgE).val,exprMap, varMap);//shouldn't need a name
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VarExpr) orgE).es){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			((VarExpr) newE).es=updateInput;

			return newE;
		}
		else if (orgE instanceof VcExp){
			newE=new VcExp(((VcExp) orgE).val, ((VcExp) orgE).types, null);
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VcExp) orgE).es){
				updateInput.add(rootExpr(elem, exprMap, varMap));
			}
			((VcExp) newE).es=updateInput;
			return newE;
		}
		else if (orgE instanceof VvExp){
			newE=new VvExp(((VvExp) orgE).val);
			newE.add(((VvExp) orgE).types, new ArrayList<CuExpr>());
			//even if argument set is null that's fine
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			if (((VvExp) orgE).es!=null){
				for (CuExpr elem :((VvExp) orgE).es){
					updateInput.add(rootExpr(elem, exprMap, varMap));
				}
				((VvExp) newE).es=updateInput;
			}
			//this is just a variable name
			else if(myContainsKey(varMap, new Vv(((VvExp) orgE).val))){
				CuExpr root= myGet(varMap,new Vv(((VvExp) orgE).val)).get(0);
				root=rootExpr(root, exprMap, varMap);
				return root;
			}

			return newE;
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