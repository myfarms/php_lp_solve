<?php

function help_lp_maker()
{
print(
"LP_MAKER  Makes mixed integer linear programming problems.

  SYNOPSIS: lp_handle = lp_maker(f,a,b,e,vlb,vub,xint,scalemode,setminim)
     make the MILP problem
       max v = f'*x
         a*x <> b
           vlb <= x <= vub
           x(int) are integer

  ARGUMENTS: The first four arguments are required:
           f: n vector of coefficients for a linear objective function.
           a: m by n matrix representing linear constraints.
           b: m vector of right sides for the inequality constraints.
           e: m vector that determines the sense of the inequalities:
                     e(i) < 0  ==> Less Than
                     e(i) = 0  ==> Equals
                     e(i) > 0  ==> Greater Than
         vlb: n vector of non-negative lower bounds. If empty or omitted,
              then the lower bounds are set to zero.
         vub: n vector of upper bounds. May be omitted or empty.
        xint: vector of integer variables. May be omitted or empty.
   scalemode: Autoscale flag. Off when 0 or omitted.
    setminim: Set maximum lp when this flag equals 0 or omitted.

  OUTPUT: lp_handle is an integer handle to the lp created."
);
}

function lp_maker($f = null, $a = null, $b = null, $e = null, $vlb = null, $vub = null, $xint = null, $scalemode = null, $setminim = null)
{
  if ($f == null) {
          help_lp_maker();
          return;
  }

  $m = count($a);
  $n = count($a[0]);
  $lp = lpsolve('make_lp', $m, $n);
  lpsolve('set_verbose', $lp, IMPORTANT);
  lpsolve('set_mat', $lp, $a);
  lpsolve('set_rh_vec', $lp, $b);
  lpsolve('set_obj_fn', $lp, $f);
  lpsolve('set_maxim', $lp); // default is solving minimum $lp.

  for ($i = 0; $i < count($e); $i++) {
    if ($e[$i] < 0)
          $con_type = LE;
    else if ($e[$i] == 0)
          $con_type = EQ;
    else
          $con_type = GE;

    lpsolve('set_constr_type', $lp, $i + 1, $con_type);
  }

  if ($vlb != null)
    lpsolve('set_lowbo', $lp, $vlb);

  if ($vub != null)
    lpsolve('set_upbo', $lp, $vub);

  if ($xint != null)
    for ($i = 0; $i < count($xint); $i++)
      lpsolve('set_int', $lp, $xint[$i], 1);

  if ($scalemode != null)
    if ($scalemode != 0)
      lpsolve('set_scaling', $lp, $scalemode);

  if ($setminim != null)
    if ($setminim != 0)
      lpsolve('set_minim', $lp);
    else
      lpsolve('set_maxim', $lp);

  return $lp;
}
?>
