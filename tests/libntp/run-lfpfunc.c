/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_AdditionLR();
extern void test_AdditionRL();
extern void test_SubtractionLR();
extern void test_SubtractionRL();
extern void test_Negation();
extern void test_Absolute();
extern void test_FDF_RoundTrip();
extern void test_SignedRelOps();
extern void test_UnsignedRelOps();


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}

char *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  Unity.TestFile = "lfpfunc.c";
  UnityBegin("lfpfunc.c");
  RUN_TEST(test_AdditionLR, 315);
  RUN_TEST(test_AdditionRL, 333);
  RUN_TEST(test_SubtractionLR, 351);
  RUN_TEST(test_SubtractionRL, 365);
  RUN_TEST(test_Negation, 382);
  RUN_TEST(test_Absolute, 401);
  RUN_TEST(test_FDF_RoundTrip, 432);
  RUN_TEST(test_SignedRelOps, 463);
  RUN_TEST(test_UnsignedRelOps, 506);

  return (UnityEnd());
}