#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8) return 0;
    unsigned long long* a = (unsigned long long*) arr;
    return *a;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char b = (unsigned char)(input >> 32);
    return b;
}