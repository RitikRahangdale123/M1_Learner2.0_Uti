/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007-19 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#ifndef UNITY_FRAMEWORK_H
#define UNITY_FRAMEWORK_H
#define UNITY

#define UNITY_VERSION_MAJOR    2
#define UNITY_VERSION_MINOR    5
#define UNITY_VERSION_BUILD    1
#define UNITY_VERSION          ((UNITY_VERSION_MAJOR << 16) | (UNITY_VERSION_MINOR << 8) | UNITY_VERSION_BUILD)

#ifdef __cplusplus
extern "C"
{
#endif

#include "unity_internals.h"

/*-------------------------------------------------------
 * Test Setup / Teardown
 *-------------------------------------------------------*/

/* These functions are intended to be called before and after each test.
 * If using unity directly, these will need to be provided for each test
 * executable built. If you are using the test runner generator and/or
 * Ceedling, these are optional. */
void setUp(void);
void tearDown(void);

/* These functions are intended to be called at the beginning and end of an
 * entire test suite.  suiteTearDown() is passed the number of tests that
 * failed, and its return value becomes the exit code of main(). If using
 * Unity directly, you're in charge of calling these if they are desired.
 * If using Ceedling or the test runner generator, these will be called
 * automatically if they exist. */
void suiteSetUp(void);
int suiteTearDown(int num_failures);

/*-------------------------------------------------------
 * Test Reset and Verify
 *-------------------------------------------------------*/

/* These functions are intended to be called before during tests in order
 * to support complex test loops, etc. Both are NOT built into Unity. Instead
 * the test runner generator will create them. resetTest will run teardown and
 * setup again, verifying any end-of-test needs between. verifyTest will only
 * run the verification. */
void resetTest(void);
void verifyTest(void);

/*-------------------------------------------------------
 * Configuration Options
 *-------------------------------------------------------
 * All options described below should be passed as a compiler flag to all files using Unity. If you must add #defines, place them BEFORE the #include above.
 * Integers/longs/pointers
 *     - Unity attempts to automatically discover your integer sizes
 *       - define UNITY_EXCLUDE_STDINT_H to stop attempting to look in <stdint.h>
 *       - define UNITY_EXCLUDE_LIMITS_H to stop attempting to look in <limits.h>
 *     - If you cannot use the automatic methods above, you can force Unity by using these options:
 *       - define UNITY_SUPPORT_64
 *       - set UNITY_INT_WIDTH
 *       - set UNITY_LONG_WIDTH
 *       - set UNITY_POINTER_WIDTH
 * Floats
 *     - define UNITY_EXCLUDE_FLOAT to disallow floating point comparisons
 *     - define UNITY_FLOAT_PRECISION to specify the precision to use when doing TEST_ASSERT_EQUAL_FLOAT
 *     - define UNITY_FLOAT_TYPE to specify doubles instead of single precision floats
 *     - define UNITY_INCLUDE_DOUBLE to allow double floating point comparisons
 *     - define UNITY_EXCLUDE_DOUBLE to disallow double floating point comparisons (default)
 *     - define UNITY_DOUBLE_PRECISION to specify the precision to use when doing TEST_ASSERT_EQUAL_DOUBLE
 *     - define UNITY_DOUBLE_TYPE to specify something other than double
 *     - define UNITY_EXCLUDE_FLOAT_PRINT to trim binary size, won't print floating point values in errors
 * Output
 *     - by default, Unity prints to standard out with putchar.  define UNITY_OUTPUT_CHAR(a) with a different function if desired
 *     - define UNITY_DIFFERENTIATE_FINAL_FAIL to print FAILED (vs. FAIL) at test end summary - for automated search for failure
 * Optimization
 *     - by default, line numbers are stored in unsigned shorts.  Define UNITY_LINE_TYPE with a different type if your files are huge
 *     - by default, test and failure counters are unsigned shorts.  Define UNITY_COUNTER_TYPE with a different type if you want to save space or have more than 65535 Tests.
 * Test Cases
 *     - define UNITY_SUPPORT_TEST_CASES to include the TEST_CASE macro, though really it's mostly about the runner generator script
 * Parameterized Tests
 *     - you'll want to create a define of TEST_CASE(...) which basically evaluates to nothing
 * Tests with Arguments
 *     - you'll want to define UNITY_USE_COMMAND_LINE_ARGS if you have the test runner passing arguments to Unity
 *-------------------------------------------------------
 * Basic Fail and Ignore
 *-------------------------------------------------------*/