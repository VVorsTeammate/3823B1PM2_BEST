#include <math.h>
#include <stdio.h>

int func(int f, int s){
    int a = s;
    s = f % s;
    f = a;
    if (f % s == 0) return s;
    else return func(f, s);
}

int nod(int first, int second){

    if ((first < 1) || (second < 1)) return -1;

    if ((int)fmax(first, second) % (int)fmin(first, second) == 0) return (int)fmin(first, second);

    int nod = func((int)fmax(first, second), (int)fmin(first, second));

    printf("\n%d ", nod);

    return nod;
}