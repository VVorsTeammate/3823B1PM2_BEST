int reverse(int number) {
    int res = 0;
    int k = 1000;
    while(number > 0){
        res += number%10*k;
        k/=10;
        number /= 10;
    }
    return res;
}

double decomposition(int number) {
    int ed = number%10, des = number%100 - number%10, sot = number%1000 - number%100, tis = number - number%1000;
    double res;
    res = (4.0)/(1.0/ed + 1.0/des + 1.0/sot + 1.0/tis);
    return res;
}

int append(int number, int start, int end) {
    int res = 0;
    if (start > 0){
        res = start*100000 + number*10 + end;
    }
    else{
        res = start*100000 - number*10 - end;
    }
    return res;
}
