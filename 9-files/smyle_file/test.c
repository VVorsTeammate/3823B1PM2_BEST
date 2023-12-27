#include "smile_writer.h"
#include "acutest.h"
#include <sys/stat.h>
#include <sys/types.h>

int correct_smile(char filename[]){
    return 0;
}

void test_write_smile() {
    struct stat st; 
    char* filename = "base1.txt";
    
    write_smile("base1.txt", "smile, uh...oh, ouch");
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 15);

    filename = "base2.txt";
    
    write_smile("base2.txt", "happy, happier, sad, bored");
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 22);

    filename = "base3.txt";
    stat(filename, &st);
    write_smile("base3.txt", "serious, wink");
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 10);

    filename = "base4.txt";
    
    write_smile("base4.txt", "i messed it up");
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 6);

    filename = "base5.txt";
    
    write_smile("base5.txt", "jealous, happier, i messed it up, i love it");
    stat(filename, &st);
    TEST_ASSERT(st.st_size == 25);
}



TEST_LIST = {
    {"Create smile in file", test_write_smile},
    {NULL, NULL}
};
