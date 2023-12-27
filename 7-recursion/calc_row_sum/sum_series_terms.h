#include <math.h>
#include <stdio.h>
double func(int n, int k){
    if (k == 1) return 1.0;

    else if (n + 1 == k) return 1.0 / k;

    else return 1.0 / k + func(n, k - 1);
}

double sum_series(int n){
    if(n < 1) return -1.0;
    double s = 0.0;

    if (n > 10000){
        int k = 1;
        while(k < n/10000){
            s += func((k-1) * 10000, k * 10000);
            k++;
        }
    s += func(n / 10000 * 10000, n);
    }
    
    else s += func(0, n);
    return s;
}