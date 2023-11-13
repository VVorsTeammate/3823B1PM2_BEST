#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt){
    for (int i = 0; i < num_points; i++){
        if (sqrt(pow(fabs(xs[i] - xt), 2) + pow(fabs(ys[i] - yt), 2)) <= area_radius)
            return 1;
        }
    
    for (int i = 1; i < num_points; i++){
        for (int k = 1; k < i; k++){
            int raz_x = fabs(xs[i] - xs[i - k]);
            int raz_y = fabs(ys[i] - ys[i - k]);
            
            if (raz_x == 0){
                for (int j = 1; j < raz_y; j++){
                    int new_yt = fmin(ys[i], ys[i - k]) + j;
                    int new_xt = xs[i];
                    if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                }
            }
            if (raz_y == 0){
                for (int j = 1; j < raz_y; j++){
                    int new_yt = ys[i];
                    int new_xt = fmin(xs[i], xs[i - k]) + j;
                    if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                }
            }
            if ((raz_x != 0) && (raz_y != 0))
                for (int j = 1; j < raz_x; j++){
                    if ((xs[i] < xs[i - k]) && (ys[i] < ys[i - k])){
                        int new_yt = ys[i] + j;
                        int new_xt = xs[i] + j;
                        if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] > xs[i - k]) && (ys[i] < ys[i - k])){
                        int new_yt = ys[i] + j;
                        int new_xt = xs[i] - j;
                        if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] < xs[i - k]) && (ys[i] > ys[i - k])){
                        int new_yt = ys[i] - j;
                        int new_xt = xs[i] + j;
                        if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                        }
                    if ((xs[i] > xs[i - k]) && (ys[i] > ys[i - k])){
                        int new_yt = ys[i] - j;
                        int new_xt = xs[i] - j;
                        if (sqrt(pow(fabs(new_xt - xt), 2) + pow(fabs(new_yt - yt), 2)) <= area_radius)
                        return 1;
                        }
                }
        }
    }
    return 0;
}