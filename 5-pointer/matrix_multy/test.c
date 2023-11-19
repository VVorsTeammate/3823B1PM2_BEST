#include "matrix.h"
#include "acutest.h"

int compare(int* first, int* sec, int row, int col);

void test_matrix_multy() {
    int left_mat_1[] = { 1, 1, 1, 1};
    int right_mat_1[] = { 2, 2, 2, 2};
    int res_mat_1[] = { 4, 4, 4, 4};

    int left_mat_2[] = { 1, 2, 3, 3, 2, 1};
    int right_mat_2[] = { 1, 3, 2, 2, 3, 1};
    int res_mat_2[] = { 14, 10, 10, 14};

    int left_mat_3[] = { 1, 0, 0, 0, 
                         0, 1, 0, 0,
                         0, 0, 1, 0,
                         0, 0, 0, 1};
    int right_mat_3[] = { 1, 4, 0, 1, 
                         2, 3, 0, 1,
                         3, 2, 0, 1,
                         4, 1, 0, 1};
    int res_mat_3[] = { 1, 4, 0, 1, 
                         2, 3, 0, 1,
                         3, 2, 0, 1,
                         4, 1, 0, 1};


    
    int left_mat_4[] = { 1, 2, 3, 4, 5, 6};
    int right_mat_4[] = { 1, 1, 1, 1, 1, 1};
    int res_mat_4[] = { 21 };


    TEST_ASSERT(compare(matrix_multy(left_mat_1, 2, 2, right_mat_1, 2, 2), res_mat_1, 2, 2) == 1);
    TEST_ASSERT(compare(matrix_multy(left_mat_2, 2, 3, right_mat_2, 3, 2), res_mat_2, 2, 2) == 1);
    TEST_ASSERT(compare(matrix_multy(right_mat_2, 3, 2, right_mat_2, 3, 2), res_mat_2, 2, 2) == 0);
    TEST_ASSERT(compare(matrix_multy(left_mat_4, 1, 6, right_mat_4, 6, 1), res_mat_4, 1, 1) == 1);
}


TEST_LIST = {
    {"Matrix multiplication", test_matrix_multy},
    {NULL, NULL}
};






























































































































































































































int compare(int* first, int* sec, int row, int col) {
    if (first == NULL) return 0;
    int size = row * col;
    for (int i=0; i < size; i++){
        if (first[i] != sec[i])
            return 0;
    }
    return 1;
}
