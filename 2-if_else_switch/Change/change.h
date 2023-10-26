long long change(int a, int b, int c, int d){
    long long int cena, dali, v_otvet;
    cena = a * 100 + b;
    dali  = (long long int)c * 100 + d;
    v_otvet = dali - cena;
    if (v_otvet < 0)
        return -1;
    else 
        return v_otvet;
}