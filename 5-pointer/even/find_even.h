#include <math.h>
#include <stddef.h>

int* find_even(int* arr, int size){
    int* ar = arr;
    for (int i = 0; i < size; i++){
        if (ar[i] % 2 == 0){
            return &ar[i];
        }
    }
    return NULL;
}
