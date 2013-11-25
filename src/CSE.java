import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;



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
	
	static public CuStat doCSE(CuStat orgS,
			Map<CuVvc,ArrayList<CuExpr>> varMap,
			Map<CuExpr, CuVvc> exprMap) throws Exception{

		if (orgS instanceof AssignStat){
			//simplify and update the expression map
			CuExpr newE=updateExpr(((AssignStat)orgS).var, ((AssignStat)orgS).ee,exprMap, varMap);
			cleanAllVars(orgS.getContainsVar(),exprMap,varMap);
			CuExpr temp=rootExpr(newE,exprMap,varMap);
			if(!myContainsKey(exprMap, temp)){
				myPut(exprMap,temp, ((AssignStat)orgS).var);
			}
			((AssignStat) orgS).ee=newE;
			//maps are already cleaned
			myPut(varMap,((AssignStat)orgS).var, new ArrayList<CuExpr>());
			myGet(varMap,((AssignStat)orgS).var).add(newE);
			return orgS.getNext();
		}
		else if (orgS instanceof WhileStat){
			cleanAllVars(orgS.getContainsVar(),exprMap,varMap);
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
			cleanAllVars(orgS.getContainsVar(),exprMap,varMap);
			CuStat nextS=orgS.whileBranch();
			
			Map<CuVvc,ArrayList<CuExpr>>  varMap2 =new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
			Map<CuExpr,CuVvc> exprMap2 = new HashMap<CuExpr, CuVvc>(exprMap);
			
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
			while (!ifS.lastInIfScope.contains(orgS)){
				doCSE(ifS,varMapIf,exprMapIf);
				ifS=ifS.getNext();
			}
			doCSE(ifS,varMapIf,exprMapIf);

			//only do else branch handling and merging if there is an else block
			CuStat elseS=orgS.elseBranch();
			if (elseS!=null){
				Map<CuVvc,ArrayList<CuExpr>>  varMapElse = new HashMap<CuVvc,ArrayList<CuExpr>>(varMap);
				Map<CuExpr,CuVvc> 			 exprMapElse = new HashMap<CuExpr, CuVvc>(exprMap);
				while (!elseS.lastInIfScope.contains(orgS)){
					doCSE(elseS,varMapElse,exprMapElse);
					elseS=elseS.getNext();
				}
				doCSE(elseS,varMapElse,exprMapElse);
				
				varMap.clear();
				exprMap.clear();
				// We only care about: new variables(old, global ones are always immutable) 
				// that exist in both branches and has the same value (otherwise value can't be exploited and thus no need to store)
				for (Entry e :varMapElse.entrySet()){
					if (myContainsKey(varMapIf,(CuVvc)e.getKey())){
						ArrayList<CuExpr> lst=commonElemLst((ArrayList<CuExpr>)e.getValue(),
								(ArrayList<CuExpr>)myGet(varMapIf, (CuVvc)e.getKey()));
						if (!lst.isEmpty()){
							myPut(varMap, (CuVvc)e.getKey(),lst);
						}
					}
				}
					
				for (Entry e1 :exprMapElse.entrySet()){
					if (myContainsKey(exprMapIf,(CuExpr)e1.getKey())&&
							myGet(exprMapIf,(CuExpr)e1.getKey()).text.equals(((CuVvc)e1.getValue()).text)){
						myPut(exprMap, (CuExpr)e1.getKey(), (CuVvc)e1.getValue());
					}
				}
				
				//update expr table with new shortcuts
				for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
					CuExpr temp=rootExpr(elem.getValue().get(0),exprMap,varMap);
					if (!myContainsKey(exprMap, temp)){
						CuVvc optVar=elem.getKey();
						CuExpr replaceVar=elem.getValue().get(0);
						while((replaceVar instanceof VvExp)&&
								((VvExp)replaceVar).es==null){
							optVar=new Vv(((VvExp)replaceVar).val);
							if(myContainsKey(varMap, optVar))
								replaceVar=myGet(varMap, optVar).get(0);
						}
						myPut(exprMap,temp,optVar);
					}
				}
				
			}
			return ifS.getNext();
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
	
	private static void cleanAllVars(Set<String> set, Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap){
		for (String s :set){
			//update var table with root exp
			for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
				if (elem.getValue().get(0).getUse().contains(s)){
					CuExpr temp=rootExpr(elem.getValue().get(0),exprMap,varMap);
					ArrayList<CuExpr> lst=elem.getValue();
					if (!(lst.get(lst.size()-1).equals(temp))){
						lst.add(temp);
					}
				}
			}
			
			//clear varMap
			myRemove(varMap,new Vv(s));
			for (Entry<CuVvc, ArrayList<CuExpr>> elem : varMap.entrySet()){
				for(int i =elem.getValue().size()-1;i>=0;i--){
					if (elem.getValue().get(i).getUse().contains(s)){
						elem.getValue().remove(i);
					}
				}
			}
			
			//delete all expr mapped to this var in exprMap
			Iterator<Map.Entry<CuExpr, CuVvc>> iterExp = exprMap.entrySet().iterator();
			while (iterExp.hasNext()) {
			    Map.Entry<CuExpr, CuVvc> e = iterExp.next();
			    if(e.getValue().text.equals(s)){
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
					while((replaceVar instanceof VvExp)&&
							((VvExp)replaceVar).es==null){
						optVar=new Vv(((VvExp)replaceVar).val);
						if(myContainsKey(varMap, optVar))
							replaceVar=myGet(varMap, optVar).get(0);
						else
							break;
					}
					myPut(exprMap,temp,optVar);
				}
			}
		}
	}

	//looking in ExprMap for substitution in subexpression or whole expression
	//make sure this is returning a new copy except primitive types
	static private CuExpr updateExpr(CuVvc name,CuExpr orgE,
			Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap) throws Exception{
		CuExpr root=rootExpr(orgE,exprMap,varMap);
		if(myContainsKey(exprMap,root)){
			CuVvc optVar=myGet(exprMap,root);
			CuExpr replaceVar=new VvExp(myGet(exprMap,root).text);
			while(myContainsKey(varMap,optVar)&&
					(myGet(varMap, optVar).get(0) instanceof VvExp)&&
					((VvExp)myGet(varMap, optVar).get(0)).es==null){
				optVar=new Vv(((VvExp)replaceVar).val);
				if(myContainsKey(varMap, optVar))
					replaceVar=myGet(varMap, optVar).get(0);
			}
			return replaceVar;
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
				}
				((VvExp) newE).retype=((VvExp) orgE).retype;
				((VvExp) newE).oriReType=((VvExp) orgE).oriReType;
				
				return finalReturn(name,orgE,newE, exprMap, varMap);
			}else {
				System.out.println("Did not update expr: "+orgE.toString());
			}
			
			return orgE;
		}
	}
	

	//we've looked at exprMap with it's root expr. No more need to look further
	private static CuExpr finalReturn(CuVvc name,CuExpr orgE,CuExpr newE,
			Map<CuExpr, CuVvc> exprMap,Map<CuVvc,ArrayList<CuExpr>> varMap){

		orgE.copyFieldsTo(newE);
		return newE;
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
			CuExpr newL=rootExpr(((DivideExpr) orgE).left,exprMap, varMap);
			CuExpr newR=rootExpr(((DivideExpr) orgE).right,exprMap, varMap);
			newE=new DivideExpr(newL,newR);
					//rootExpr(((DivideExpr) orgE).left,exprMap, varMap),
					//rootExpr(((DivideExpr) orgE).right,exprMap, varMap));

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
				((VvExp) newE).retype=((VvExp) orgE).retype;
				((VvExp) newE).oriReType=((VvExp) orgE).oriReType;

				orgE.copyFieldsTo(newE);
				return newE;
			}else{
				//this is just a variable name
				((VvExp) newE).retype=((VvExp) orgE).retype;
				((VvExp) newE).oriReType=((VvExp) orgE).oriReType;
				orgE.copyFieldsTo(newE);
			}
			//catch dead loop
			if (myContainsKey(exprMap, newE)&&
					((VvExp)newE).val.equals(myGet(exprMap, newE))){
				return new VvExp(((VvExp)newE).val);
			}
			
			CuVvc valName=new Vv(((VvExp) newE).val);
			if(myContainsKey(varMap, valName)){
				List<CuExpr> lst=myGet(varMap, valName);
				//catch dead loop like i=i/2;
				if (lst.get(0).getUse().contains(valName.text))
					return lst.get(0);
				else
					return rootExpr(lst.get(0),exprMap,varMap);
			}else{
				return newE;
			}
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
	private static <A> ArrayList<A> commonElemLst(ArrayList<A> l1, ArrayList<A> l2){
		ArrayList<A> l=new ArrayList<A>();
		for (A e : l1){
			if (l2.contains(e)){
				l.add(e);
			}
		}
		return l;
	}
	
}