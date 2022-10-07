#include "CUnit/CUnit.h"
#include "../header/test.h"
#include "../header/testsuite.h"

 int main()
 {
     CU_pSuite pSuite = NULL;
     /* The active CUnit test registry must be initialized
     before use. The user should call CU_initialize_registry()
     before calling any other CUnit functions. Failure to do
     so will likely result in a crash. */
     /* initialize the CUnit test registry */
     if(CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();
    
    pSuite = CU_add_suite("Suite valid or invalid", init_suite_func, clean_suite_func);
    if (NULL == pSuite)
    {
        /* CU_cleanup_registry() is used to clean up and release
        memory used by the framework */
        CU_cleanup_registry();
        return CU_get_error();
    }
    /* Adding tests to the suite */
    /* CU_add_test() macro automatically generates a unique test name based
    on the test function name, and adds it to the specified suite.  */
     if ((NULL == CU_add_test(pSuite,
                             "test of valid() in normal cases", testSunnyCases)) ||
        (NULL == CU_add_test(pSuite,
                             "test of invalid() in error cases", testRainyCases)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }
     /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
 }
