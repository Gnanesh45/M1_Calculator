#include "unity.h" //Framework
#include "fun.h"

#define PROJECT_NAME    "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

void setUp(){}

void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  return UNITY_END();
}

void test_add(void) {
  TEST_ASSERT_EQUAL(50, addition(15, 35));
  
  TEST_ASSERT_EQUAL(7500, addition(3750, 3750));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-20, subtraction(10, 30));
  
  TEST_ASSERT_EQUAL(500, subtraction(1500, 1000));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiplication(5, 0));
 
  TEST_ASSERT_EQUAL(60, multiplication(12, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));

  TEST_ASSERT_EQUAL(10, division(20, 2));
}
