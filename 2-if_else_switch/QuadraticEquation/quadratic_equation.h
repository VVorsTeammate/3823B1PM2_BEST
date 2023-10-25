int QuadraticEquation(double a, double b, double c){
    int x_1, x_2, Re, D, I_m1, I_m2;
    D = b * b - 4 * a * c;
    if (D >= 0){
    x_1 = ((0 - b) + sqrt(D)) / (2 * a);
    x_2 = ((0 - b) - sqrt(D))/(2 * a);
    return x_1 + x_2;
    }
    else {
        I_m1 = (sqrt(D * (-1))) / (2 * a);
        I_m2 = ((-1) * sqrt(D * (-1))) / (2 * a);
        Re = ((-1) * b) / (2 * a);
        return Re + I_m1 + Re + I_m2;
    }
    if (((x_1 + x_2) - (int)(x_2 + x_1)) < 0.5)
        return x_1 + x_2;
    else
        return (int)(x_1 + x_2) + 1;
}