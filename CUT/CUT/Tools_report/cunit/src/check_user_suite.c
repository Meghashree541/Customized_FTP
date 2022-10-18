#include "CUnit/Basic.h"
#include "../include/check_user.h"

int init_suite_result(void)
{
	return 0;
}

int clean_suite_result(void)
{
	return 0;
}
/**
 * checks all the pass cases
*/
void testSunnyCases(void)
{
	CU_ASSERT_EQUAL(check_user("user","pass"),1);
	CU_ASSERT_EQUAL(check_user("test","testpass"),1);
	CU_ASSERT_EQUAL(check_user("anonymous",""),1);
}

/**
 * checks all the fail cases
 */
void testRainyCases(void)
{
	CU_ASSERT_EQUAL(check_user("Transporthhhhh","asdf"),0);
	CU_ASSERT_EQUAL(check_user("Capgemini","valid"),0);
	CU_ASSERT_EQUAL(check_user("testCase",""),0);
}
