#include "tree.h"
#include "acutest.h"
#include <sys/stat.h>
#include <sys/types.h>


void test_cristmas() {
    struct stat st; 

    char* filename = tree_writer(8);
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 119);
    filename = tree_writer(3);
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 24);
    filename = tree_writer(7);
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 94);
    filename = tree_writer(5);
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 53);
    filename = tree_writer(4);
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 37);
}



TEST_LIST = {
    {"Build tree", test_cristmas},
    {NULL, NULL}
};
