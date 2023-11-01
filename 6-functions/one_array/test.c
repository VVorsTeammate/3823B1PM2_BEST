#include <stdbool.h>
#include "generator.h"
#include "acutest.h"


bool check_function(int* arr, int size, int K, int M, int F);

void test_array_generator() {
    int size = -1;

    int* a1 = array_generator(&size, 100, 10, 50);
    TEST_ASSERT(check_function(a1, size, 100, 10, 50));
    free(a1);
    int* a2 = array_generator(&size, 1000, 100, 100);
    TEST_ASSERT(check_function(a2, size, 1000, 100, 100));
    free(a2);
    int* a3 = array_generator(&size, 0, 0, 0);
    TEST_ASSERT(check_function(a3, size, 0, 0, 0));
    free(a3);
    int* a4 = array_generator(&size, 1000, 0, 100);
    TEST_ASSERT(check_function(a4, size, 1000, 0, 100));
    free(a4);
}


TEST_LIST = {
    {"Array generate", test_array_generator},
    {NULL, NULL}
};























































































































































































































































































































bool check_function(int* arr, int size, int K, int M, int F){
    int max = arr[0], min = arr[0], sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    for (int i = 1; i < size; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    return (sum <= K && sum >= M && abs(max-min) == F);
}