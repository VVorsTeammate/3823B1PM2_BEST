#include <math.h>
#include <stddef.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int* arr = (int*)malloc(aM * bM * sizeof(int));
    
    if (aN != bM) return NULL;
    
    for (int i = 0; i < aM * bN; i++) arr[i] = 0;

    for (int j = 0; j < aM * bN; j++){
        for (int i = 0; i < aN; i++){
            arr[j] += A[aN * (j / aM) + i] * B[i * bN + (j % bN)];
        }
    }
    return arr;
}
