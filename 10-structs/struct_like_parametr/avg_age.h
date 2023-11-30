#include <math.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    unsigned char day;
    unsigned char month;
    unsigned int year;
} BornDate;

typedef struct 
{
    char name[10];
    char surname[20];
    BornDate borndate;
} Person;



double calc_avg_age(Person* persons, int num_persons){
    return 0.0;
}
