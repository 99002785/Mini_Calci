#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "function"

/* Prototypes for all the test functions */
void test_add(int,int);
void test_subtract(int,int);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_factorial(int) {
  CU_ASSERT(30 == add(10,20));
  CU_ASSERT(40 == add(8,32));
  CU_ASSERT(6 == add(3,3));
  CU_ASSERT(5040 == add(2520,2520));
  CU_ASSERT(720 == add(360,360));

  /* Dummy fail*/
  CU_ASSERT(100 == add(95,5));
}

void test_prime(int) {
  CU_ASSERT(100 == subtract(200,100));
  CU_ASSERT(20 == subtract(60,40));
  CU_ASSERT(44 == subtract(100,56));
  CU_ASSERT(45 == subtract(50,5));

  /* Dummy fail*/
  CU_ASSERT(0 == subtract(6,6));
}
