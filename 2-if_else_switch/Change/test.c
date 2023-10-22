#include "acutest.h"
#include "change.h"

void test_change() {
    
    TEST_ASSERT(change(10, 10, 11, 10) == 100);
    TEST_ASSERT(change(11, 10, 10, 10) == -1);
    TEST_ASSERT(change(11, 10, 11, 10) == 0);
    TEST_ASSERT(change(15, 99, 115, 99) == 10000);
    TEST_ASSERT(change(100, 0, 1000000000, 0) == 99999990000);
    TEST_ASSERT(change(10, 0, 9, 99) == -1);
    TEST_ASSERT(change(9, 99, 10, 0) == 1);
}

TEST_LIST = {
    {"Change", test_change},
    {NULL, NULL}
};