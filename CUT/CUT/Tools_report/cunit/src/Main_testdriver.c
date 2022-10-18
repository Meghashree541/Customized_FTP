#include "CUnit/Basic.h"
#include "../include/check_user.h"
#include "../include/check_user_suite.h"

int main()
{
	CU_pSuite pSuite1 = NULL;
	/* initialize the CUnit test registry */

	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();


	pSuite1 = CU_add_suite("Suite Check_user file", init_suite_result, clean_suite_result);


	if (NULL == pSuite1)
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	/* Add the tests to the suite */

	if ((NULL == CU_add_test(pSuite1,"test of check_user() in Sunny cases", testSunnyCases)) ||(NULL == CU_add_test(pSuite1,"test of check_user() in Rainy cases", testRainyCases)))
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
