#include "acutest.h"
#include "calc_row.h"


void test_calc_row() {
    TEST_ASSERT(calc_row(5, 1) == 15);
    TEST_ASSERT(calc_row(100, 100) == 505000);
    TEST_ASSERT(calc_row(100000, 718) == 3590035900000);
    TEST_ASSERT(calc_row(100000, -1) == -5000050000);
    TEST_ASSERT(calc_row(10000000, -1000000000) == 0);
}

TEST_LIST= {
    {"Calculate row value", test_calc_row},
    {NULL, NULL}
};