#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double F_l, F_r;
    F_l=(a/3) * right * right * right + (b/2) * right * right + c* right;
    F_r=(a/3) * left * left * left + (b/2) * left * left + c* left;
    if(F_l - F_r < 0)
        return -1;
    else
        return F_l - F_r;
}