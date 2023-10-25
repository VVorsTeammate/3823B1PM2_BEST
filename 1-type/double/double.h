bool compare_double(double x, double y) {
    if((float)x == (float)y){
    return true;
    }
    else
    return false;
}

int get_nearest_int(double x) {
    if (x-(int)x < 0.5)
        return (int)x;
    else
        return (int)x+1;
}

double get_fractional(double x) {
    return x - floor(x);
}
