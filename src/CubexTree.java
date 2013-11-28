import java.io.IOException;

import org.antlr.v4.runtime.*;

public class CubexTree {
	public static void main (String args[]) throws IOException {
		getParser(args[0]);
/*		try {
			tree(args[0]);
		} catch (Exception e) {
			System.out.println("parser error");
		}*/
	}
	
	protected static void tree(String fn) throws Exception {
		CubexLexer2 lexer = new CubexLexer2(new ANTLRFileStream(fn));
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		CubexParser2 parser = new CubexParser2(tokens);
//		parser.removeErrorListeners(); // remove ConsoleErrorListener 
//		parser.addErrorListener(new ParserErrorListener(true)); // add ours 
		parser.setBuildParseTree(true);
		RuleContext tree = parser.program();
		tree.inspect(parser); // show in gui
	}
	
	protected static void getParser(String fn) throws IOException {
		CubexLexer2 lexer = new CubexLexer2(new ANTLRFileStream(fn));
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		CubexParser2 parser = new CubexParser2(tokens);
		// alter anltr error messages
		parser.removeErrorListeners();
		parser.addErrorListener(new ParserErrorListener(false)); //disable debug messages
		
		String coreLang = "";
		coreLang = parser.program().p.toString();
		/*try {
			coreLang = parser.program().p.toString();
		} catch (Exception e) {
			System.out.println("parser error");
			System.exit(-2);
		}*/
		System.out.println(coreLang);
	}
}
