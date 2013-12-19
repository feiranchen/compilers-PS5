for ($i=1; $i<4; $i++) {
		 print "testcase $i\n";
		 $re = `java Cubex tests/PA5/LVA/c$i.x3`;
         $make = `make clean`;
		 $make = `make > temp 2>&1`;
		 print "make\n";
		 $hasinfile = `ls tests/PA5/LVA/c$i.in`;
		 if($hasinfile eq "tests/PA5/LVA/c$i.in\n") {
			$response = `cat tests/PA5/LVA/c$i.in | xargs ./a.out`;
         }
		 else {
			$response = `time ./a.out`;
         }
		 print "run result\n\n\n\n", $response;
}

