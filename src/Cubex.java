import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import org.antlr.v4.runtime.*;

public class Cubex {
	public static void main (String args[]) throws Exception {
		getParser(args[0]);
	}
	
	protected static void getParser(String fn) throws Exception {
		CubexLexer2 lexer = new CubexLexer2(new ANTLRFileStream(fn));
		
		//bound inputs to a variable input, put in context
		CuContext context=new CuContext();
		context.init();
		
		
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		CubexParser2 parser = new CubexParser2(tokens);
		// altering anltr error messages
		parser.removeErrorListeners();
		parser.addErrorListener(new ParserErrorListener(false)); //prevent printing debugging messages
		
		CuProgr ourProgram = null;

		if (Helper.PA3) {
			try {
				ourProgram = parser.program().p;
				Helper.P("parser succeeded");
				ourProgram.calculateType(context);
				System.out.println("accept");
			} catch (Exception e) {
				System.out.println("reject");
				System.exit(-2);
			}
		}
		else if (Helper.PA4) {
			try {
				ourProgram = parser.program().p;
				Helper.P("parser succeeded");
				ourProgram.calculateType(context);
				//Helper.ToDo("comment out accept when we submit");
				System.out.println("accept");
			} catch (Exception e) {
				System.out.println("reject");
				//even if rejected, we still generate a 
				//System.exit(-2);
			}
			//first, convert to HIR, in debug mode, this print out the first HIR
	        ourProgram.toHIR();
	        //next, build CFG, use and def sets are built here
	        ourProgram.buildCFG();
	
	        //CSE.startCSE((FullPrg)ourProgram);
	        // *********for the first optimization, put your method here***************
	        
	        //after cse, print out the HIR four debugging
	        if (Helper.DEBUG){
	        	System.out.println("PRINT HIR========================================");
	        	ourProgram.printHIR();
	        }
	        //next, build the in out sets
	        ourProgram.buildSets();
	        
	        //after cse, print out the HIR four debugging
	        if (Helper.DEBUG){
	        	System.out.println("PRINT HIR, after deadcode elimination====================");
	        	ourProgram.printHIR();
	        }
	        
			ArrayList<String> localVars = new ArrayList<String>();
			PrintWriter writer = new PrintWriter("C:\\Users\\Nikash\\Documents\\SharedWithUbuntu\\Compilers\\PA5\\out.c", "UTF-8");
			String cProgram = ourProgram.toC(localVars);
			if (Helper.DEBUG) {
				cProgram = "#include<stdio.h>\n" + cProgram;
			}
			writer.println(cProgram);
			writer.close();
		}
		else if (Helper.PA5) {
			try {
				ourProgram = parser.program().p;
				Helper.P("parser succeeded");
				ourProgram.calculateType(context);
				//Helper.ToDo("comment out accept when we submit");
				System.out.println("accept");
			} catch (Exception e) {
				System.out.println("reject");
				//even if rejected, we still generate a 
				//System.exit(-2);
			}
			//first, convert to HIR, in debug mode, this print out the first HIR
	        ourProgram.toHIR();
	        //next, build CFG, use and def sets are built here
	        ourProgram.buildCFG();
	
	        //CSE.startCSE((FullPrg)ourProgram);
	        // *********for the first optimization, put your method here***************
	        
	        //after cse, print out the HIR four debugging
	        if (Helper.DEBUG){
	        	System.out.println("PRINT HIR========================================");
	        	ourProgram.printHIR();
	        }
	        //next, build the in out sets
	        ourProgram.buildSets();
	        
	        //after cse, print out the HIR four debugging
	        if (Helper.DEBUG){
	        	System.out.println("PRINT HIR, after deadcode elimination====================");
	        	ourProgram.printHIR();
	        }
	        
			ArrayList<String> localVars = new ArrayList<String>();
			PrintWriter writer = new PrintWriter("C:\\Users\\Nikash\\Documents\\SharedWithUbuntu\\Compilers\\PA5\\out.c", "UTF-8");
			String cProgram = ourProgram.toC(localVars);
			if (Helper.DEBUG) {
				cProgram = "#include<stdio.h>\n" + cProgram;
			}
			writer.println(cProgram);
			writer.close();
		}
	}
		
}
