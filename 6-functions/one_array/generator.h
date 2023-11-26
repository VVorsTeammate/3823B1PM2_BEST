#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int sum(int* arr, int size){
    int s = 0;
    for (int i = 0; i < size; i++){
        s += arr[i];
    }
    return s;
}

int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 50;
    int* array = (int*)malloc(*real_size * sizeof(int));
    int max = f, min = 0;
    int s = max + min;
    array[0] = max;
    array[1] = min;
    for (int i = 2; i < *real_size; i++){
        array[i] = 2;
    }
    if(sum(array, 50) <= m){
        for(int i = 2; i < *real_size; i++){
            if (sum(array, *real_size) < m+10){
                printf("%d\n", sum(array, 50));
                array[i] *=10;
            }
        }

    }
    if(sum(array, 50) >= k){
        for(int i = 2; i < *real_size; i++){
            if (sum(array, *real_size) > k-10){
                printf("%d\n", sum(array, 50));
                array[i] /=5;
            }
        }
    }
    for(int i = 0; i < *real_size; i++){
        printf("%d | ", array[i]);
    }
    printf("%d sum \n", sum(array, *real_size));
    printf("%d mod ", (int)fabs(max-min));
    return array;
}
