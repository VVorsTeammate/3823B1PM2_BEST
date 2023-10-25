#include "little_big_convert.h"
#include "acutest.h"


void test_converter() {
    TEST_ASSERT(little_big_convert(3) == 3);
    TEST_ASSERT(little_big_convert(123456) == 4252161);
    TEST_ASSERT(little_big_convert(100000000) == 14808325);
    TEST_ASSERT(little_big_convert(256) == 1);
    TEST_ASSERT(little_big_convert(255) == 255);
    TEST_ASSERT(little_big_convert(4294967295) == 4294967295);
}

TEST_LIST = {
    {"Little_Big... endian", test_converter},
    {NULL, NULL}
};