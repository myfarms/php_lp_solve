<?php

include("lp_maker.php");

$f = Array(110*1.3, 30*2.0, 125*1.56, 75*1.8, 95*.95, 100*2.25, 50*1.35);
$A = Array(Array(120, 210, 150.75, 115, 186, 140, 85), Array(110, 30, 125, 75, 95, 100, 50), Array(1, 1, 1, 1, 1, 1, 1), Array(1, -1, 0, 0, 0, 0, 0), Array(0, 0, 1, 0, -2, 0, 0), Array(0, 0, 0, -1, 0, -1, 1));
$b = Array(55000, 40000, 400, 0, 0, 0);
$lp = lp_maker($f, $A, $b, Array(-1, -1, -1, -1, -1, -1), Array(10, 10, 10, 10, 20, 20, 20), Array(100, Infinite, 50, Infinite, Infinite, 250, Infinite), null, 1, 0);
$solvestat = lpsolve('solve', $lp);
$obj = lpsolve('get_objective', $lp);
print $obj . "\n";
$x = lpsolve('get_variables', $lp);
print_r($x);
lpsolve('delete_lp', $lp);

?>
