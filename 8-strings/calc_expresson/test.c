#include "calc_expression_value.h"
#include "acutest.h"


void test_calc_expression_value() {

    TEST_ASSERT(calculate_expression("4+7-2-8") == 1);
    TEST_ASSERT(calculate_expression("-10+3+7") == 0);
    TEST_ASSERT(calculate_expression("20+20+10+25+30-5") == 100);
    TEST_ASSERT(calculate_expression("20+-20+10+25+30-5") == -1);
    TEST_ASSERT(calculate_expression("100+200-300+1-1") == 0);
}



TEST_LIST = {
    {"Find expression value", test_calc_expression_value},
    {NULL, NULL}
};
