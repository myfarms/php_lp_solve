<?php

// Test and Demonstrate the use of lp_solve

include "lp_solve.php";

// Example 1 from the lp_solve distribution
$f = Array(-1, 2);
$A = Array(Array(2, 1), Array(-4, 4));
$b = Array(5, 5);
$e = Array(-1, -1);
$xint = Array(1, 2);

$ret = lp_solve($f,$A,$b,$e,null,null,$xint);

print_r($ret);

// Example 2
$f = Array(50, 100);
$A = Array(Array(10, 5),Array(4, 10),Array(1, 1.5));
$b = Array(2500, 2000, 450);
$e = Array(-1, -1, -1);

$ret = lp_solve($f,$A,$b,$e);
print_r($ret);

// Example 3
$f = Array(-40, -36);
$vub = Array(8, 10);
$A = Array(Array(5, 3));
$b = Array(45);
$e = Array(1);

$ret = lp_solve($f,$A,$b,$e,null,$vub);
print_r($ret);

// Example 4
$f = Array(10, 6, 4);
$A = Array(Array(1, 1, 1), Array(10, 4, 5), Array(2, 2, 6));
$b = Array(100, 600, 300);
$e = Array(-1, -1, -1);
$xint = Array(2);

$ret = lp_solve($f,$A,$b,$e,null,null,$xint);
print_r($ret);

// Example 5
// Integer programming example, page 218 of Ecker & Kupferschmid
$f = Array(-3, 7, 12);
$A = Array(Array(-3, 6, 8), Array(6, -3, 7), Array(-6, 3, 3));
$b = Array(12, 8, 5);
$e = Array(-1, -1, -1);
$xint = Array(1, 2, 3);

$ret = lp_solve($f,$A,$b,$e,null,null,$xint);
print_r($ret);

// Example 6
// 0-1 programming example, page 228 233 of Ecker & Kupferschmid
$f = Array(-2, -3, -7, -7);
$A = Array(Array(1, 1, -2, -5), Array(-1, 2, 1, 4));
$b = Array(2, -3);
$e = Array(1, 1);
$xint = Array(1, 2, 3, 4);
$vub = Array(1, 1, 1, 1);

$ret = lp_solve($f,$A,$b,$e,null,$vub,$xint);
print_r($ret);

// Example 7

// 0-1 programming example, page 238 of Ecker & Kupferschmid
$f = Array(-1, -2, -3, -7, -8, -8);
$A = Array(Array(5, -3, 2, -3, -1, 2), Array(-1, 0, 2, 1, 3, -3), Array(1, 2, -1, 0, 5, -1));
$b = Array(-5, -1, 3);
$e = Array(1, 1, 1);
$xint = Array(1, 2, 3, 4, 5, 6);
$vub = Array(1, 1, 1, 1, 1, 1);

$ret = lp_solve($f,$A,$b,$e,null,$vub,$xint);
print_r($ret);

// ex2.lp from the lp_solve distribution
$f=Array(8, 15);
$A = Array(Array(10, 21), Array(2, 1));
$b = Array(156, 22);
$e = Array(-1, -1);
$ret = lp_solve($f,$A,$b,$e);
print_r($ret);

// ex3.lp from the lp_solve distribution
$f=Array(3, 13);
$A = Array(Array(2, 9), Array(11, -8));
$b = Array(40, 82);
$e = Array(-1, -1);
$ret = lp_solve($f,$A,$b,$e);
print_r($ret);

// ex6.lp from the lp_solve distribution
$f=Array(592, 381, 273, 55, 48, 37, 23);
$A = Array(Array(3534, 2356, 1767, 589, 528, 451, 304));
$b = Array(119567);
$e = Array(-1);
$xint = Array(1, 2, 3, 4, 5, 6, 7);
$vub = null;
$ret = lp_solve($f,$A,$b,$e,null,$vub,$xint);
print_r($ret);

?>
