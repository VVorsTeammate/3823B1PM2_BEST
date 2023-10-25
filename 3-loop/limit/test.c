#include "limit.h"
#include "acutest.h"


void test_limit() {
    TEST_ASSERT(fabs(limit(0.1, 1) - 0.707107) < 0.00001);
    TEST_ASSERT(fabs(limit(0.01, 23) - 0.935414) < 0.00001);
    TEST_ASSERT(fabs(limit(0.0000001, 1000) - 0.9995) < 0.00001);
    TEST_ASSERT(fabs(limit(0.5, 1000000) - 0.816497) < 0.00001);
}

TEST_LIST = {
    {"Limit", test_limit},
    {NULL, NULL}
};