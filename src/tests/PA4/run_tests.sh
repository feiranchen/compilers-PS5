#! /bin/bash

#RUNTIME is the path to the directory with the makefile/cubex_lib.h etc
#JARFILE is the path to your compiler

RUNTIME=/Users/apple/Documents/eclipseWorkspace/compilers-PS5/src 
JARFILE=/Users/apple/Documents/eclipseWorkspace/compilers-PS5/src/CGen.jar 
SUM=summary.txt

FLAGS=
FILES=

while (($#)) ; do
    if echo $1 | grep -q '^-' ; then
        FLAGS="$FLAGS $1"
    else
        FILES="$FILES $1"
    fi
    shift
done

if [ -z "$FILES" ]
then
    INPUT_FILES="$(ls *.x3)"
else
    INPUT_FILES="$FILES"
fi

FAILED_TESTS=
ALL_PASSED=TRUE

for F in $INPUT_FILES; do
    in_file=$(echo "$F" | sed "s/\.x3$/\.in/")
    out_file=$(echo "$F" | sed "s/\.x3$/\.out/")
    PASSED=TRUE
    REASON=
    echo "generating C..."
    RESULT=$(java -jar $JARFILE $FLAGS $F)
    echo $RESULT
    cp ./out.c $RUNTIME
    if [ "$?" != "0" ] ; then
        echo "compiler crashed"
        PASSED=FALSE
        REASON="compiler crashed"
    elif [ "$RESULT" = "reject" ] ; then
        if [ "$(cat $out_file)" != "reject" ] ; then
            PASSED=FALSE
            REASON="compiler rejected input"
            echo $RESULT
        fi
    else
        echo "compiling C..."
        if ! make -C $RUNTIME > /dev/null 2>&1 ; then
            echo "compiling C failed."
            PASSED=FALSE
            REASON="compiling C failed"
        fi
        if [ $PASSED = TRUE ] && ! cat $in_file | xargs $RUNTIME/a.out > /tmp/"$out_file".actual 2> /tmp/"$out_file".error ; then
            PASSED=FALSE
            REASON="$(cat /tmp/"$out_file".error)"
            echo "$REASON"
        fi
        if [ $PASSED = TRUE ] && ! diff /tmp/"$out_file".actual $out_file ; then
            printf "\n=================new test==========================:  $F\n" >>$SUM
            echo "**ACTUAL**" >>$SUM 
            cat /tmp/"$out_file".actual>>$SUM
            echo "**EXPECTED**">>$SUM
            cat $out_file>>$SUM
            PASSED=FALSE
            REASON="diffs did not match"
        fi
    fi
    if [ "$PASSED" != "TRUE" ] ; then
		echo "[[41;30m Failed  [m][91m $F [m"
        ALL_PASSED=FALSE
        FAILED_TESTS="$FAILED_TESTS""$F&$REASON\n"
	else
		echo "[[32m    OK   [m] $F"
	fi
    make -C $RUNTIME clean > /dev/null 2> /dev/null
done

if [ $ALL_PASSED = TRUE ]; then
    echo "============================"
    echo "       All tests pass!      "
    echo "============================"
    exit 0
else
    echo "============================"
    echo "        Failed tests:       "
    echo "============================"
    echo -e $FAILED_TESTS | column -t -s'&'
    exit 1
fi
