#include <math.h>

double limit(double eps, int n_max){
    double x_n, x_1, x_2 = 0, n_1 = 1;
    if (n_max>1){

        x_1 = n_1 / sqrt((pow(n_1, 2) + n_1));

        while(fabs(x_1 - x_2) > eps){
            if (n_1 <= n_max){
            
            n_1+=1;
            x_2 = x_1;
            x_1 = n_1 / sqrt((pow(n_1, 2) + n_1));

            }
            else
                x_1 = x_2;
        }
        return x_1;
    }
    else
        x_n = n_max / sqrt((pow(n_max, 2) + n_max));
        return x_n;
} 
