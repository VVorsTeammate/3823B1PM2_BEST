#include "subarray_finder.h"
#include "acutest.h"



void test_subarray() {
    int array1[] = {18, 8, 25, 11, 25, 11, 26, 29, 22, 26, 29, 10, 12, 0, 6, 17, 30, 28, 9, 28, 20, 6, 19, 19, 10, 16, 29, 7, 11, 21, 12, 19, 21, 11, 18, 28, 23, 8, 3, 15, 8, 26, 8, 23, 9, 16, 13, 20, 0, 11, 12, 3};


    int subarray1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int subarray2[] = {9, 28, 20, 6, 19};
    int subarray3[] = {25, 11};
    int subarray4[] = {11, 21, 12, 19, 21, 11};
    int subarray5[] = {26, 8, 23, 9, 16, 13, 20, 0, 11, 12, 3, 14, 15, 17};

    TEST_ASSERT(find_subarray(array1, sizeof(array1)/sizeof(int), array1, sizeof(array1)/sizeof(int), array1, sizeof(array1)/sizeof(int), array1, sizeof(array1)/sizeof(int)) == 0);
    TEST_ASSERT(find_subarray(array1, sizeof(array1)/sizeof(int), subarray1, sizeof(subarray1)/sizeof(int), subarray2, sizeof(subarray2)/sizeof(int), subarray3, sizeof(subarray3)/sizeof(int)) == 19);
    TEST_ASSERT(find_subarray(array1, sizeof(array1)/sizeof(int), subarray4, sizeof(subarray4)/sizeof(int), subarray3, sizeof(subarray3)/sizeof(int), subarray5, sizeof(subarray5)/sizeof(int)) == 29);

}

TEST_LIST = {
    {"Find subarray", test_subarray},
    {NULL, NULL}
};
