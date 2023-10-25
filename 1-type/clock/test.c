#include "clock.h"
#include "acutest.h"


void test_clock() {
    TEST_ASSERT(get_time(0) == 0);
    TEST_ASSERT(get_time(90) == 15);
    TEST_ASSERT(get_time(810) == 215);
    TEST_ASSERT(get_time(5400) == 1500);
}

TEST_LIST = {
    {"Define time", test_clock},
    {NULL, NULL}
};