#include "struct_returner.h"
#include "acutest.h"


void test_get_structure() {
    TEST_ASSERT(  ((CreateStruct*)get_struct(5, 5, "11"))->id >= 0 && sizeof(*(CreateStruct*)get_struct(5, 1, "1111")) == 24);
    TEST_ASSERT(  ((CreateStruct*)get_struct(1, 5, "115"))->id >= 0 && sizeof(*(CreateStruct*)get_struct(1, 5, "1331")) == 24);
    TEST_ASSERT(  ((CreateStruct*)get_struct(5, 3, "116423"))->id >= 0 && sizeof(*(CreateStruct*)get_struct(5, 3, "1311")) == 24);
    TEST_ASSERT(  ((CreateStruct*)get_struct(7, 5, "1177"))->id >= 0 && sizeof(*(CreateStruct*)get_struct(3, 5, "1321")) == 24);
}


TEST_LIST = {
    {"Get structure", test_get_structure},
    {NULL, NULL}
};
