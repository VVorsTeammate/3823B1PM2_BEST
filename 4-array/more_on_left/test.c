#include "left_more.h"
#include "acutest.h"


void test_left_more() {
    double test_array1[5] = {1, 2, 3, 4, 5};
    double test_array2[5] = {1, 2, 10, 4, 10};
    double test_array3[5] = {1.000001, 1.000002, 1.000001, 1.000003, 1.00000001};
    double test_array4[] = {9, 8, 7, 6, 5, 4, 4.0000001, 3, 2, 1, 0, -1, -1.0000001};
    double test_array5[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1.0000001, -1.000000};
    double test_array6[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1.0000001, -2.000000, -3};

    TEST_ASSERT(left_more(test_array1, 5) == 4);
    TEST_ASSERT(left_more(test_array2, 5) == 3);
    TEST_ASSERT(left_more(test_array3, 5) == 2);
    TEST_ASSERT(left_more(test_array4, 13) == 1);
    TEST_ASSERT(left_more(test_array5, 12) == 1);
    TEST_ASSERT(left_more(test_array6, 13) == 0);
}

TEST_LIST = {
    {"More on the left", test_left_more},
    {NULL, NULL}
}; 