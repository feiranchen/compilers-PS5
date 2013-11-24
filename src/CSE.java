import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;



public class CSE {

	static public void startCSE(CuStat orgS) throws Exception{
	//delete keys with empty list
		Map<CuVvc,ArrayList<CuExpr>> varMap= new HashMap<CuVvc,ArrayList<CuExpr>>();
		Map<CuExpr, CuVvc> exprMap= new HashMap<CuExpr, CuVvc>();
		CuStat nextS=doCSE(orgS,varMap,exprMap);
		while(nextS!=null){
			nextS=doCSE(nextS,varMap,exprMap);
		}
	}
	static public void markCSE(){
		
	}
	
	static public CuStat doCSE(CuStat orgS,
			Map<CuVvc,ArrayList<CuExpr>> varMap,
			Map<CuExpr, CuVvc> exprMap) throws Exception{
		if (orgS instanceof AssignStat){
			AssignStat s=(AssignStat)orgS;
			

			//variable already defined, now invalid all of them, update both maps
			if (myContainsKey(varMap,s.var)){

				//update var table with root exp
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					CuExpr temp=rootExpr(elem.getValue().get(0),exprMap,varMap);
					ArrayList<CuExpr> lst=elem.getValue();
					if (!(lst.get(lst.size()-1).equals(temp))){
						lst.add(temp);
					}
				}
				
				//clear varMap
				myRemove(varMap, s.var);
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					for(int i =elem.getValue().size()-1;i>=0;i--){
						if (elem.getValue().get(i).containsVar.contains(s.var.text)){
							elem.getValue().remove(i);
						}
					}
				}
				
				//delete all expr mapped to this var in exprMap
				Iterator<Map.Entry<CuExpr, CuVvc>> iterExp = exprMap.entrySet().iterator();
				while (iterExp.hasNext()) {
				    Map.Entry<CuExpr, CuVvc> e = iterExp.next();
				    if(e.getValue().text.equals(s.var.text)){
				        iterExp.remove();
				    }
				}
				
				//delete all var that no more point to anything
				Iterator<Map.Entry<CuVvc, ArrayList<CuExpr>>> iterVar = varMap.entrySet().iterator();
				while (iterVar.hasNext()) {
					Map.Entry<CuVvc, ArrayList<CuExpr>> e = iterVar.next();
					if (e.getValue().isEmpty()){
						iterVar.remove();
					}
				}
				
				//update expr table with new shortcuts
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					CuExpr temp=rootExpr(elem.getValue().get(0),exprMap,varMap);
					if (!myContainsKey(exprMap, temp)){
						CuVvc optVar=elem.getKey();
						CuExpr replaceVar=elem.getValue().get(0);
						if ((replaceVar instanceof VvExp)&&
								((VvExp)replaceVar).es==null){
							optVar=new Vv(((VvExp)replaceVar).val);
						}
						myPut(exprMap,temp,optVar);
					}
				}
			}

			myPut(varMap,s.var, new ArrayList<CuExpr>());
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
			
			Map<CuVvc,ArrayList<CuExpr>>  varMap2 =new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			Map<CuExpr,CuVvc> exprMap2 = new HashMap<CuExpr, CuVvc>(exprMap);
			
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
			
			Map<CuVvc,ArrayList<CuExpr>>  varMap2 =new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			Map<CuExpr,CuVvc> exprMap2 = new HashMap<CuExpr, CuVvc>(exprMap);
			
			CuVvc iter =new Vv(((ForToWhileStat) orgS).var);
			//clear reference to var in header
			//clear varMap
			myRemove(varMap2, iter);
			for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap2.entrySet()){
				for(int i =elem.getValue().size()-1;i>=0;i--){
					if (elem.getValue().get(i).containsVar.contains(iter.text)){
						elem.getValue().remove(i);
					}
				}
			}
			
			//delete all expr mapped to this var in exprMap
			Iterator<Map.Entry<CuExpr, CuVvc>> iterExp = exprMap2.entrySet().iterator();
			while (iterExp.hasNext()) {
			    Map.Entry<CuExpr, CuVvc> e = iterExp.next();
			    if(e.getValue().text.equals(iter.text)){
			        iterExp.remove();
			    }
			}
			
			
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
			Map<CuVvc,ArrayList<CuExpr>>  varMapIf = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			Map<CuExpr,CuVvc> 			 exprMapIf = new HashMap<CuExpr, CuVvc>(exprMap);
			//finish evaluating everything in the scope before we say we can move on.
			while (!ifS.ifElseMergePoint.contains(orgS)){
				doCSE(ifS,varMapIf,exprMapIf);
				ifS=ifS.getNext();
			}

			//only do else branch handling and merging if there is an else block
			CuStat elseS=orgS.elseBranch();
			if (elseS!=null){
				Map<CuVvc,ArrayList<CuExpr>>  varMapElse = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
				Map<CuExpr,CuVvc> 			 exprMapElse = new HashMap<CuExpr, CuVvc>(exprMap);
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
								if (elem.getValue().get(i).containsVar.contains(s.var.text)){
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
			System.out.println("\nDid not process stat: "+orgS.toString());
			return orgS.getNext();
		}
	}
	

	//make sure this is returning a new copy except primitive types
	static private CuExpr updateExpr(CuVvc name,CuExpr orgE,
			Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap) throws Exception{
		//debug
		CuExpr temp=rootExpr(orgE,exprMap,varMap);
		if(myContainsKey(exprMap,rootExpr(orgE,exprMap,varMap))){
			return new VvExp(myGet(exprMap,rootExpr(orgE,exprMap,varMap)).text);
		}else{
			CuExpr newE=null;
			if (orgE instanceof AndExpr){
				newE=new AndExpr(updateExpr(null,((AndExpr)orgE).left,exprMap, varMap), 
						updateExpr(null,((AndExpr)orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof AppExpr){
				newE=new AppExpr(updateExpr(null,((AppExpr) orgE).left,exprMap, varMap), 
						updateExpr(null,((AppExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof BrkExpr){
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((BrkExpr) orgE).val){
					updateInput.add(updateExpr(null, elem,exprMap, varMap));
				}
				newE=new BrkExpr(updateInput);

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof DivideExpr){
				newE=new DivideExpr(updateExpr(null,((DivideExpr) orgE).left,exprMap, varMap),
						updateExpr(null,((DivideExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof EqualExpr){
				newE=new EqualExpr(updateExpr(null,((EqualExpr) orgE).left,exprMap, varMap), 
						updateExpr(null,((EqualExpr) orgE).right,exprMap, varMap),
						((EqualExpr) orgE).bool);
				newE.methodId=((EqualExpr) orgE).method2;

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof GreaterThanExpr){
				newE=new GreaterThanExpr(updateExpr(null,((GreaterThanExpr) orgE).left,exprMap, varMap), 
						updateExpr(null,((GreaterThanExpr) orgE).right,exprMap, varMap),
						((GreaterThanExpr) orgE).b);

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof LessThanExpr){
				newE=new LessThanExpr(updateExpr(null,((LessThanExpr) orgE).left,exprMap, varMap), 
						updateExpr(null,((LessThanExpr) orgE).right,exprMap, varMap),
						((LessThanExpr) orgE).b);

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof MinusExpr){
				newE=new MinusExpr(updateExpr(null,((MinusExpr) orgE).left,exprMap, varMap), 
						updateExpr(null,((MinusExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof ModuloExpr){
				newE=new ModuloExpr(updateExpr(null, ((ModuloExpr) orgE).left,exprMap, varMap), 
						updateExpr(null, ((ModuloExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof NegateExpr){
				newE=new NegateExpr(updateExpr(null,((NegateExpr) orgE).val,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof NegativeExpr){
				newE=new NegativeExpr(updateExpr(null,((NegativeExpr) orgE).val,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof OrExpr){
				newE=new OrExpr(updateExpr(null,((OrExpr) orgE).left,exprMap, varMap),
						updateExpr(null,((OrExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof PlusExpr){
				newE=new PlusExpr(updateExpr(null,((PlusExpr) orgE).left,exprMap, varMap),
						updateExpr(null,((PlusExpr) orgE).right,exprMap, varMap));

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof ThroughExpr){
				newE=new ThroughExpr(updateExpr(null,((ThroughExpr) orgE).left,exprMap, varMap),
						updateExpr(null,((ThroughExpr) orgE).right,exprMap, varMap),
						((ThroughExpr) orgE).bLow,((ThroughExpr) orgE).bUp);

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof TimesExpr){
				newE=new TimesExpr(updateExpr(null,((TimesExpr) orgE).left,exprMap, varMap),
						updateExpr(null,((TimesExpr) orgE).right,exprMap, varMap));
				
				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof VarExpr){
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((VarExpr) orgE).es){
					updateInput.add(updateExpr(null, elem,exprMap, varMap));
				}
				((VarExpr) newE).es=updateInput;
				newE=new VarExpr(updateExpr(null,((VarExpr) orgE).val,exprMap, varMap)
						,orgE.methodId,
						((VarExpr) orgE).types,
						updateInput);

				return finalReturn(name,orgE, newE, exprMap, varMap);
			}
			else if (orgE instanceof VcExp){
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				for (CuExpr elem :((VcExp) orgE).es){
					updateInput.add(updateExpr(null, elem, exprMap, varMap));
				}
				((VcExp) newE).es=updateInput;
				newE=new VcExp(((VcExp) orgE).val, ((VcExp) orgE).types, updateInput);
				
				return finalReturn(name,orgE,newE, exprMap, varMap);
			}
			else if (orgE instanceof VvExp){
				newE=new VvExp(((VvExp) orgE).val);
				//even if argument set is null that's fine
				ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
				//TODO: make sure you don't mess up the sequence here
				if (((VvExp) orgE).es!=null){
					for (CuExpr elem :((VvExp) orgE).es){
						updateInput.add(updateExpr(null, elem, exprMap, varMap));
					}
					((VvExp) newE).add(((VvExp) orgE).types, updateInput);
				}else {
					((VvExp) newE).add(((VvExp) orgE).types, null);
				}
				((VvExp) newE).retype=((VvExp) orgE).retype;
				((VvExp) newE).oriReType=((VvExp) orgE).oriReType;
				
				return finalReturn(name,orgE,newE, exprMap, varMap);
			}else {
				CuExpr temp1=rootExpr(orgE,exprMap,varMap);
				if(name!=null&&(!myContainsKey(exprMap, temp1))){
					myPut(exprMap,temp1, name);
				}
				System.out.println("Did not update expr: "+orgE.toString());
			}
			
			return orgE;
		}
	}
	
	private static CuExpr finalReturn(CuVvc name,CuExpr orgE,CuExpr newE,
			Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap){
		CuVvc betterE=null;

		orgE.copyFieldsTo(newE);
		CuExpr temp=rootExpr(newE,exprMap,varMap);
		if(myContainsKey(exprMap,temp)){
			betterE=myGet(exprMap,temp);
			return new VvExp(betterE.text);
		}
		else{
			CuExpr temp2=rootExpr(newE,exprMap,varMap);
			if(name!=null&&(!myContainsKey(exprMap, temp2))){
				myPut(exprMap,temp2, name);}
			return newE;
		}
	}

	//make sure this is returning a new copy except primitive types
	private static CuExpr rootExpr(CuExpr orgE, 
			Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap){
		CuExpr newE=null;
		if (orgE instanceof AndExpr){
			newE=new AndExpr(rootExpr(((AndExpr)orgE).left,exprMap, varMap), 
					rootExpr(((AndExpr)orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof AppExpr){
			newE=new AppExpr(rootExpr(((AppExpr) orgE).left,exprMap, varMap),
					rootExpr(((AppExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof BrkExpr){
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((BrkExpr) orgE).val){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			newE=new BrkExpr(updateInput);

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof DivideExpr){
			newE=new DivideExpr(rootExpr(((DivideExpr) orgE).left,exprMap, varMap),
					rootExpr(((DivideExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof EqualExpr){
			newE=new EqualExpr(rootExpr(((EqualExpr) orgE).left,exprMap, varMap),
					rootExpr(((EqualExpr) orgE).right,exprMap, varMap),
					((EqualExpr) orgE).bool);
			newE.methodId=((EqualExpr) orgE).method2;

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof GreaterThanExpr){
			newE=new GreaterThanExpr(rootExpr(((GreaterThanExpr) orgE).left,exprMap, varMap),
					rootExpr(((GreaterThanExpr) orgE).right,exprMap, varMap),
					((GreaterThanExpr) orgE).b);

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof LessThanExpr){
			newE=new LessThanExpr(rootExpr(((LessThanExpr) orgE).left,exprMap, varMap),
					rootExpr(((LessThanExpr) orgE).right,exprMap, varMap),
					((LessThanExpr) orgE).b);

			return newE;
		}
		else if (orgE instanceof MinusExpr){
			newE=new MinusExpr(rootExpr(((MinusExpr) orgE).left,exprMap, varMap),
					rootExpr(((MinusExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof ModuloExpr){
			newE=new ModuloExpr(rootExpr(((ModuloExpr) orgE).left,exprMap, varMap),
					rootExpr(((ModuloExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof NegateExpr){
			newE=new NegateExpr(rootExpr(((NegateExpr) orgE).val,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof NegativeExpr){
			newE=new NegativeExpr(rootExpr(((NegativeExpr) orgE).val,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof OrExpr){
			newE=new OrExpr(rootExpr(((OrExpr) orgE).left,exprMap, varMap),
					rootExpr(((OrExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof PlusExpr){
			newE=new PlusExpr(rootExpr(((PlusExpr) orgE).left,exprMap, varMap),
					rootExpr(((PlusExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof ThroughExpr){
			newE=new ThroughExpr(rootExpr(((ThroughExpr) orgE).left,exprMap, varMap),
					rootExpr(((ThroughExpr) orgE).right,exprMap, varMap),
					((ThroughExpr) orgE).bLow,
					((ThroughExpr) orgE).bUp);

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof TimesExpr){
			newE=new TimesExpr(rootExpr(((TimesExpr) orgE).left,exprMap, varMap),
					rootExpr(((TimesExpr) orgE).right,exprMap, varMap));

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof VarExpr){
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VarExpr) orgE).es){
				updateInput.add(rootExpr(elem,exprMap, varMap));
			}
			newE=new VarExpr(rootExpr(((VarExpr) orgE).val,exprMap, varMap),
					orgE.methodId,((VarExpr) orgE).types,
					updateInput);

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof VcExp){
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			for (CuExpr elem :((VcExp) orgE).es){
				updateInput.add(rootExpr(elem, exprMap, varMap));
			}

			newE=new VcExp(((VcExp) orgE).val, ((VcExp) orgE).types, updateInput);

			orgE.copyFieldsTo(newE);
			return newE;
		}
		else if (orgE instanceof VvExp){
			newE=new VvExp(((VvExp) orgE).val);
			//even if argument set is null that's fine
			ArrayList<CuExpr> updateInput=new ArrayList<CuExpr>();
			//TODO: make sure you don't mess up the sequence here
			if (((VvExp) orgE).es!=null){
				for (CuExpr elem :((VvExp) orgE).es){
					updateInput.add(rootExpr(elem, exprMap, varMap));
				}
				((VvExp) newE).add(((VvExp) orgE).types, updateInput);
			}
			//this is just a variable name
			else if(myContainsKey(varMap, new Vv(((VvExp) orgE).val))){
				CuExpr root= myGet(varMap,new Vv(((VvExp) orgE).val)).get(0);
				root=rootExpr(root, exprMap, varMap);
				return root;
			}else{
				((VvExp) newE).add(((VvExp) orgE).types, null);
			}
			((VvExp) newE).retype=((VvExp) orgE).retype;
			((VvExp) newE).oriReType=((VvExp) orgE).oriReType;

			orgE.copyFieldsTo(newE);
			return newE;
		}
		
		return orgE;
	}
	
	private static<K,V> boolean myContainsKey(Map<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return true;
			} 
		}
		return false;
	}
	private static<K,V> V myGet(Map<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return map.get(e.getKey());
			} 
		}
		return null;
	}
	private static<K,V> V myPut(Map<K,V> map, K key, V val){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return map.put(e.getKey(),val);
			} 
		}
		return map.put(key,val);
	}
	private static<K,V> V myRemove(Map<K,V> map, K key){
		for (Entry<K,V> e : map.entrySet()){
			if (e.getKey().equals(key)){
				return map.remove(e.getKey());
			} 
		}
		return null;
	}
	
}