#include "acutest.h"
#include "module.h"


void test_module() {
    (void)(int (*)(int, int, int))(get_module);
    TEST_ASSERT(get_module(1, 1, 1) == 0);
    TEST_ASSERT(get_module(3, 3, 5) == 4);
    TEST_ASSERT(get_module(10, 1, 5) == 0);
    TEST_ASSERT(get_module(132, 453, 32) == 20);
    TEST_ASSERT(get_module(1453, 7543, 75) == 4);
    TEST_ASSERT(get_module(33, 777, 55) == 11);
    TEST_ASSERT(get_module(5555, 234, 44) == 22);
    TEST_ASSERT(get_module(555775, 234324, 66) == 0);
    TEST_ASSERT(get_module(652450, 32344, 543) == 310);
    TEST_ASSERT(get_module(3, 111, 4) == 1);
}

TEST_LIST = {
    {"module", test_module},
    {NULL, NULL}
};