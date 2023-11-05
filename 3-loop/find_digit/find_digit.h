#include <math.h>
#include <stdio.h>

char find_digit(double number, char digit){
    int k=1;
    double n = number;
    while((long)n >= 1.0 ){
        n/=10;
    }
    for (int i=0; i < 16; i++){
        k+=1;
        n*=10;
        if (((int)n)%10 == (int)digit){
            printf("%d \n", k);
            return k;
        }
    }
    printf("\n -1 \n");
    return -1;
}