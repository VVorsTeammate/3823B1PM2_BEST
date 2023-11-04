int num_invers(int num){
int n, n_0, a = 0, r=1, z=0;

    for(n_0 = num; n_0 > 0; n_0/=10){
        z+=1;
    }
    for(n = num; n > 0; n/=10){
        int f = 1;
        for(int i=z-1; i>0; i--){
            f*=10;
        }
        a+=(n%10)*f;
        r*=10;
        z-=1;
    }
    return a;
}