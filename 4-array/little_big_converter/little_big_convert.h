#include <math.h>
#include <stdio.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char b_1 = (unsigned char)(input >> 24);
    unsigned char b_2 = (unsigned char)(input >> 16);
    unsigned char b_3 = (unsigned char)(input >> 8);
    unsigned char b_4 = (unsigned char)input;
    return b_4*256*256*256 + b_3*256*256 + b_2*256 + b_1;
}