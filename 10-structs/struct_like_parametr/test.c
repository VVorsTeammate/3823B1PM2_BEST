#include "avg_age.h"
#include "acutest.h"


void test_persons_structs() {
    double eps = 0.0001;

    Person persons1[] = {{"Denis", "Karchkov", {29, 7, 1994}}};
    TEST_ASSERT(fabs(calc_avg_age(persons1, 1) - 29.0) < eps);

    Person persons2[] = {
        {"Denis", "Karchkov", {29, 7, 1994}},
        {"Andrey", "Ivanov", {6, 8, 1995}},
        {"Sergei", "Shishka", {29, 10, 1993}},
        {"Luck", "Muck", {11, 11, 2011}},
        {"Kalaka", "Malaka", {15, 12, 1945}},
    };
    TEST_ASSERT(fabs(calc_avg_age(persons1, 15) - 35.2) < eps);

    Person persons3[] = {
        {"Denis", "Karchkov", {29, 7, 1994}},
        {"Andrey", "Ivanov", {6, 8, 1995}},
        {"Sergei", "Shishka", {29, 10, 1993}},
        {"Luck", "Muck", {11, 11, 2011}},
        {"Kalaka", "Malaka", {15, 12, 1945}},
        {"Rad", "Prison", {5, 7, 1966}},
        {"Strange", "Doctor", {30, 11, 1966}}, 
        {"Sday", "Zadachi", {29, 11, 1991}}, 
        {"Denis2", "Karchkov2", {29, 7, 1994}} 
    };
    TEST_ASSERT(fabs(calc_avg_age(persons1, 9) - 38.88888889) < eps);
}


TEST_LIST = {
    {"Avarage age", test_persons_structs},
    {NULL, NULL}
};
