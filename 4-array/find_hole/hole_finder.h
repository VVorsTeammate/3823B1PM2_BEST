#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int rez = 0;
    int min = 999999;
    int t = 0;
    for (int i = 1; i < width - 1; i++){
        for (int j = 1; j < length - 1; j++){
            t = matrix[i * width + j];
            if ((matrix[i * width + j - 1] > t) && (matrix[i * width + j + 1] > t) && (matrix[(i - 1) * width + j] > t) 
            && (matrix[(i - 1) * width + j - 1] > t) && (matrix[(i - 1) * width + j + 1] > t) && (matrix[(i + 1) * width + j] > t) 
            && (matrix[(i + 1) * width + j - 1] > t) && (matrix[(i + 1) * width + j + 1] > t) && (min > t)){
                min = t;
                rez = i * 100 + j;
                }
        }
    }
    return rez;
}