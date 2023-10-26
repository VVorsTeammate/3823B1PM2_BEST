#include "find_bin_pattern.h"
#include "acutest.h"


void test_find_bin_pattern() {
    TEST_ASSERT(find_bin_pattern(1) == 0);
    TEST_ASSERT(find_bin_pattern(85) == 3);
    TEST_ASSERT(find_bin_pattern(20) == 1);
    TEST_ASSERT(find_bin_pattern(111) == 1);
    TEST_ASSERT(find_bin_pattern(1111) == 2);
    TEST_ASSERT(find_bin_pattern(18572) == 0);
    TEST_ASSERT(find_bin_pattern(23405) == 5);
}

TEST_LIST = {
    {"Find count of binary pattern", test_find_bin_pattern},
    {NULL, NULL}
};