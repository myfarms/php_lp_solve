--TEST--
Empty test
--SKIPIF--
<?php
if(!extension_loaded("lpsolve")) echo 'skip';
?>
--FILE--
<?php
var_dump(lpsolve('make_lp', 0, 0));
?>
--EXPECT--
int(0)