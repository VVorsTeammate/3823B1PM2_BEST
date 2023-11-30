#include <math.h>
#include <string.h>
#include <stdio.h>

struct BornDate {
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Pasport{
    char* name;
    char* surname;
    char gender; //M or F
    struct BornDate bornDate;
    char* country;
};

struct Person
{
    char driver_license;
    struct Pasport pasport;
    char* working_specialty;
};



unsigned char paper_please_game(struct Person* persons, unsigned char size){
    return 0;
}
