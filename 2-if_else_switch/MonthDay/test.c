#include "acutest.h"
#include "monthday.h"

void test_monthday() {
    TEST_ASSERT(monthday(4, 2020) == 30);
    TEST_ASSERT(monthday(2, 2020) == 29);
    TEST_ASSERT(monthday(2, 2021) == 28);
    TEST_ASSERT(monthday(7, 1994) == 31);
    TEST_ASSERT(monthday(1, 1994) == 31);
    TEST_ASSERT(monthday(12, 1111) == 31);
    TEST_ASSERT(monthday(9, 999) == 30);
}

TEST_LIST = {
    {"Days in a month", test_monthday},
    {NULL, NULL}
};