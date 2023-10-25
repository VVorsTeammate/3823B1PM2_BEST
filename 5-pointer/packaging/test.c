#include "pack.h"
#include "acutest.h"




void test_pack_ull() {
    unsigned char a1[] = { 139, 63, 239, 55, 213, 208, 135, 68 };
    unsigned char a2[] = {22, 232, 190, 133, 15, 159, 163, 87};
    unsigned char a3[] = { 139, 63, 239, 55, 213, 208, 135, 68, 10};
    unsigned char a4[] = {44, 67, 127, 88, 11, 127, 92, 2};
    unsigned char a5[] = { 10, 2, 48, 31, 1, 32, 41, 121 };
    unsigned char a6[8] = {88, 245, 96, 197, 167, 72};

    TEST_ASSERT(pack_ull(a1, sizeof(a1)/sizeof(unsigned char)) == (unsigned long long)4938145130620075915);
    TEST_ASSERT(pack_ull(a2, sizeof(a2)/sizeof(unsigned char)) == (unsigned long long)6315065991520774166);
    TEST_ASSERT(pack_ull(a3, sizeof(a3)/sizeof(unsigned char)) == (unsigned long long)0);
    TEST_ASSERT(pack_ull(a4, sizeof(a4)/sizeof(unsigned char)) == (unsigned long long)(170150572639339308));
    TEST_ASSERT(pack_ull(a5, sizeof(a5)/sizeof(unsigned char)) == (unsigned long long)(8730544541824713226));
    TEST_ASSERT(pack_ull(a6, sizeof(a6)/sizeof(unsigned char)) == (unsigned long long)(79885408204120));
}

void test_unpack_ull() {
    TEST_ASSERT(unpack_ull((unsigned long long)747701262091757826) == 86);
    TEST_ASSERT(unpack_ull((unsigned long long)400171891731626909) == 55);
    TEST_ASSERT(unpack_ull((unsigned long long)79422320976986625) == 46);
    TEST_ASSERT(unpack_ull((unsigned long long)635736927499206302) == 94);
    TEST_ASSERT(unpack_ull((unsigned long long)3522871566) == 0);
}


TEST_LIST = {
    {"char_test", test_pack_ull},
    {"ascii_code", test_unpack_ull},
    {NULL, NULL}
};