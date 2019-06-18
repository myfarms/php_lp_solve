PHP_ARG_WITH(phplpsolve55, for liblpsolve55,
[ --with-phplpsolve55=DIR Installation prefix of liblpsolve55.
                          If DIR is not specified, use the system library.])

if test $PHP_PHPLPSOLVE55 != "no"; then
  EXTRA_LIBS="-lm"
  AC_CHECK_LIB(dl, dlopen, [
    EXTRA_LIBS="$EXTRA_LIBS -ldl"
    PHP_ADD_LIBRARY(dl, 1, PHPLPSOLVE55_SHARED_LIBADD)
  ])
  AC_CHECK_LIB(colamd, colamd, [
    EXTRA_LIBS="$EXTRA_LIBS -lcolamd"
  ])
  dnl Find the header file:
  AC_MSG_CHECKING([for lp_lib.h])
  for i in $PHP_PHPLPSOLVE55 /usr/include/lpsolve /usr/local/include/lpsolve; do
    if test -r "$i/lp_lib.h"; then
      LIBLPSOLVE_INCDIR="$i"
      AC_MSG_RESULT($i)
      break
    fi
  done

  if test -z "$LIBLPSOLVE_INCDIR"; then
    AC_MSG_RESULT([not found])
    AC_MSG_ERROR([Could not find lp_lib.h])
  fi

  dnl Find the shared library:
  LDFLAGS="-Wl,--no-as-needed"
  for i in /usr/local/lib /usr/lib /lib; do
    if test -r "$i/liblpsolve55.so"; then
      PHP_CHECK_LIBRARY(lpsolve55, make_lp,[
          PHP_ADD_LIBRARY_WITH_PATH(lpsolve55, $i, PHPLPSOLVE55_SHARED_LIBADD)
          PHP_ADD_INCLUDE($LIBLPSOLVE_INCDIR)
          LIBLPSOLVE_LIBDIR="$i"
          break
        ],[
          continue
        ],[
          -L$i $EXTRA_LIBS
        ]
      )
    fi
  done

  if test -z "$LIBLPSOLVE_LIBDIR"; then
  PHP_CHECK_LIBRARY(lpsolve55, make_lp,[
        PHP_ADD_LIBRARY(lpsolve55, 1, PHPLPSOLVE55_SHARED_LIBADD)
        PHP_ADD_INCLUDE($LIBLPSOLVE_INCDIR)
        LIBLPSOLVE_LIBDIR="$i"
      ],[
        AC_MSG_ERROR([Could not find liblpsolve55.so or symbol make_lp.  Check version and config.log for more information.])
      ],[
        $EXTRA_LIBS
      ]
    )
  fi
  LDFLAGS=""
  AC_DEFINE(DEMO,1,[DEMO code in lpsolve])
  AC_DEFINE(PHP,1,[liblpsolve55 found and included])
  PHP_NEW_EXTENSION(phplpsolve55, PHPmod.c hash.c lpsolve.c, $ext_shared)
fi