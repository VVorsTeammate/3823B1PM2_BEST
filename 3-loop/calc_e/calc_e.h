#include <math.h>

unsigned long long calc_e(char order){
 double n = pow(10, order) , x_1, x_2 = 0, n_1 = 1,e = 2.718282, eps = (double)order / 99999999999999999;

    x_1 = (pow((1+ 1.0 / n_1), (n_1)));

    while(fabs(x_1 - x_2) > eps){
            

            n_1+=1;
            x_2 = x_1;
            x_1 = (pow((1 + 1.0 / n_1), (n_1)));
            if ((int)(e * n) == (int)(x_1 * n)){
                x_2=x_1;
            }
    }
    return n_1;
    }