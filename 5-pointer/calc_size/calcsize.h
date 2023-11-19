#include <math.h>

int calcsize(void* memory){
    int i = 0, k, cc = 2;
    char* arr = memory;

    while (cc != 0){ 
        if (arr[i] == 11){
            cc = 1;
            k = i;
        }
        else if (arr[i] == 47){
            return i + (i - k);
        }
        else cc = 2;
        i++;
    }
}
