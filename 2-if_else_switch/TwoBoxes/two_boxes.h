int twoboxes(double x1, double y1, double z1, double x2, double y2, double z2){ 
    if (((x1 < x2) && (y1 < y2) && (z1 < z2)) && (x1 * y1 * z1 > 0) || ((x1 > x2) && (y1 > y2) && (z1 > z2)) && (x2 * y2 * z2 > 0))
        return 1;
    else return 0;
}