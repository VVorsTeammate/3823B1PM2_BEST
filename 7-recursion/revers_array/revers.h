#include <math.h>
void magic(int* array, int size, int size_2){
    if (size_2 == 0){
        int temp_1 = array[size - size_2 - 1], temp_2 = array[size_2];
        array[size_2] = temp_1;
        array[size - size_2 - 1] = temp_2;
    }
    else {
        int temp_1 = array[size - size_2 - 1], temp_2 = array[size_2];
        array[size_2] = temp_1;
        array[size - size_2 - 1] = temp_2;
        return magic(array, size, size_2 - 1);
    }
}

void reverse_array(int* array, int array_size){
    if(array_size > 1)  return magic(array, array_size, array_size / 2 - 1);
}