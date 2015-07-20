<?php
$lp = lpsolve('make_lp', 0, 4);
lpsolve('set_verbose', $lp, NORMAL);
$ret = lpsolve('set_obj_fn', $lp, Array(1, 3, 6.24, 0.1));
$ret = lpsolve('add_constraint', $lp, Array(0, 78.26, 0, 2.9), GE, 92.3);
$ret = lpsolve('add_constraint', $lp, Array(0.24, 0, 11.31, 0), LE, 14.8);
$ret = lpsolve('add_constraint', $lp, Array(12.68, 0, 0.08, 0.9), GE, 4);
$ret = lpsolve('set_lowbo', $lp, 1, 28.6);
$ret = lpsolve('set_lowbo', $lp, 4, 18);
$ret = lpsolve('set_upbo', $lp, 4, 48.98);
$ret = lpsolve('set_col_name', $lp, 1, 'COLONE');
$ret = lpsolve('set_col_name', $lp, 2, 'COLTWO');
$ret = lpsolve('set_col_name', $lp, 3, 'COLTHREE');
$ret = lpsolve('set_col_name', $lp, 4, 'COLFOUR');
$ret = lpsolve('set_row_name', $lp, 1, 'THISROW');
$ret = lpsolve('set_row_name', $lp, 2, 'THATROW');
$ret = lpsolve('set_row_name', $lp, 3, 'LASTROW');
$ret = lpsolve('write_lp', $lp, 'a.lp');
print lpsolve('get_mat', $lp, 1, 2) . "\n";
print lpsolve('solve', $lp) . "\n";
print lpsolve('get_objective', $lp) . "\n";
print_r(lpsolve('get_variables', $lp));
print_r(lpsolve('get_constraints', $lp));
lpsolve('delete_lp', $lp);
?>
