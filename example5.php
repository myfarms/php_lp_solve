<?php

include("lp_maker.php");

$f = Array(143, 60, 195);
$A = Array(Array(120, 210, 150.75), Array(110, 30, 125), Array(1, 1, 1));
$b = Array(15000, 4000, 75);
$lp = lp_maker($f, $A, $b, Array(-1, -1, -1), null, null, null, 1, 0);
$solvestat = lpsolve('solve', $lp);
$obj = lpsolve('get_objective', $lp);
print $obj . "\n";
$x = lpsolve('get_variables', $lp);
$x = $x[0];
print_r($x);
lpsolve('delete_lp', $lp);

?>
