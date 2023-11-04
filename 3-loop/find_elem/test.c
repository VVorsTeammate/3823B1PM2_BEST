#include "find_elem.h"
#include "acutest.h"


void test_find_number() {
    TEST_ASSERT(find_elem(1, 12, 4, 5) == 9);
    TEST_ASSERT(find_elem(0, 100, 5, 5) == 20);
    TEST_ASSERT(find_elem(0, 1000, 500, 1) == 500);
    TEST_ASSERT(find_elem(0, 1000, 333, 11) == 3330);
    TEST_ASSERT(find_elem(0, 10000, 9999, 15) == 129987);
}

TEST_LIST = {
    {"Fast find number", test_find_number},
    {NULL, NULL}
};