unsigned char max_byte(unsigned short number) {
    int dv, dv_2, n=number;
        dv=n&4+n&3*10+n&2*100+n&1*1000;
        dv_2=n&8+n&7*10+n&6*100+n&5*1000;
        if (dv > dv_2)
            return (unsigned char)dv;
        else
            return (unsigned char)dv_2;
}