#include "quadratic_equation.h"
#include "acutest.h"


void test_quadratic_equation() {
    TEST_ASSERT(QuadraticEquation(1, 2, -3) == -2);
    TEST_ASSERT(QuadraticEquation(1, 1, -2) == -1);
    TEST_ASSERT(QuadraticEquation(1, -2, 17) == 2);
    TEST_ASSERT(QuadraticEquation(1, -2, 10) == 2);
    TEST_ASSERT(QuadraticEquation(1, 18, 32) == -18);
    TEST_ASSERT(QuadraticEquation(1, 6, -4) == -6);
}

TEST_LIST = {
    {"Quadratic equation", test_quadratic_equation},
    {NULL, NULL}
};