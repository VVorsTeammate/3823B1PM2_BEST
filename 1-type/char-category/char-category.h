#include <stdbool.h>


bool is_digit(char x) {
    if ((x > 47) && (x < 58)){
        return true;
    }
    else{
        return false;
    }
}

bool is_letter(char x) {
    if (((x > 64) && (x < 91)) || ((x > 96) && (x < 123)))
        return true;
    else
        return false;
}

bool is_punctuation(char x) {
    if (((x > 32) && (x < 48)) || ((x > 57) && (x < 65)) || ((x > 90) && (x < 97)) || ((x > 122) && (x < 127)))
        return true;
    else
        return false;
}

int get_ascii_code(char first, char second, char third) {
    int f = first, s = second, t = third;
    s = f * 1000000 + s * 1000 + t;
    return s;
}

