#include "maxmin.h"
#include "acutest.h"


void test_maxmin() {
    int test_array1[5] = {10, 8, 10, 8, 10};
    int test_array2[] = {10, 8, 10, 9, 10, 11, 12, 13, -1, 13};
    int test_array3[] = {10, 8, 10, 9, 10, 11, 12, 13, -1, 13, 10};
    int test_array4[] = {10, 11, 10, 9, 10, 11, 12, 13, -1, 13, -1};
    int test_array5[] = {12, 11, 10, 9, 8, 7, 8, 9, 10, 13, 14};
    int test_array6[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1.0000001, -2.000000, -3};

    TEST_ASSERT(maxmin(test_array1, sizeof(test_array1)/sizeof(int)) == 8);
    TEST_ASSERT(maxmin(test_array2, sizeof(test_array2)/sizeof(int)) == 9);
    TEST_ASSERT(maxmin(test_array3, sizeof(test_array3)/sizeof(int)) == 10);
    TEST_ASSERT(maxmin(test_array4, sizeof(test_array4)/sizeof(int)) == 10);
    TEST_ASSERT(maxmin(test_array5, sizeof(test_array5)/sizeof(int)) == 7);
}

TEST_LIST = {
    {"Find maximum of minimums", test_maxmin},
    {NULL, NULL}
}; 