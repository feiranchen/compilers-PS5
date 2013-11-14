for ($i=1; $i<47; $i++) {
 $re = `java Cubex our_tests/tc_test$i.in`;
 @retype = split("\n", $re);
 open $fh, "our_tests/tc_test$i.out";
 $myline = <$fh>;
 chomp($myline);
 print "test case $i\n";
 if ($retype[$#retype] eq $myline) {
   print "pass\n";
 }
 else {
  print "fail\n";
  print "ours is ", $retype[$#retype], "\n";
  print "their is ", $myline, "\n";
 }
}

