#include "acutest.h"
#include "numinvers.h"


void test_num_invers() {
    TEST_ASSERT(num_invers(1) == 1);
    TEST_ASSERT(num_invers(12) == 21);
    TEST_ASSERT(num_invers(123) == 321);
    TEST_ASSERT(num_invers(-123) == 0);
    TEST_ASSERT(num_invers(0) == 0);
    TEST_ASSERT(num_invers(1000) == 1);
    TEST_ASSERT(num_invers(1234567890) == 987654321);
}

TEST_LIST= {
    {"Flip the number", test_num_invers},
    {NULL, NULL}
};