#include "file_info.h"
#include "acutest.h"



void test_fileinfo() {
    unsigned int paragraph_num = 0;
    unsigned int words_num = 0;
    unsigned int bytes_num = 0;

    bytes_num = get_fileinfo("../../TestingFiles/Task3_1.txt", &paragraph_num, &words_num);
    TEST_ASSERT(bytes_num == 458 && paragraph_num == 3 && words_num==65);
    bytes_num = get_fileinfo("../../TestingFiles/Task3_2.txt", &paragraph_num, &words_num);
    TEST_ASSERT(bytes_num == 726 && paragraph_num == 2 && words_num == 129);
    bytes_num = get_fileinfo("../../TestingFiles/Task3_3.txt", &paragraph_num, &words_num);
    TEST_ASSERT(bytes_num == 1036 && paragraph_num == 4 && words_num == 194);

}



TEST_LIST = {
    {"Get file information", test_fileinfo},
    {NULL, NULL}
};
