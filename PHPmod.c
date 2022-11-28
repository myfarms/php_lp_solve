#include "lpsolvecaller.h"

extern PHP_FUNCTION(lpsolve);


/* argument information */
ZEND_BEGIN_ARG_INFO_EX(arginfo_fake_php8, 0, 0, 1)
    ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

static zend_function_entry php_phplpsolve55_functions[] = {
    PHP_FE(lpsolve, arginfo_fake_php8)
    { NULL, NULL, NULL }
};


PHP_MINIT_FUNCTION(phplpsolve55)
{
    REGISTER_LONG_CONSTANT("LE", LE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("EQ", EQ, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("GE", GE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("FR", FR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_NONE", SCALE_NONE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_EXTREME", SCALE_EXTREME, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_RANGE", SCALE_RANGE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_MEAN", SCALE_MEAN, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_GEOMETRIC", SCALE_GEOMETRIC, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_CURTISREID", SCALE_CURTISREID, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_QUADRATIC", SCALE_QUADRATIC, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_LOGARITHMIC", SCALE_LOGARITHMIC, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_USERWEIGHT", SCALE_USERWEIGHT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_POWER2", SCALE_POWER2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_EQUILIBRATE", SCALE_EQUILIBRATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_INTEGERS", SCALE_INTEGERS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_DYNUPDATE", SCALE_DYNUPDATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_ROWSONLY", SCALE_ROWSONLY, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SCALE_COLSONLY", SCALE_COLSONLY, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPROVE_NONE", IMPROVE_NONE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPROVE_SOLUTION", IMPROVE_SOLUTION, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPROVE_DUALFEAS", IMPROVE_DUALFEAS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPROVE_THETAGAP", IMPROVE_THETAGAP, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPROVE_BBSIMPLEX", IMPROVE_BBSIMPLEX, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICER_FIRSTINDEX", PRICER_FIRSTINDEX, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICER_DANTZIG", PRICER_DANTZIG, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICER_DEVEX", PRICER_DEVEX, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICER_STEEPESTEDGE", PRICER_STEEPESTEDGE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_PRIMALFALLBACK", PRICE_PRIMALFALLBACK, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_MULTIPLE", PRICE_MULTIPLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_PARTIAL", PRICE_PARTIAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_ADAPTIVE", PRICE_ADAPTIVE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_RANDOMIZE", PRICE_RANDOMIZE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_AUTOPARTIAL", PRICE_AUTOPARTIAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_LOOPLEFT", PRICE_LOOPLEFT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_LOOPALTERNATE", PRICE_LOOPALTERNATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_HARRISTWOPASS", PRICE_HARRISTWOPASS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRICE_TRUENORMINIT", PRICE_TRUENORMINIT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_NONE", PRESOLVE_NONE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_ROWS", PRESOLVE_ROWS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_COLS", PRESOLVE_COLS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_LINDEP", PRESOLVE_LINDEP, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_SOS", PRESOLVE_SOS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_REDUCEMIP", PRESOLVE_REDUCEMIP, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_KNAPSACK", PRESOLVE_KNAPSACK, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_ELIMEQ2", PRESOLVE_ELIMEQ2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_IMPLIEDFREE", PRESOLVE_IMPLIEDFREE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_REDUCEGCD", PRESOLVE_REDUCEGCD, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_PROBEFIX", PRESOLVE_PROBEFIX, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_PROBEREDUCE", PRESOLVE_PROBEREDUCE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_ROWDOMINATE", PRESOLVE_ROWDOMINATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_COLDOMINATE", PRESOLVE_COLDOMINATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_MERGEROWS", PRESOLVE_MERGEROWS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_IMPLIEDSLK", PRESOLVE_IMPLIEDSLK, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_COLFIXDUAL", PRESOLVE_COLFIXDUAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_BOUNDS", PRESOLVE_BOUNDS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_DUALS", PRESOLVE_DUALS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVE_SENSDUALS", PRESOLVE_SENSDUALS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_NONE", ANTIDEGEN_NONE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_FIXEDVARS", ANTIDEGEN_FIXEDVARS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_COLUMNCHECK", ANTIDEGEN_COLUMNCHECK, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_STALLING", ANTIDEGEN_STALLING, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_NUMFAILURE", ANTIDEGEN_NUMFAILURE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_LOSTFEAS", ANTIDEGEN_LOSTFEAS, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_INFEASIBLE", ANTIDEGEN_INFEASIBLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_DYNAMIC", ANTIDEGEN_DYNAMIC, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_DURINGBB", ANTIDEGEN_DURINGBB, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_RHSPERTURB", ANTIDEGEN_RHSPERTURB, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("ANTIDEGEN_BOUNDFLIP", ANTIDEGEN_BOUNDFLIP, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CRASH_NONE", CRASH_NONE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CRASH_MOSTFEASIBLE", CRASH_MOSTFEASIBLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CRASH_LEASTDEGENERATE", CRASH_LEASTDEGENERATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SIMPLEX_PRIMAL_PRIMAL", SIMPLEX_PRIMAL_PRIMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SIMPLEX_DUAL_PRIMAL", SIMPLEX_DUAL_PRIMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SIMPLEX_PRIMAL_DUAL", SIMPLEX_PRIMAL_DUAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SIMPLEX_DUAL_DUAL", SIMPLEX_DUAL_DUAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_FIRSTSELECT", NODE_FIRSTSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_GAPSELECT", NODE_GAPSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_RANGESELECT", NODE_RANGESELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_FRACTIONSELECT", NODE_FRACTIONSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_PSEUDOCOSTSELECT", NODE_PSEUDOCOSTSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_PSEUDONONINTSELECT", NODE_PSEUDONONINTSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_PSEUDORATIOSELECT", NODE_PSEUDORATIOSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_USERSELECT", NODE_USERSELECT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_WEIGHTREVERSEMODE", NODE_WEIGHTREVERSEMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_BRANCHREVERSEMODE", NODE_BRANCHREVERSEMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_GREEDYMODE", NODE_GREEDYMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_PSEUDOCOSTMODE", NODE_PSEUDOCOSTMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_DEPTHFIRSTMODE", NODE_DEPTHFIRSTMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_RANDOMIZEMODE", NODE_RANDOMIZEMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_GUBMODE", NODE_GUBMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_DYNAMICMODE", NODE_DYNAMICMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_RESTARTMODE", NODE_RESTARTMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_BREADTHFIRSTMODE", NODE_BREADTHFIRSTMODE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_AUTOORDER", NODE_AUTOORDER, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_RCOSTFIXING", NODE_RCOSTFIXING, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NODE_STRONGINIT", NODE_STRONGINIT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NOMEMORY", NOMEMORY, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("OPTIMAL", OPTIMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SUBOPTIMAL", SUBOPTIMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("INFEASIBLE", INFEASIBLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("UNBOUNDED", UNBOUNDED, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("DEGENERATE", DEGENERATE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NUMFAILURE", NUMFAILURE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("USERABORT", USERABORT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("TIMEOUT", TIMEOUT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PRESOLVED", PRESOLVED, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PROCFAIL", PROCFAIL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("PROCBREAK", PROCBREAK, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("FEASFOUND", FEASFOUND, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NOFEASFOUND", NOFEASFOUND, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("BRANCH_CEILING", BRANCH_CEILING, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("BRANCH_FLOOR", BRANCH_FLOOR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("BRANCH_AUTOMATIC", BRANCH_AUTOMATIC, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("BRANCH_DEFAULT", BRANCH_DEFAULT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_PRESOLVE", MSG_PRESOLVE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_LPFEASIBLE", MSG_LPFEASIBLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_LPOPTIMAL", MSG_LPOPTIMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_MILPEQUAL", MSG_MILPEQUAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_MILPFEASIBLE", MSG_MILPFEASIBLE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("MSG_MILPBETTER", MSG_MILPBETTER, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NEUTRAL", NEUTRAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CRITICAL", CRITICAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("SEVERE", SEVERE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("IMPORTANT", IMPORTANT, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("NORMAL", NORMAL, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("DETAILED", DETAILED, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("FULL", FULL, CONST_CS | CONST_PERSISTENT);
    REGISTER_DOUBLE_CONSTANT("Infinite", DEF_INFINITE, CONST_CS | CONST_PERSISTENT);

    return SUCCESS;
}

zend_module_entry phplpsolve55_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
     STANDARD_MODULE_HEADER,
#endif
    strdrivername,
    /* Functions */
    php_phplpsolve55_functions,
    PHP_MINIT(phplpsolve55),
    NULL, /* MSHUTDOWN */
    NULL, /* RINIT */
    NULL, /* RSHUTDOWN */
    NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    driverVERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_PHPLPSOLVE55
ZEND_GET_MODULE(phplpsolve55)
#endif

static char *empty = ""; /* ok to be static */

#define tsrm_ls lpsolvecaller->tsrm_ls

int ErrMsgTxt(structlpsolvecaller *lpsolvecaller, char *str)
{
        php_error_docref(NULL, E_ERROR, "%s", str);
        return(0);
}

zval GetpMatrix(structlpsolvecaller *lpsolvecaller, int element)
{
        zval arg;
        ZVAL_UNDEF(&arg);

        if ((element >= 0) && (element < lpsolvecaller->nrhs)) {
                zval *arg_array = NULL;

                //arg_array = (zval *) malloc(lpsolvecaller->nrhs * sizeof(arg_array));
                arg_array = (zval *)safe_emalloc(sizeof(zval), lpsolvecaller->nrhs, 0);
                if (zend_get_parameters_array_ex(lpsolvecaller->nrhs, arg_array) != FAILURE) {
                    arg = arg_array[element];
                    //printf("--%d: %d--\n", element, Z_TYPE(arg));
                }

                if (arg_array) {
                    efree(arg_array);
                }
        }
        return(arg);
}

int GetString(structlpsolvecaller *lpsolvecaller, pMatrix ppm, int element, char *buf, int size, int ShowError)
{
        int size1;
        zval arg;
        ZVAL_UNDEF(&arg);

        if (ppm != NULL) {
            ErrMsgTxt(lpsolvecaller, "invalid vector.");
        }
        arg = GetpMatrix(lpsolvecaller, element);
        if ((!Z_ISUNDEF(arg)) && (Z_TYPE(arg) != IS_STRING)) {
            ZVAL_UNDEF(&arg);
        }
        if (Z_ISUNDEF(arg)) {
            if (ShowError)
                    ErrMsgTxt(lpsolvecaller, "Expecting a character element");
                return(FALSE);
        }
        size1 = Z_STRLEN(arg);
        if (size1 < size)
                size = size1;
        memcpy(buf, Z_STRVAL(arg), size);
        buf[size] = 0;
        return(TRUE);
}

/* Function to get a real scalar with error checking */

Double GetRealArg(structlpsolvecaller *lpsolvecaller, zval arg)
{
        Double a = 0.0;

        switch (Z_TYPE(arg)) {
        case IS_LONG:
                a = (Double) Z_LVAL(arg);
                break;
        case IS_DOUBLE:
                a = (Double) Z_DVAL(arg);
                break;
        default:
                ErrMsgTxt(lpsolvecaller, "Expecting a scalar value.");
                break;
        }
        return(a);
}

Double GetRealScalar(structlpsolvecaller *lpsolvecaller, int element)
{
        zval arg;
        ZVAL_UNDEF(&arg);
        Double a = 0.0;

        arg = GetpMatrix(lpsolvecaller, element);

        if ((!Z_ISUNDEF(arg)) && (Z_TYPE(arg) != IS_LONG) && (Z_TYPE(arg) != IS_DOUBLE)) {
            ZVAL_UNDEF(&arg);
        }

        if (Z_ISUNDEF(arg)) {
            abort();
            ErrMsgTxt(lpsolvecaller, "Expecting a scalar argument.");
        } else {
                a = GetRealArg(lpsolvecaller, arg);
        }
        return(a);
}

/* This is not the number of elements in the array, but the maximum index number in it.
   This to allow sparse arrays */
int GetM(structlpsolvecaller *lpsolvecaller, zval arg)
{
        int m;
        HashTable *arr_hash;
        zval    *data;
        long i;
        zend_string *key;
        int key_len;

        switch (Z_TYPE(arg)) {
        case IS_LONG:
        case IS_DOUBLE:
                m = 1;
                break;
        case IS_ARRAY:
                arr_hash = Z_ARRVAL(arg);
                /* m = zend_hash_num_elements(arr_hash); */

                m = 0;
                ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) {

                    if (key || (i < 0)) {
                        ErrMsgTxt(lpsolvecaller, "invalid vector.");
                    }
                    if (i + 1 >= m)
                        m = i + 1;
                } ZEND_HASH_FOREACH_END();
                break;
        default:
                m = 0;
                break;
        }
        return(m);
}

int GetN(structlpsolvecaller *lpsolvecaller, zval arg)
{
        int n, n1;
        HashTable *arr_hash;
        zval    *data;
        zend_string *key;
        long i;

        switch (Z_TYPE(arg)) {
        case IS_LONG:
        case IS_DOUBLE:
                n = 1;
                break;
        case IS_ARRAY:
                //n = 1; /* only 1-dim arrays supported at this time */
                arr_hash = Z_ARRVAL(arg);

                n = 0;
                ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) {

                    if (key || (i < 0)) {
                        ErrMsgTxt(lpsolvecaller, "invalid vector.");
                    }
                    n1 = GetM(lpsolvecaller, *data);
                    if (n1 >= n)
                        n = n1;
                } ZEND_HASH_FOREACH_END();
                break;
        default:
                n = 0;
                break;
        }
        return(n);
}

#define GetVector(lpsolvecaller, element, vec, cast, start, len, exactcount, ret) \
{ \
	int	m, n, count = 0; \
        zval    pm, *data; \
        HashTable *arr_hash; \
        zend_string *key; \
        int key_len; \
        ulong i; \
 \
        pm = GetpMatrix(lpsolvecaller, element); \
        if ((Z_ISUNDEF(pm)) || (Z_TYPE(pm) != IS_ARRAY)) \
		ErrMsgTxt(lpsolvecaller, "invalid vector."); \
 \
	m = GetM(lpsolvecaller, pm); \
	n = GetN(lpsolvecaller, pm); \
 \
	if ( !((m == 1) || (n == 1)) || \
             ((m == 1) && (n > len)) || \
             ((n == 1) && (m > len)) ) { \
		ErrMsgTxt(lpsolvecaller, "invalid vector."); \
	} \
 \
        vec += start; \
 \
        memset(vec, 0, len * sizeof(*vec)); \
        arr_hash = Z_ARRVAL(pm); \
        ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) { \
            if (key || (i < 0) || (i >= len)) { \
                ErrMsgTxt(lpsolvecaller, "invalid vector."); \
            } else { \
                vec[i] = (cast) GetRealArg(lpsolvecaller, *data); \
            } \
        } ZEND_HASH_FOREACH_END(); \
 \
        count = len; \
 \
        ret = count; \
}

/* Functions to get len elements from a PHP vector. */

int GetIntVector(structlpsolvecaller *lpsolvecaller, int element, int *vec, int start, int len, int exactcount)
{
        int ret;

        GetVector(lpsolvecaller, element, vec, int, start, len, exactcount, ret)

        return(ret);
}

int GetRealVector(structlpsolvecaller *lpsolvecaller, int element, Double *vec, int start, int len, int exactcount)
{
        int ret;

        GetVector(lpsolvecaller, element, vec, Double, start, len, exactcount, ret)

        return(ret);
}

/* Function to get max len elements from a PHP vector. */

int GetRealSparseVector(structlpsolvecaller *lpsolvecaller, int element, Double *vec, int *index, int start, int len, int col)
{
	int	m, n, count = 0;
        zval    pm = GetpMatrix(lpsolvecaller, element);
        zval    *data;
        HashTable *arr_hash;
        Double a;
        zend_string *key;
        ulong i;

        if ((Z_ISUNDEF(pm)) || (Z_TYPE(pm) != IS_ARRAY)) {
            ErrMsgTxt(lpsolvecaller, "invalid vector.");
        }

#if 1
        m = GetM(lpsolvecaller, pm);
	n = GetN(lpsolvecaller, pm);
#else
        m = zend_hash_num_elements(Z_ARRVAL_P(pm));
        n = 1;
#endif

	if (  ((col == 0) && (((m != 1) && (n != 1)) || ((m == 1) && (n > len)) || ((n == 1) && (m > len)))) ||
              ((col != 0) && ((m > len) || (col > n))) /* ||
	      !IsNumeric(pm) ||
              IsComplex(pm) */ ) {
/* Printf("1: m=%d, n=%d, col=%d, len=%d, IsNumeric=%d, IsComplex=%d\n", m,n,col,len,IsNumeric(pm),IsComplex(pm)); */
		ErrMsgTxt(lpsolvecaller, "invalid vector.");
	}

        if ((((n == 1) || (col != 0)) && (m > len)) || ((col == 0) && (m == 1) && (n > len))) {
/* Printf("2: m=%d, n=%d, col=%d, len=%d\n", m,n,col,len); */
                ErrMsgTxt(lpsolvecaller, "invalid vector.");
        }

        arr_hash = Z_ARRVAL(pm);
        ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) {

            if (key) {
                ErrMsgTxt(lpsolvecaller, "invalid vector.");
            } else {
                zval pm = *data;

                a = 0;

                if (Z_TYPE(pm) == IS_ARRAY) {
                    zval    *data;
                    HashTable *arr_hash;
                    zend_string *key;
                    ulong i;

                    arr_hash = Z_ARRVAL(pm);
                    ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) {

                        if (key) {
                            ErrMsgTxt(lpsolvecaller, "invalid vector.");
                        } else if (i + 1 == col) {
                            a = GetRealArg(lpsolvecaller, *data);
                            break;
                        }
                    } ZEND_HASH_FOREACH_END();
                } else {
                        a = GetRealArg(lpsolvecaller, pm);
                }

                if (a) {
                    *(vec++) = a;
                    *(index++) = start + i;
                    count++;
                }
            }
        } ZEND_HASH_FOREACH_END();

        return(count);
}

void FreeCellCharItems(strArray pa, int len)
{
    int i;

    for (i = 0; i < len; i++)
        if (pa[i] != empty)
            matFree(pa[i]);
    matFree(pa);
}

strArray GetCellCharItems(structlpsolvecaller *lpsolvecaller, int element, int len, int ShowError)
{
        int m;
        rMatrix x_in = GetpMatrix(lpsolvecaller, element);
        zval    *data, arg;
        HashTable *arr_hash;
        char **pa, *str;
        int size1;
        zend_string *key;
        ulong i;

        if ((Z_ISUNDEF(x_in)) || (Z_TYPE(x_in) != IS_ARRAY)) {
                if (ShowError)
                    ErrMsgTxt(lpsolvecaller, "invalid vector.");
                return(NULL);
        }

        m = GetM(lpsolvecaller, x_in);
        if (!(m == len)) {
                if (ShowError)
                        ErrMsgTxt(lpsolvecaller, "invalid vector.");
                return(NULL);
        }

        pa = (char **) matCalloc(len, sizeof(*pa));
        for (i = 0; i < len; i++)
            pa[i] = empty;

        arr_hash = Z_ARRVAL(x_in);
        ZEND_HASH_FOREACH_KEY_VAL(arr_hash, i, key, data) {

            if (key) {
                FreeCellCharItems(pa, len);
                ErrMsgTxt(lpsolvecaller, "invalid vector.");
            } else {
                if ((i < 0) || (i >= len)) {
                    FreeCellCharItems(pa, len);
                    ErrMsgTxt(lpsolvecaller, "invalid vector.");
                }
                arg = *data;
                if ((Z_ISUNDEF(arg)) && (Z_TYPE(arg) != IS_STRING))
                    ZVAL_UNDEF(&arg);
                if (Z_ISUNDEF(arg)) {
                    FreeCellCharItems(pa, len);
                    ErrMsgTxt(lpsolvecaller, "Expecting a character element");
                }
                size1 = Z_STRLEN(arg);
                pa[i] = str = matCalloc(size1 + 1, sizeof(*str));
                memcpy(str, Z_STRVAL(arg), size1);
                str[size1] = 0;
            }
        } ZEND_HASH_FOREACH_END();
        return(pa);
}

void GetCellString(structlpsolvecaller *lpsolvecaller, char **pa, int element, char *buf, int len)
{
        strncpy(buf, pa[element], len);
}

#define CreateMatrix(lpsolvecaller, m, n, element, cast) \
        (cast *) malloc(m * n * sizeof(cast))

#define SetMatrix(lpsolvecaller, mat, m, n, element, freemat, cast, type) \
    if ((lpsolvecaller->nlhs > 0) && (mat != NULL)) { \
        if (element == 1) { \
            zval return_value0; \
            \
            /* copy return_value to return_value0 */ \
            ZVAL_COPY_VALUE(&return_value0, lpsolvecaller->plhs); \
            \
            array_init(lpsolvecaller->plhs); \
            add_next_index_zval(lpsolvecaller->plhs, &return_value0); \
        } \
        if (m * n == 1) { \
            switch (type) { \
                case IS_LONG: \
                    if (element == 0) { \
                        ZVAL_LONG(lpsolvecaller->plhs, *((long *) mat)); \
                    } \
                    else { \
                        add_next_index_long(lpsolvecaller->plhs, *((long *) mat)); \
                    } \
                break; \
                case IS_DOUBLE: \
                    if (element == 0) { \
                        ZVAL_DOUBLE(lpsolvecaller->plhs, *((double *) mat)); \
                    } \
                    else { \
                        add_next_index_double(lpsolvecaller->plhs, *((double *) mat)); \
                    } \
                break; \
                case IS_STRING: \
                    if (element == 0) { \
                        ZVAL_STRING(lpsolvecaller->plhs, *((char **) mat)); \
                    } \
                    else { \
                        add_next_index_string(lpsolvecaller->plhs, *((char **) mat)); \
                    } \
                break; \
            } \
        } \
        else { \
            int len, size, i, j; \
            long *matl0, *matl; \
            double *matd0, *matd; \
            char **mats0, **mats; \
            zval *zp, *z1p; \
            zval z; \
            \
            if (m == 1) { \
                len = m; \
                size = n; \
            } \
            else { \
                len = n; \
                size = m; \
            } \
            if (element == 0) { \
                zp = lpsolvecaller->plhs; \
            } \
            else { \
                zp = &z; \
            } \
            array_init(zp); \
            z1p = zp; \
            matl0 = (long *) mat; \
            matd0 = (double *) mat; \
            mats0 = (char **) mat; \
            for (i = 0; i < size; i++) { \
                matl = matl0++; \
                matd = matd0++; \
                mats = mats0++; \
                if (len != 1) { \
                    array_init(z1p); \
                } \
                for (j = 0; j < len; j++) { \
                    switch (type) { \
                        case IS_LONG: \
                            add_next_index_long(z1p, *matl); \
                            matl += size; \
                        break; \
                        case IS_DOUBLE: \
                            add_next_index_double(z1p, *matd); \
                            matd += size; \
                        break; \
                        case IS_STRING: \
                            add_next_index_string(z1p, *mats); \
                            mats += size; \
                        break; \
                    } \
                } \
                if (len != 1) { \
                    add_next_index_zval(zp, z1p); \
                } \
            } \
            if (element != 0) \
                add_next_index_zval(lpsolvecaller->plhs, zp); \
        } \
        if (freemat) \
            free(mat); \
    }

double *CreateDoubleMatrix(structlpsolvecaller *lpsolvecaller, int m, int n, int element)
{
        return(CreateMatrix(lpsolvecaller, m, n, element, double));
}

double *CreateDoubleSparseMatrix(structlpsolvecaller *lpsolvecaller, int m, int n, int element)
{
        return(CreateDoubleMatrix(lpsolvecaller, m, n, element));
}

void SetDoubleMatrix(structlpsolvecaller *lpsolvecaller, double *mat, int m, int n, int element, int freemat)
{
        SetMatrix(lpsolvecaller, mat, m, n, element, freemat, double, IS_DOUBLE);
}

long *CreateLongMatrix(structlpsolvecaller *lpsolvecaller, int m, int n, int element)
{
        return(CreateMatrix(lpsolvecaller, m, n, element, long));
}

void SetLongMatrix(structlpsolvecaller *lpsolvecaller, long *mat, int m, int n, int element, int freemat)
{
        SetMatrix(lpsolvecaller, mat, m, n, element, freemat, long, IS_LONG);
}

void SetColumnDoubleSparseMatrix(structlpsolvecaller *lpsolvecaller, int element, int m, int n, double *mat, int column, double *arry, int *index, int size, int *nz)
{
        double *sr = mat + (column - 1) * m, a;
        int ii, i, j = -1;

        for (i = 0; (i < size); i++) {
                a = arry[i];
                if (a) {
                        if (index == NULL)
                                ii = i;
                        else
                                ii = index[i] - 1;

                        while (++j < ii)
                                sr[j] = 0.0;

                        sr[ii] = a;
                }
        }

        while (++j < m)
                sr[j] = 0.0;

        *nz += m;
}

void CreateString(structlpsolvecaller *lpsolvecaller, char **str, int m, int element)
{
        SetMatrix(lpsolvecaller, str, m, 1, element, FALSE, char *, IS_STRING);
}
