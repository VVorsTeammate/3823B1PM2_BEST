char left_more(double input[], unsigned int size){
    int k = 0;
    for (int i = 1; i < size; i ++){
        if (input[i] > input[i - 1])
            k ++;
    }
    return k;
}