#include "find_series_sum.h"
#include "acutest.h"



void test_series_sum_new() {
    double eps = 1e-5;

    TEST_ASSERT(fabs(find_sum_elements_series(10) - 4.0280533509700174) < eps);
    TEST_ASSERT(fabs(find_sum_elements_series(100) - 6.4851267662388059) < eps);
    TEST_ASSERT(fabs(find_sum_elements_series(1000) - 8.8013715091646390) < eps);
    TEST_ASSERT(fabs(find_sum_elements_series(0)) < eps);
    TEST_ASSERT(fabs(find_sum_elements_series(-1) + 1) < eps);
}

TEST_LIST = {
    {"Calc sum series elements", test_series_sum_new},
    {NULL, NULL}
};
