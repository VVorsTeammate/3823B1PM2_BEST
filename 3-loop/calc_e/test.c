#include "calc_e.h"
#include "acutest.h"


void test_calc_e() {
    TEST_ASSERT(calc_e(1) <= 100 && calc_e(1) > 50);
    TEST_ASSERT(calc_e(3) <= 4930 && calc_e(3) > 4000);
    TEST_ASSERT(calc_e(2) < 200 && calc_e(2) > 150);
    TEST_ASSERT(calc_e(4) < 20000 && calc_e(4) > 16000);
    TEST_ASSERT(calc_e(5) < 1000000 && calc_e(5) > 500000);
}

TEST_LIST = {
    {"Find Euler's number", test_calc_e},
    {NULL, NULL}
};