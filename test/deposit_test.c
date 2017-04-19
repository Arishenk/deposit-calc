#include "../thirdparty/ctest.h"
#include "../src/deposit.h"
#include <stdio.h>
#include <stdlib.h>

CTEST(percent1, percent_test1)
{
    int b = 1;
    int a = 10000;
    int expected = a - a*0.1 ;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent2, percent_test2)
{
    int b = 30;
    int a = 10000;
    int expected = a - a*0.1 ;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent3, percent_test3)
{
    int b = 120;
    int a = 100000;
    int expected = a + a*0.02 ;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent4, percent_test4)
{
    int b = 120;
    int a = 100001;
    int expected = a + a*0.03;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent5, percent_test5)
{
    int b = 121;
    int a = 100000;
    int expected = a + a*0.06;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent6, percent_test6)
{
    int b = 121;
    int a = 100001;
    int expected = a + a*0.08;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent7, percent_test7)
{
    int b = 241;
    int a = 100001;
    int expected = a + a*0.15;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(percent8, percent_test8)
{
    int b = 241;
    int a = 100000;
    int expected = a + a*0.12;
    int result = percent(b,a);
    ASSERT_EQUAL(expected, result);
}



