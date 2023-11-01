#include "find_digit.h"
#include "acutest.h"


void test_find_digit() {
    TEST_ASSERT(find_digit(8800.555353518, 3) == 9);
    TEST_ASSERT(find_digit(1111.101010993, 10) == -1);
    TEST_ASSERT(find_digit(1.23457880, 3) == 4);
    TEST_ASSERT(find_digit(9.99111, 1) == 5);
    TEST_ASSERT(find_digit(18335, -1) == -1);
    TEST_ASSERT(find_digit(11335593925544, 2) == 10);
}

TEST_LIST = {
    {"Find digit", test_find_digit},
    {NULL, NULL}
};