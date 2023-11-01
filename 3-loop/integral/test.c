#include "integral.h"
#include "acutest.h"


void test_integral() {
    TEST_ASSERT(fabs(integral(1, 1, 0, -2, 1) - 1.5) < 0.01);
    TEST_ASSERT(fabs(integral(1, 1, 1, -1, 1) - 2.66666) < 0.01);
    TEST_ASSERT(fabs(integral(-1, 1, 0, 0, 1) - 0.166666) < 0.00001);
    TEST_ASSERT(fabs(integral(1, 1, 0, -1, 0)) - 1 < 0.00001);
}

TEST_LIST = {
    {"Integral", test_integral},
    {NULL, NULL}
};