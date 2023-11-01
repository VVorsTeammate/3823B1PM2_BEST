#include "max_min_finder.h"
#include "acutest.h"


void test_max_min_finder() {
    int array1[] = {13, 19, 34, 8, 11, 0, 45, 14, 25, 2, 5, 34, 13, 36, 27, 5, 32, 23, 12, 40, 35, 27, 12, 4, 38, 23, 22, 13, 35, 25, 24, 23, 37, 39, 19, 33, 14, 35, 9, 15, 19, 9, 3, 13, 26, 14, 38, 20, 33, 40, 22};
    int array2[] = {-1, 0, 1, -1, -1, -1, -1, 1, -1, -1, -1, 1, 0, 0, 1, 1, 1, 1, 0, 1, -1, -1, -1, -1, 1, 0, -1, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 1, 0, 0, -1, 0, 1, 1, -1, 0, -1, 1, -1};
    int array3[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int _max = 1000, _min = -1000;
    get_max_min(array1, sizeof(array1)/sizeof(int), &_max, &_min);
    TEST_ASSERT(_max == 45 && _min == 0);

    get_max_min(array2, sizeof(array2)/sizeof(int), &_max, &_min);
    TEST_ASSERT(_max == 1 && _min == -1);

    get_max_min(array3, sizeof(array3)/sizeof(int), &_max, &_min);
    TEST_ASSERT(_max == 10 && _min == 10);
}


TEST_LIST = {
    {"Find max and min value in array", test_max_min_finder},
    {NULL, NULL}
};