for ($i=1; $i<21; $i++) {
 if($i<7 or $i>10) { 
         print "testcase $i\n";
         $re = `java Cubex ctests/x3_test$i.x3`;
         print $re;
  }
}

