<?php
$lp = lpsolve('make_lp', 0, 4);
lpsolve('set_verbose', $lp, IMPORTANT);
$ret = lpsolve('set_obj_fn', $lp, Array(1, 3, 6.24, 0.1));
$ret = lpsolve('add_constraint', $lp, Array(0, 78.26, 0, 2.9), GE, 92.3);
$ret = lpsolve('add_constraint', $lp, Array(0.24, 0, 11.31, 0), LE, 14.8);
$ret = lpsolve('add_constraint', $lp, Array(12.68, 0, 0.08, 0.9), GE, 4);
$ret = lpsolve('set_lowbo', $lp, Array(28.6, 0, 0, 18));
$ret = lpsolve('set_upbo', $lp, Array(Infinite, Infinite, Infinite, 48.98));
$ret = lpsolve('set_col_name', $lp, Array('COLONE', 'COLTWO', 'COLTHREE', 'COLFOUR'));
$ret = lpsolve('set_row_name', $lp, Array('THISROW', 'THATROW', 'LASTROW'));
$ret = lpsolve('write_lp', $lp, 'a.lp');
print_r(lpsolve('get_mat', $lp));
print lpsolve('solve', $lp) . "\n";
print lpsolve('get_objective', $lp) . "\n";
print_r(lpsolve('get_variables', $lp));
print_r(lpsolve('get_constraints', $lp));
lpsolve('delete_lp', $lp);
?>
