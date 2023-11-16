#include "str_to_double_convert.h"
#include "acutest.h"


void test_str_to_double_converter() {
    double eps = 1e-5;
    TEST_ASSERT(fabs(convert("888.887") - 888.887) < eps);
    TEST_ASSERT(fabs(convert("-0.5") - (-0.5)) < eps);
    TEST_ASSERT(fabs(convert("1.0") - 1.0) < eps);
    TEST_ASSERT(fabs(convert("10.001") - 10.001) < eps);
    TEST_ASSERT(fabs(convert("81457340213.88923142113") - 81457340213.88923142113) < 1e-8);
}



TEST_LIST = {
    {"Testing string to double converter", test_str_to_double_converter},
    {NULL, NULL}
};
