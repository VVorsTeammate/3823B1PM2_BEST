#include "acutest.h"
#include "chocolate.h"

void test_chocolate() {
    TEST_ASSERT(chocolate(10, 5 , 1) == 0);
    TEST_ASSERT(chocolate(5, 5 , 25) == 1);
    TEST_ASSERT(chocolate(0, 0, 1) == 0);
    TEST_ASSERT(chocolate(1, 1, 1) == 1);
    TEST_ASSERT(chocolate(7, 5, 21) == 1);
    TEST_ASSERT(chocolate(-5, -5, 25) == 0);
    TEST_ASSERT(chocolate(9, 9, 50) == 0);
}

TEST_LIST = {
    {"Chocolate", test_chocolate},
    {NULL, NULL}
};