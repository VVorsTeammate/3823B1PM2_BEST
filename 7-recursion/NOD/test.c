#include "calc_nod.h"
#include "acutest.h"



void test_greatest_common_divisor() {

    TEST_ASSERT(nod(17, 34) == 17);
    TEST_ASSERT(nod(792, 2178) == 198);
    TEST_ASSERT(nod(56, 148) == 4);
    TEST_ASSERT(nod(6729234, 1100230) == 2);
    TEST_ASSERT(nod(-1, 3) == -1);
    TEST_ASSERT(nod(3, -1) == -1);
    TEST_ASSERT(nod(0, 3) == -1);
    TEST_ASSERT(nod(1, 1) == 1);
}

TEST_LIST = {
    {"Find greatest common divisor", test_greatest_common_divisor},
    {NULL, NULL}
};
