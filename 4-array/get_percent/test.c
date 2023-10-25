#include "calc_percent.h"
#include "acutest.h"


void test_percent() {
    int matrix1[] = {1, 2, 3, 4, 10, 15, -1, 4, 8, 11};
    int matrix2[] = {9, 10, 1, 8, 17, 16, 11, 16, 18, 17, 7, 10, 4, -5, 9, -9, 11, -7, 19, 7};
    int matrix3[] = {92, 5, 13, 42, 9, -13, 39, 7, 24, 29, -6, 5, 46, 11, 10, 6, 26, 4, 2, 57, 82, -8, 37, 96, 35, 40, 24, -9, 31, 12, 79, 81, 10, 77, -14, 80, 3, 57, 69, -16, -9, 5, 19, 74, 65, 21, 9, 62, -11, -10, 66, -17, 71, 93, 18, 96, 21, 52, 89, -16, 65, -8, 36, 58, 49, -19, 60, -17, 46, 39, 17, 14, 62, 11, -5, -11, 76, 69, 98, 93, 0, 14, 33, 40, 2, 16, 94, 14, -17, 27, 5, -8, 85, 69, 79, 21, 68, 1, 54, 81};
    int matrix4[] = {-100, 100};
    int matrix5[] = {0, 61, 60, 57, 56, 57, 56, 53, 52, 51, 60, 53, 52, 55, 58, 56, 54, 59, 60, 54, 54, 53, 53, 50, 54, 59, 59, 52, 55, 54, 59, 59, 50, 60, 58, 59, 53, 51, 54, 53, 56, 53, 60, 56, 56, 58, 52, 51, 60, 57, 54, 57, 54, 56, 59, 55, 57, 54, 56, 50, 50, 50, 58, 55, 51, 54, 56, 51, 55, 56, 56, 56, 60, 53, 55, 53, 59, 57, 60, 52, 56, 55, 54, 57, 53, 50, 58, 51, 58, 56, 53, 60, 54, 54, 59, 53, 50, 56, 58, 57, 57, 60};


    TEST_ASSERT(calc_percent(matrix1, sizeof(matrix1)/sizeof(int)) < 35);
    TEST_ASSERT(calc_percent(matrix2, sizeof(matrix2)/sizeof(int)) < 31);
    TEST_ASSERT(calc_percent(matrix3, sizeof(matrix3)/sizeof(int)) < 40);
    TEST_ASSERT(calc_percent(matrix4, sizeof(matrix4)/sizeof(int)) < 1);
    TEST_ASSERT(calc_percent(matrix5, sizeof(matrix5)/sizeof(int)) > 98);
}

TEST_LIST = {
    {"Percent find", test_percent},
    {NULL, NULL}
};