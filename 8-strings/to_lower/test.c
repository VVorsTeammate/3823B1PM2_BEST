#include "lower_converter.h"
#include "acutest.h"


void test_str_to_lower() {
    char str1[] = "Hello World";
    char str2[] = "LOL OLOLO";
    char str3[] = "";
    char str4[] = "Main funcTion crZ";

    lower(str1);
    TEST_ASSERT(strcmp(str1, "hello world") == 0);
    lower(str2);
    TEST_ASSERT(strcmp(str2, "lol ololo") == 0);
    lower(str3);
    TEST_ASSERT(strcmp(str3, "") == 0);
    lower(str4);
    TEST_ASSERT(strcmp(str4, "main function crz") == 0);
}



TEST_LIST = {
    {"Testing to lower case", test_str_to_lower},
    {NULL, NULL}
};
