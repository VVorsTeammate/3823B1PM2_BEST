#include "double_to_str_convert.h"
#include "acutest.h"


void test_double_to_str_converter() {
    double eps = 1e-5;
    TEST_ASSERT(strcmp(convert(888.887), "888.887") == 0);
    TEST_ASSERT(strcmp(convert(-10.1), "-10.1") == 0);
    TEST_ASSERT(strcmp(convert(101.101), "101.101") == 0);
    TEST_ASSERT(strcmp(convert(3000000000.10000000001), "3000000000.10000000001") == 0);
    TEST_ASSERT(strcmp(convert(-10.0), "10.0") != 0);
}



TEST_LIST = {
    {"Testing double to string converter", test_double_to_str_converter},
    {NULL, NULL}
};
