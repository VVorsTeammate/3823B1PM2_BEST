#include "sum_series_terms.h"
#include "acutest.h"



void test_series_sum() {
    double eps = 1e-5;

    TEST_ASSERT(fabs(sum_series(10) - 2.9289682539682538) < eps);
    TEST_ASSERT(fabs(sum_series(0) - (-1.0)) < eps);
    TEST_ASSERT(fabs(sum_series(-1) - (-1.0)) < eps);
    TEST_ASSERT(fabs(sum_series(100) - 5.1873775176396206) < eps);
    TEST_ASSERT(fabs(sum_series(pow(2, 30)) - 21.371631082166218) < eps);
}

TEST_LIST = {
    {"Calc series", test_series_sum},
    {NULL, NULL}
};
