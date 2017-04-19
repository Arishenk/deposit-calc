#include <stdio.h>

#include "../thirdparty/ctest.h"
#include "../src/deposit.c"

CTEST(check, check_test)
{
    int a = 0;
    int b = 10001;
    int expected = 1;
    int result = check(a, b);
    ASSERT_EQUAL(expected, result);
}

CTEST(check2, check_test2)
{
    int a = 366;
    int b = 10001;
    int expected = 0;
    int result = check(a, b);
    ASSERT_EQUAL(expected, result);
}

CTEST(check3, check_test3)
{
    int a = 1;
    int b = 9999;
    int expected = 0;
    int result = check(a, b);
    ASSERT_EQUAL(expected, result);
}
