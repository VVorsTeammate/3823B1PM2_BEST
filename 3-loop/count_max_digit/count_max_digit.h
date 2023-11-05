#include <math.h>

char count_max_digit(long long int1){
    int max = 0;
    int k=0;
    for(long long i = fabs(int1); i>0; i/=10){
        if (max<i%10)
        max = i%10;
    }
    for(long long i = fabs(int1); i>0; i/=10){
        if (i%10 == max)
        k+=1;
    }
    return k;
}