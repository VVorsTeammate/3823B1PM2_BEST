#include "two_boxes.h"
#include "acutest.h"


void test_two_boxes() {
    TEST_ASSERT(twoboxes(1, 1, 1, 2, 2, 2) == 1);
    TEST_ASSERT(twoboxes(2, 2, 2, 1, 1, 1) == 1);
    TEST_ASSERT(twoboxes(2, 2, 2, 2, 2, 2) == 0);
    TEST_ASSERT(twoboxes(-1, 1, 1, 2, 2, 2) == 0);
    TEST_ASSERT(twoboxes(1, 1, 1, 2, 2, -2) == 0);
    TEST_ASSERT(twoboxes(1, 10, 1, 2, 2, 2) == 0);
    TEST_ASSERT(twoboxes(1, 1, 1, 2, 2, 0) == 0);
    TEST_ASSERT(twoboxes(1, 1, 10, 0.9, 0.9, 0.9) == 1);
}

TEST_LIST = {
    {"Two boxes", test_two_boxes},
    {NULL, NULL}
};