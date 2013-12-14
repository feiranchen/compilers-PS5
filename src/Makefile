
CFLAGS=-ansi -Wall -Wdeclaration-after-statement -g -O0
DEPS = cubex_external_functions.h cubex_private.h cubex_main.h cubex_lib.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: cubex_external_functions.o master.o out.o
	$(CC) -o a.out cubex_external_functions.o master.o out.o $(CFLAGS)

clean: FORCE
	rm *.o a.out

compile:
	export PATH="/Users/apple/Documents/eclipseWorkspace/compilers-PS5/src":"${PATH}"
	export CLASSPATH=".:/usr/local/lib/antlr-4.1-complete.jar:${CLASSPATH}"
	alias antlr4="java -jar /usr/local/lib/antlr-4.1-complete.jar"
	alias grun="java org.antlr.v4.runtime.misc.TestRig"
	java -jar /usr/local/lib/antlr-4.1-complete.jar *.g4 -no-listener
	javac *.java

test:
	chmod +x CGen.jar
	bash TestCases CGen.jar

clean_compile:
	rm ../bin
	rm *.class
	rm *.jar
	rm *.tokens

FORCE:
