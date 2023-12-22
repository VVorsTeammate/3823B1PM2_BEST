#include <math.h>
#include <stdio.h>

int func(int f, int s){
    s = f % s;
    f = s;
    if (f % s == 0) return s;
    return func(f, s);
}

int nod(int first, int second){
    if ((first < 1) || (second < 1)) return -1;
    if ((int)fmax(first, second) % (int)fmin(first, second) == 0){
        printf("%d \n", second);
        return second;
    }
    printf("%lf \n", fmax(first, second));
    int nod = func(fmax(first, second),fmin(first, second));
    printf("%d ", nod);
    return nod;
}