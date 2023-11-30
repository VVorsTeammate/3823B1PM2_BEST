#include "xml_parser.h"
#include "acutest.h"


void test_xml_parser() {
    TEST_ASSERT(parse_xml("../../TestingFiles/test_xml.xml", "GREAL") == 10);
    TEST_ASSERT(parse_xml("../../TestingFiles/test_xml.xml", "HUNGC") == 4);
    TEST_ASSERT(parse_xml("../../TestingFiles/test_xml.xml", "LAZYK") == 2);
    TEST_ASSERT(parse_xml("../../TestingFiles/test_xml.xml", "LETSS") == 4);
}


TEST_LIST = {
    {"XML parser", test_xml_parser},
    {NULL, NULL}
};
