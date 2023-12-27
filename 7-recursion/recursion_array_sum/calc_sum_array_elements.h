#include <math.h>

int func(int* array, int size){
    if(size == 0) return array[0];
    return array[size] + func(array, size - 1);
}

double calc_sum_elements(int* array, int array_size){
    if(array_size < 1) return -1;
    else return func(array, array_size - 1);
}