#include "find_kernel.h"
#include "acutest.h"


void test_find_matrix_kernel() {
    int matrix1[] = {0, 0, 0, 0, 1, 0, 0, 0, 0};
    int kernel1[] = {0, 0, 0, 0, 1, 0, 0, 0, 0};

    int matrix2[] = {1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1,
                     1, 1, 2, 1, 1,
                     1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1,
                    };
    
    int matrix3[] = {1, 1, 1, 1,
                    1, 1, 1, 1,
                    1, 1, 1, 1,
                    };
    
    int matrix4[] = {   1, 2, 3, 5, 2, 1, 7, 10, 18, 
                        1, 1, 1, 1, 10, 18, 18, 0, 1,
                        3, 5, 7, 11, 13, 7, 0, 1, 3,
                        4, 8, 1, 3, 13, 15, 11, 10, 5,
                        7, 1, 4, 6, 7, 8, 10, 12, 1
                    };
    int kernel2[] = {0, 1, 0, 1, 1, 1, 0, 1, 0};


    TEST_ASSERT(find_matrix_kernel(matrix1, kernel1, sizeof(matrix1)/sizeof(int), sizeof(kernel1)/sizeof(int)) == 1);
    TEST_ASSERT(find_matrix_kernel(matrix2, kernel1, sizeof(matrix2)/sizeof(int), sizeof(kernel1)/sizeof(int)) == 2);
    TEST_ASSERT(find_matrix_kernel(matrix3, kernel1, sizeof(matrix3)/sizeof(int), sizeof(kernel1)/sizeof(int)) == 2);
    TEST_ASSERT(find_matrix_kernel(matrix4, kernel2, sizeof(matrix4)/sizeof(int), sizeof(kernel2)/sizeof(int)) == 978);


}

TEST_LIST = {
    {"Find kernel", test_find_matrix_kernel},
    {NULL, NULL}
}; 