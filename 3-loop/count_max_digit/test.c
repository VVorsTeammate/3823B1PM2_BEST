#include "count_max_digit.h"
#include "acutest.h"


void test_count_max_digit() {
    TEST_ASSERT(count_max_digit(100000) == 1);
    TEST_ASSERT(count_max_digit(9999999) == 7);
    TEST_ASSERT(count_max_digit(123456790321) == 1);
    TEST_ASSERT(count_max_digit(-9859721) == 2);
    TEST_ASSERT(count_max_digit(11991191991) == 5);
    TEST_ASSERT(count_max_digit(911111111119) == 2);
}

TEST_LIST = {
    {"Find count max digit", test_count_max_digit},
    {NULL, NULL}
};