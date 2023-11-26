#include <math.h>
double sr_ar = 0;
void f_1(double arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] += 1;
    }
}

void f_2(double arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = sqrt(arr[i]);
    }
}

double f_3_1(double arr[], int size){
    for (int i = 0; i < size; i++){
        sr_ar += arr[i];
    }
    sr_ar /= size;
    return sr_ar;
}

void f_3(double arr[], int size, double sr_ar){
    for (int i = 0; i < size; i++){
        arr[i] = pow(fabs(arr[i]), f_3_1(arr, size));
    }
}

void f_4(double arr[], int size){
    for (int i = 0; i < size; i++){
        if((int)arr[i] % 2 == 0){
            arr[i] == 0 - arr[i];
        }
        else{
            arr[i] = 1.0/arr[i];
        }
    }
}

void f_5(double arr[], int size){
    for (int i = 0; i < size; i++){
        if(((int)arr[i] % 2 == 0) && (i % 2 == 0)){
            arr[i] = 0;
        }
    }
}

void f_6(double arr[], int size){
    for (int i = 0; i < size; i++){
        if(i < size/2 + 1){
            arr[i] = 0;
        }
        else arr [i] = 1; 
    }
}

void transform(double* array, int size, int* comands, int comands_count){
    for(int i = 0; i < comands_count; i++){
        if(comands[i] == 1) f_1(array, size);
        else if(comands[i] == 2) f_2(array, size);
        else if(comands[i] == 3) f_3(array, size, f_3_1(array, size));
        else if(comands[i] == 4) f_4(array, size);
        else if(comands[i] == 5) f_5(array, size);
        else if(comands[i] == 6) f_6(array, size);
    }
    return;
}
