int chess_rook(char a, int b, char c, int d){
    int b_1 = a, num_1 = b, b_2 = c, num_2 = d;
    if ((b_1 <= 64) || (b_1 >= 73) || (b_2 <= 64) || (b_2 >= 73) || (num_1 >= 9) || (num_2 >= 9))
        return 0;
    if ((b_1 == b_2) && (num_1 == num_2))
        return 0;
    if (b_1 == b_2)
        return 1;
    if (num_1 == num_2)
        return 1;
    else
        return 0;
}