#include <math.h>

int f(int* array, int size, int* f_array, int f_size){
    int flag = 0;
    int a;
    int i = 0;
    while(i < f_size){
        int j = 0;
        while(j < size){
            if(f_array[i] == array[j]){
                flag += 1;
                a=j;
                i++;
                j++;
            }
            else{
                flag = 0;
                i = 0;
                j++;
            }
            if (flag == f_size) return a + 1 - f_size;
            if(j == size) return -1;
        }
    }
    return -1;
}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int index_1 = 0, index_2 = 0, index_3 = 0;
    index_1 = f(array, array_size, subarray1, subarray_size1);
    index_2 = f(array, array_size, subarray2, subarray_size2);
    index_3 = f(array, array_size, subarray3, subarray_size3);

    return index_1 + index_2 + index_3;
}