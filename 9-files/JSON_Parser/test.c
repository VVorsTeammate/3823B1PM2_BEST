#include "json_parser.h"
#include "acutest.h"


void test_json_parser() {
    TEST_ASSERT(parse_json("../../TestingFiles/sample4.json", "Joe") == 28);
    TEST_ASSERT(parse_json("../../TestingFiles/sample4.json", "Jackson") == 28);
    TEST_ASSERT(parse_json("../../TestingFiles/sample4.json", "Smith") == 32);
    TEST_ASSERT(parse_json("../../TestingFiles/sample4.json", "Jones") == 24);
}


TEST_LIST = {
    {"Create smile in file", test_json_parser},
    {NULL, NULL}
};
