#include <math.h>
#include <stdio.h>

int calc_percent(int matrix[], int size){
    int max, min, r, pr = 0, k = 0;
    max = matrix[0];
    min = matrix[0];
    for(int i = 1; i < size;i++){
        if (max <= matrix[i]){
            max = matrix[i];
        }
        if (min >= matrix[i]){
            min = matrix[i];
        }
    }

    r = (max - min) / 2;

    for(int i = 0; i < size;i++){
        if(matrix[i] > r){
            k += 1;
        }
    }
    pr = ((double)k / size) * 100;
    printf("%d", pr);
    return pr;
}