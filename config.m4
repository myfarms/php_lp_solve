PHP_ARG_WITH(phplpsolve55,[lpsolve 5.5]
[  with-phplpsolve55=[Insert path to lp_solve here]            Include lpsolve Support])

if test $PHP_PHPLPSOLVE55 != "no"; then
  if test -f "$PHP_PHPLPSOLVE55/lp_lib.h"; then
    PHP_CHECK_LIBRARY(lpsolve55, make_lp,,[AC_MSG_ERROR([Invalid phplpsolve55 library, make_lp() not found])],-L/usr/lib)
  else
    dnl This will cancel configuration if the required headers aren't found
    AC_MSG_ERROR([lp_lib.h not found])
  fi

  PHP_ADD_LIBRARY_WITH_PATH(lpsolve55, /usr/local/lib, PHPLPSOLVE55_SHARED_LIBADD)
  PHP_ADD_INCLUDE($PHP_PHPLPSOLVE55)
  AC_MSG_RESULT([lpsolve in $PHP_PHPLPSOLVE55])
  AC_DEFINE(PHP,1,[liblpsolve55 found and included])
  AC_DEFINE(DEMO,1,[DEMO code in lpsolve])
  PHP_NEW_EXTENSION(phplpsolve55, PHPmod.c hash.c lpsolve.c, $ext_shared)
  PHP_SUBST(PHPLPSOLVE55_SHARED_LIBADD)
fi

