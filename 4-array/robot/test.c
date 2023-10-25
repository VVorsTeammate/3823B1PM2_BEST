#include "robot_move.h"
#include "acutest.h"


void test_robot_move() {
    int x1[] = {-5, 5, 0, 0};
    int y1[] = {0, 0, 5, -5};
    int xt1 = -5, yt1 = 5;
    double area_rad1 = 0.01;

    int xt2 = -1, yt2 = 1;
    double area_rad2 = 1.2;

    int x2[] = {0, -2, -2, 0};
    int y2[] = {0, 0, 2, 2};
    int xt3 = -1, yt3 = 1;
    double area_rad3 = 0.1;

    int x3[] = {0, 1, 2};
    int y3[] = {0, 1, 2};
    int xt4 = 2, yt4 = 1;
    double area_rad4 = 1.0;

    int xt5 = 3, yt5 = 3;
    double area_rad5 = sqrt(2); //=)


    TEST_ASSERT(robot_move(x1, y1, sizeof(x1)/sizeof(int), area_rad1, xt1, yt1) == 0);
    TEST_ASSERT(robot_move(x1, y1, sizeof(x1)/sizeof(int), area_rad2, xt2, yt2) == 1);
    TEST_ASSERT(robot_move(x2, y2, sizeof(x2)/sizeof(int), area_rad3, xt3, yt3) == 1);
    TEST_ASSERT(robot_move(x3, y3, sizeof(x3)/sizeof(int), area_rad4, xt4, yt4) == 1);
    TEST_ASSERT(robot_move(x3, y3, sizeof(x3)/sizeof(int), area_rad5, xt5, yt5) == 1);


}

TEST_LIST = {
    {"Is Robot cross point?", test_robot_move},
    {NULL, NULL}
}; 