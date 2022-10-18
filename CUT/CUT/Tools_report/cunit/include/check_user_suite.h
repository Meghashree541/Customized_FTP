#ifndef CHECK_USER_SUITE_H_
#define CHECK_USER_SUITE_H_

#include "CUnit/Basic.h"
#include "check_user.h"

 
int init_suite_result(void);

int clean_suite_result(void);

void testSunnyCases(void);

void testRainyCases(void);

#endif  /* FILE_SUITE_H_ */
