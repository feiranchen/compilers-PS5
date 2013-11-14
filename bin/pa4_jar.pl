for ($i=1; $i<22; $i++) {
 if($i<7 or $i>10) { 
		 print "testcase $i\n";
		 $re = `java Cubex ctests/x3_test$i.x3`;
         $make = `make clean`;
		 $make = `make`;
		 print "make\n";
		 $hasinfile = `ls ctests/x3_test$i.in`;
		 if($hasinfile eq "ctests/x3_test$i.in\n") {
			$response = `cat ctests/x3_test$i.in | xargs ./a.out`;
         }
		 else {
			$response = `./a.out`;
         }
		 print "run result\n\n\n\n", $response;
 }
}

