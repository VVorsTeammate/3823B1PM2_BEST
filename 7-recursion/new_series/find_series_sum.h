#include <math.h>
#include <stdio.h>

double func(int k){
    if(k == 0) return 0.0;
    return (func(k-1) + 1.0)/k;
}
double find_sum_elements_series(int k){
    double s = 0.0;
    if (k < 0) return -1;
    k -=1;
    while(k >= 0){
        s += func(k);
        k -= 1;
    }
    printf("%lf", s);
    return s;
}