#include <math.h>
#include <stdio.h>


int m(int matrix[], int size, int co){
    int o, cnt = 0, co1=1;
    
    int siz = sqrt(size);
    if (sqrt(size) != (int)(sqrt(size)))
        return - 404;
    
    if (siz == 2){
        return (matrix[0]*matrix[3]-matrix[1]*matrix[2]) * co;
    }

    if (siz > 2){

        for(int k = 0; k < siz; k++){
            int rzm = (siz-1) * (siz-1);
            int n[rzm], t=0;
            for(int i = 0; i < siz; i++){
                for(int j = 0; j < siz; j++){
                    if((j != k) && (i * siz + j >= siz)){
                        n[t] = matrix[i * siz + j];
                        t++;
                    }
                }
            }
            if(k%2==0)
                co1=matrix[k];
            else
                co1=(-1)*matrix[k];
            co1*=co;
            cnt+=m(n, rzm , co1);
        }
    }
    return cnt;
}

int determinant(int matrix[], int size){
    int r = 0;
    int co=1;
    r = m(matrix, size, co);
    return r;
}