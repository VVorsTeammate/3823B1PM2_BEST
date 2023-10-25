#include "byte.h"
#include "acutest.h"


void test_byte() {
    TEST_ASSERT(max_byte(65535) == 255);
    TEST_ASSERT(max_byte(10000) == 39);
    TEST_ASSERT(max_byte(20) == 20);
    TEST_ASSERT(max_byte(32832) == 128);
}

TEST_LIST = {
    {"Byte test", test_byte},
    {NULL, NULL}
};