#include "../../4-array/det/determinant.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double kramer_method(int* matrix, int* vector, int size){
    int size_m = size * size;
    int co = 1;

    if (m(matrix, size_m, co) == 0) return -1;

    if(size == 2){
        int opr = m(matrix, size_m, co);
        int* opr_x_1 = (int*)malloc(sizeof(int)*size_m);
        int* opr_x_2 = (int*)malloc(sizeof(int)*size_m);
        for(int i = 0; i < size_m; i++){
            opr_x_1[i] = matrix[i];
            opr_x_2[i] = matrix[i];
        }
        for (int i = 0; i < size; i++){
            opr_x_1[i*2] = vector[i];
            opr_x_2[i*2 + 1] = vector[i];
        }
        return (double)(m(opr_x_1, size_m, co))/opr + (double)(m(opr_x_2, size_m, co))/opr;
    }
    else{
        int opr = m(matrix, size_m, co);
        int* opr_x_1 = (int*)malloc(sizeof(int)*size_m);
        int* opr_x_2 = (int*)malloc(sizeof(int)*size_m);
        int* opr_x_3 = (int*)malloc(sizeof(int)*size_m);
        for(int i = 0; i < size_m; i++){
            opr_x_1[i] = matrix[i];
            opr_x_2[i] = matrix[i];
            opr_x_3[i] = matrix[i];
        }
        for (int i = 0; i < size; i++){
            opr_x_1[i*size] = vector[i];
            opr_x_2[i*size + 1] = vector[i];
            opr_x_3[i*size + 2] = vector[i];
        }
        return (double)(m(opr_x_1, size_m, co))/opr + (double)(m(opr_x_2, size_m, co))/opr + (double)(m(opr_x_3, size_m, co))/opr;
    }
}
