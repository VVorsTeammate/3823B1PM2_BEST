#include <math.h>

char find_bin_pattern(int number){

int f = 0, r = 1, a = 0, b = 0, c=0;

    for(int i = number; i > 0; i/=2){
        f=i;
        if ((f%2) == 1){ 
            f=f/2;
            if ((f%2) == 0){
                f=f/2;
                if((f%2) == 1){
                    c+=1;
                }
            }
        }
    }
    return c;
}