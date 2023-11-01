#include "acutest.h"
#include "fibonacci.h"


void test_fib() {
    TEST_ASSERT(fib(5) == 12);
    TEST_ASSERT(fib(100) == 232);
    TEST_ASSERT(fib(1000) == 2583);
    TEST_ASSERT(fib(73) == 143);
    TEST_ASSERT(fib(17) == 33);
    TEST_ASSERT(fib(-17) == -1);
    TEST_ASSERT(fib(88005553) == 165580140);
}

TEST_LIST= {
    {"Fibonacci", test_fib},
    {NULL, NULL}
};