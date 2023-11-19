#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double a_1 = 0.0, ab = 0.0, b_1 = 0.0, q = 0, pi = 3.14159;
    for (int i = 0; i < size; i++){
        a_1 += vec1[i] * vec1[i];
        b_1 += vec2[i] * vec2[i];
        ab += vec1[i] * vec2[i];
    }
    q = sqrt(a_1*b_1);
    return (int)(acos(ab/(q)) / pi * 180);
}
