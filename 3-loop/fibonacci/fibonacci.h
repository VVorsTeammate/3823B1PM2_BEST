long fib(int m){
    int f, f_0 = 0, f_1 = 1, s = 0;
    if (m > 0){
        for(f=0; f <= m; f = f_1 + f_0){
            f_0 = f_1;
            f_1 = f;
            s+=f;
        }
        return s;
    }
    else
        return -1;
}