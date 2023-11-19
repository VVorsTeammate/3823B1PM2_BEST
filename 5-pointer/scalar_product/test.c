#include "mult.h"
#include "acutest.h"


void test_scalar_product() {
    int a1[] = {1, 1, 1};
    int b1[] = {1, 1, 1};

    int a2[] = {1, 0};
    int b2[] = {0, 1};

    int a3[] = {1, 2, 3, 4, 5, 6,};
    int b3[] = {7, 8, 9, 10, -5, 3};

    int a4[] = {-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int b4[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int a5[] = {-1, 1, -1, 1, -1, 1};
    int b5[] = {1, -1, 1, -1, 1, -1};

    int a6[] = {0, 0, 0, 1, 0, 0};
    int b6[] = {0, 0, 1, 0, 0, 0};



    TEST_ASSERT(scalar_product(a1, b1, sizeof(a1)/sizeof(int)) == 0);
    TEST_ASSERT(scalar_product(a2, b2, sizeof(a2)/sizeof(int)) == 90);
    TEST_ASSERT(scalar_product(a3, b3, sizeof(a3)/sizeof(int)) == 61);
    TEST_ASSERT(scalar_product(a4, b4, sizeof(a4)/sizeof(int)) == 180);
    TEST_ASSERT(scalar_product(a5, b5, sizeof(a5)/sizeof(int)) == 180);
    TEST_ASSERT(scalar_product(a6, b6, sizeof(a6)/sizeof(int)) == 90);

}


TEST_LIST = {
    {"Scalar product", test_scalar_product},
    {NULL, NULL}
};
