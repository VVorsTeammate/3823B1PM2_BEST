#include "error_finder.h"
#include "acutest.h"

int correct_smile(char filename[]){
    return 0;
}

void test_is_not_python() {
    TEST_ASSERT(find_error("../../TestingFiles/Task5_1.txt") == 1);
    TEST_ASSERT(find_error("../../TestingFiles/Task5_2.txt") == 0);
    TEST_ASSERT(find_error("../../TestingFiles/Task5_3.txt") == 0);
    TEST_ASSERT(find_error("../../TestingFiles/Task5_4.txt") == 1);
    TEST_ASSERT(find_error("../../TestingFiles/Task5_5.txt") == 1);
}



TEST_LIST = {
    {"Find error in c code", test_is_not_python},
    {NULL, NULL}
};
