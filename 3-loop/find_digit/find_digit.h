#include <math.h>
#include <stdio.h>

char find_digit(double number, char digit){
    int k=0;
    double n = number;
    while((long long)n >= 1.0 ){
        n/=10;
    }
    if(fabs(number - (double)((long long int)number)) > 0.0001){
        for (int i=0; i < 16; i++){
            k+=1;
            n*=10;
            if (((int)n)%10 == (int)digit){
                printf("%d 1 \n", k+1);
                return k+1;
            }
        }
    }
    else 
        for (int i=0; i < 16; i++){
            k+=1;
            n*=10;
            if (((int)n)%10 == (int)digit){
                printf("%d 2 \n", k);
                return k;
            }
        }
    printf("-1");
    return -1;
}