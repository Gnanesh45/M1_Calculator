#include "unity.h"
#include "fun.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(50, addition(15, 35));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(7500, addition(3750, 3750));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-20, subtraction(10, 30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(500, subtraction(1500, 1000));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiplication(5, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(60, multiplication(12, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, division(20, 2));
}
