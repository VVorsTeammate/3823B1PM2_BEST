#include <stdio.h>

unsigned char max_byte(unsigned short number) {
    unsigned char b_1, b_2, b_3, b_4;
    b_1 = (unsigned char)(number>>8);
    b_2 = (unsigned char)(number);
    unsigned char max = b_1;
    unsigned char arr[] = {b_1, b_2};
    for(int i = 1; i < 2; i++){
        if(max <= arr[i]) max = arr[i];
    }
    return max;
}