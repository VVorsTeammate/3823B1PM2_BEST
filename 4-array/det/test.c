#include "determinant.h"
#include "acutest.h"


void test_determinant() {
    int matrix1[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    int matrix2[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 1};
    int matrix3[4] = {1, 0, 0, 1};
    int matrix4[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrix5[16] = {1, 1, 1, 1, 0, 2, 6, 7, 9, 8, 7, 5, -5, 7, 3, 2};
    int matrix6[25] = {1, 0, 0, 0, 0, 5, 5, 5, 5, 5, -1, -1, -2, -1, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1};
    
    TEST_ASSERT(determinant(matrix1, sizeof(matrix1)/sizeof(int)) == 1);
    TEST_ASSERT(determinant(matrix2, sizeof(matrix2)/sizeof(int)) == -404);
    TEST_ASSERT(determinant(matrix3, sizeof(matrix3)/sizeof(int)) == 1);
    TEST_ASSERT(determinant(matrix4, sizeof(matrix4)/sizeof(int)) == 0);
    TEST_ASSERT(determinant(matrix5, sizeof(matrix5)/sizeof(int)) == -98);
    TEST_ASSERT(determinant(matrix6, sizeof(matrix6)/sizeof(int)) == -5);
}

TEST_LIST = {
    {"Matrix determinant", test_determinant},
    {NULL, NULL}
};