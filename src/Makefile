CC=gcc
CFLAGS=-ansi -Wall -Wdeclaration-after-statement -g -O0
DEPS = cubex_external_functions.h cubex_private.h cubex_main.h cubex_lib.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: cubex_external_functions.o master.o out.o
	$(CC) -o a.out cubex_external_functions.o master.o out.o $(CFLAGS)

clean: FORCE
	rm *.o a.out

compile:
	export PATH="/Users/apple/Documents/eclipseWorkspace/CompilersPS3-2/src":"${PATH}"
	export CLASSPATH=".:/usr/local/lib/antlr-4.1-complete.jar:${CLASSPATH}"
	alias antlr4="java -jar /usr/local/lib/antlr-4.1-complete.jar"
	alias grun="java org.antlr.v4.runtime.misc.TestRig"
	java -jar /usr/local/lib/antlr-4.1-complete.jar *.g4 -no-listener
	javac *.java
	jar cvfm CGen.jar MANIFEST.MF *.class *.java *.g4

test_compile:
	chmod +x TypeCheck.jar
	bash TestCases TypeCheck.jar

clean_compile:
	rm ../bin
	rm *.class
	rm *.jar
	rm *.tokens

FORCE:
