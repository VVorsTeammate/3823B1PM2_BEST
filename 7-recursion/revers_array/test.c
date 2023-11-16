#include "revers.h"
#include "acutest.h"

int compare_arrays(int* target, int* result, int size){
    for (int i=0; i < size; i++){
        if (target[i] != result[i])
            return 0;
    }
    return 1;
}

void test_sum_array_elements() {
    int arr1[] = {};
    int res1[] = {};
    int arr2[] = {1};
    int res2[] = {1};
    int arr3[] = {1, 2, 3};
    int res3[] = {3, 2, 1};
    int arr4[] = {4, 10, 3, 9, 10, 1, 0, 1, 5, 9, 7, 7, 7, 7, 10, 0, 1, 7, 7, 2, 3, 6, 10, 2, 9, 1, 7, 5, 4, 1, 1, 5, 8, 3, 5, 7, 6, 4, 3, 3, 2, 0, 5, 3, 8, 1, 5, 0, 5, 4, 7, 4, 0, 7, 1, 5, 4, 2, 4, 5, 2, 3, 4, 0, 7, 10, 10, 7, 7, 3, 8, 2, 8, 3, 0, 5, 8, 1, 8, 10, 2, 4, 6, 3, 7, 3, 5, 0, 1, 1, 0, 10, 10, 4, 1, 1, 8, 6, 0, 2};
    int res4[] = {2, 0, 6, 8, 1, 1, 4, 10, 10, 0, 1, 1, 0, 5, 3, 7, 3, 6, 4, 2, 10, 8, 1, 8, 5, 0, 3, 8, 2, 8, 3, 7, 7, 10, 10, 7, 0, 4, 3, 2, 5, 4, 2, 4, 5, 1, 7, 0, 4, 7, 4, 5, 0, 5, 1, 8, 3, 5, 0, 2, 3, 3, 4, 6, 7, 5, 3, 8, 5, 1, 1, 4, 5, 7, 1, 9, 2, 10, 6, 3, 2, 7, 7, 1, 0, 10, 7, 7, 7, 7, 9, 5, 1, 0, 1, 10, 9, 3, 10, 4};
    int arr5[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int arr6[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int res6[] = {1, 2, 3, 4, 6, 4, 3, 2, 1};
    
    reverse_array(arr1, 0);
    TEST_ASSERT(compare_arrays(arr1, res1, 0) == 1);
    reverse_array(arr2, 1);
    TEST_ASSERT(compare_arrays(arr2, res2, 1) == 1);
    reverse_array(arr3, 3);
    TEST_ASSERT(compare_arrays(arr3, res3, 3) == 1);
    reverse_array(arr4, 100);
    TEST_ASSERT(compare_arrays(arr4, res4, 100) == 1);
    reverse_array(arr5, 9);
    TEST_ASSERT(compare_arrays(arr5, arr5, 9) == 1);
    reverse_array(arr6, 9);
    TEST_ASSERT(compare_arrays(arr6, res6, 9) == 0);

}



TEST_LIST = {
    {"Calc arrays elements sum", test_sum_array_elements},
    {NULL, NULL}
};
