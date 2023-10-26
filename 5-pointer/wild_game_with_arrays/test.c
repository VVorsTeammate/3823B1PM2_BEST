#include "game.h"
#include "acutest.h"


void test_scalar_product() {
    int a1[] = {1, 1, 1};
    int b1[] = {1, 1, 1};



    TEST_ASSERT(wild_game_with_arrays(a1, b1, sizeof(a1)/sizeof(int)) == 0);


}


TEST_LIST = {
    {"Scalar product", test_scalar_product},
    {NULL, NULL}
};