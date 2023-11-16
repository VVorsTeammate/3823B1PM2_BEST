#include "delete.h"
#include "acutest.h"


void test_delete_symbol() {
    char str1[] = "Hello world";
    char str2[] = "fffffff";
    char str3[] = "";
    char str4[] = "Main function crz";

    DelSymbol1(str1, 'l');
    TEST_ASSERT(strcmp(str1, "Heo word") == 0);
    DelSymbol1(str2, 'f');
    TEST_ASSERT(strcmp(str2, "") == 0);
    DelSymbol1(str3, 'f');
    TEST_ASSERT(strcmp(str3, "") == 0);
    DelSymbol1(str4, 'z');
    TEST_ASSERT(strcmp(str4, "Main function cr") == 0);
}

TEST_LIST = {
    {"Testing delete symbol", test_delete_symbol},
    {NULL, NULL}
};
