#include "../unity/unity.h"
#include "../inc/calculator_operations.h"
#include "../src/fundamental_operations.c"
#include "../unity/unity_internals.h"



/* Prototypes for all the test functions */
void test_add(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}
 
void test_add(void) {
 static operands all = {20, 10};
  TEST_ASSERT_EQUAL(30, add(&all));
 all.operand1=50;
 all.operand2=60;
  TEST_ASSERT_EQUAL(110, add(&all));
 /* TEST_ASSERT_EQUAL(15000, add(7500, 7500));

  TEST_ASSERT_EQUAL(4, add(7,-3));

  TEST_ASSERT_EQUAL(-10, add(-7,-3));

  TEST_ASSERT_EQUAL(-1, add(2147483647,2147483647));  */
}