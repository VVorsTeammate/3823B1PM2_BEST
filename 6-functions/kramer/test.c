#include "kramer_method.h"
#include "acutest.h"


void test_kramer_method() {
    double eps = 0.0001;
    int a1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int b1[] = {1, 1, 1};

    int a2[] = {1, 2, 1, 1, 1, 3, 2, 1, 3};
    int b2[] = {1, 1, 1};

    int a3[] = {1, 2, 1, -1, 0, 3, 2, 1, -3};
    int b3[] = {1, -1, 1};

    int a4[] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    int b4[] = {0, 0, 0};

    int a5[] = {1, 4, 2, 2};
    int b5[] = {1, 1};


    TEST_ASSERT(fabs(kramer_method(a1, b1, sizeof(b1)/sizeof(int)) + 1.0) < eps);
    TEST_ASSERT(fabs(kramer_method(a2, b2, sizeof(b2)/sizeof(int)) - 0.6) < eps);
    TEST_ASSERT(fabs(kramer_method(a3, b3, sizeof(b3)/sizeof(int)) + 1.0) < eps);
    TEST_ASSERT(fabs(kramer_method(a4, b4, sizeof(b4)/sizeof(int))) < eps);
    TEST_ASSERT(fabs(kramer_method(a5, b5, sizeof(b5)/sizeof(int)) - 0.5) < eps);

}


TEST_LIST = {
    {"Scalar product", test_kramer_method},
    {NULL, NULL}
};
