#include "smile_writer.h"
#include "acutest.h"

int correct_smile(char filename[]){
    return 0;
}

void test_write_smile() {

    write_smile("base.txt", "smile, uh...oh, ouch");
    TEST_ASSERT(correct_smile("base.txt") == 1);
    ///asd

}



TEST_LIST = {
    {"Create smile in file", test_write_smile},
    {NULL, NULL}
};
