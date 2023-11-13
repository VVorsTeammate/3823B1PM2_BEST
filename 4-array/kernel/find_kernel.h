#include <math.h>
#include <stdlib.h>

int number(int arr_1[], int arr_2[], int a1, int b1, int a2, int b2,int a3, int b3, int index){
    int k = 0;
    for (int i = 0; i < b2; i ++){
        for (int j = 0; j < a2; j ++){
            k += arr_1[(i + (index / a3)) * a1 + j + (index % a3)] * arr_2[i * b2 + j];
        }
    }
    return k;
}

int find_matrix_kernel(int matrix[], int kernel[], int matrix_row, int matrix_col, int kernel_row, int kernel_col){
    int length_1 = matrix_col, height_1 = matrix_row, length_2 = kernel_col, height_2 = kernel_row, raz_l = length_1 - length_2;
    int raz_h = height_1 - height_2, n_raz = (raz_l + 1) * (raz_h + 1), flag = 1;
    
    int* matrix_1 = matrix;
    while (flag){
        int length_3 = raz_l + 1;
        int height_3 = raz_h + 1;
        int* arr = (int*)malloc(sizeof(int) * n_raz);
        for (int i = 0; i < height_3; i++){
            for (int j = 0; j < length_3; j++){
                int index = i * length_3 + j; 
                arr[index] = number(matrix_1, kernel, length_1, height_1, length_2, height_2, length_3, height_3, index);
            }
            
        }
        length_1 = length_3;
        height_1 = height_3;
        raz_l = length_1 - length_2;
        raz_h = height_1 - height_2;
        matrix_1 = arr;
        if (((raz_l + 1) >= 0) && ((raz_h + 1) >= 0)) 
            n_raz = (raz_l + 1) * (raz_h + 1);
        else 
            flag = 0;
    }
    int rez = 0;
    for (int k = 0; k < n_raz; k++){
        rez += matrix_1[k];
    }
    return rez;
}