#include <math.h>
long long calc_row(int n, long long k){
    long long s = 0;
    for(int i = 0; i <= n; i++){
        s+=i*k;
        if(fabs(s) > fabs(s + (i+1)*k) ){
            return 0;
        }
    }
    return s;
}