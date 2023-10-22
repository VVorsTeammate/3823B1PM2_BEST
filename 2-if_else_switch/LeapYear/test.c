#include "acutest.h"
#include "leap_year.h"

void test_LeapYear() {
    TEST_ASSERT(LeapYear(1) == 0);
    TEST_ASSERT(LeapYear(1764) == 1);
    TEST_ASSERT(LeapYear(1768) == 1);
    TEST_ASSERT(LeapYear(1769) == 0);
    TEST_ASSERT(LeapYear(2000) == 1);
    TEST_ASSERT(LeapYear(2003) == 0);
    TEST_ASSERT(LeapYear(400) == 1);
}

TEST_LIST = {
    {"Leap_year", test_LeapYear},
    {NULL, NULL}
};