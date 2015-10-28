#if !defined PHP_PHPLPSOLVE55_H
/* Prevent double inclusion */
#define PHP_PHPLPSOLVE55_H

/* Following 3 headers needed for VC 2005, otherwise compilation error */
#if defined WIN32
# include <time.h>
# include <sys/utime.h>
# include <sys/stat.h>
#endif

/* Import configure options
   when building outside of
   the PHP source tree */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Include PHP Standard Header */

#include "php.h"

#include "SAPI.h"

/* Define the entry point symbol
 * Zend will use when loading this module
 */
extern zend_module_entry phplpsolve55_module_entry;
#define phpext_phplpsolve55_ptr &phplpsolve55_module_entry

#include "lp_lib.h"

#define quotechar "\""
#define drivername lpsolve
#define strdrivername "lpsolve"
#define caller "PHP"
#define matCalloc calloc
#define matFree free

#define rMatrix zval
#define pMatrix zval *
#define strArray char **

#define putlogfunc put_logfunc
#define putabortfunc put_abortfunc

#define init_lpsolve_lib() TRUE
#define exit_lpsolve_lib()

#define callerPrototype(callername) PHP_FUNCTION(callername)

#if defined MSDOS || defined WIN32 || defined WIN64 || defined _WIN32 || defined _WIN64
        #define set_tsrm_ls(lpsolve) (lpsolve)->lpsolvecaller.tsrm_ls = (void *) tsrm_ls
#else
        #define set_tsrm_ls(lpsolve)
#endif

#define publicargs(lpsolve) \
        (lpsolve)->lpsolvecaller.nlhs = 99; \
        (lpsolve)->lpsolvecaller.plhs = return_value; \
        (lpsolve)->lpsolvecaller.nrhs = ZEND_NUM_ARGS(); \
        set_tsrm_ls(lpsolve); \

#define registerExitFcn(lpsolve)

#define ExitcallerPrototype(lpsolve)

#define BEGIN_INTERRUPT_IMMEDIATELY_IN_FOREIGN_CODE
#define END_INTERRUPT_IMMEDIATELY_IN_FOREIGN_CODE

typedef struct
{
        jmp_buf exit_mark;
        int  nrhs;
        int  nlhs;
        zval * plhs;
        void *tsrm_ls;
} structlpsolvecaller;

#define Double double
#define Long long

#define Printf php_printf

#endif /* PHP_PHPLPSOLVE55_H */
