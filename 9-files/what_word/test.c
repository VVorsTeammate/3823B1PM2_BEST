#include "find_word.h"
#include "acutest.h"


void test_word_finder() {
    TEST_ASSERT(strcmp(get_word("../../TestingFiles/Task4_1.txt", 13), "that") == 0);
    TEST_ASSERT(strcmp(get_word("../../TestingFiles/Task4_2.txt", 12), "game") == 0);
    TEST_ASSERT(strcmp(get_word("../../TestingFiles/Task4_3.txt", 11), "young") == 0);
}


TEST_LIST = {
    {"Find word", test_word_finder},
    {NULL, NULL}
};
