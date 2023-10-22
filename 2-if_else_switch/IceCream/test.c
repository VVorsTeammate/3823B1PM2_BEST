#include "acutest.h"
#include "icecream.h"

void test_iceream() {
    TEST_ASSERT(icecream(0) == 0);
    TEST_ASSERT(icecream(1) == 0);
    TEST_ASSERT(icecream(4) == 0);
    TEST_ASSERT(icecream(8) == 1);
    TEST_ASSERT(icecream(9) == 1);
    TEST_ASSERT(icecream(20) == 1);
    TEST_ASSERT(icecream(1000000) == 1);
}

TEST_LIST = {
    {"Iceream", test_iceream},
    {NULL, NULL}
};