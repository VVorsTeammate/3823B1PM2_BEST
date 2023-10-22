#include "acutest.h"
#include "chess.h"

void test_chess_rook() {
    TEST_ASSERT(chess_rook('A', 1, 'H', 1) == 1);
    TEST_ASSERT(chess_rook('A', 1, 'H', 8) == 0);
    TEST_ASSERT(chess_rook('A', 1, 'A', 4) == 1);
    TEST_ASSERT(chess_rook('D', 1, 'E', 2) == 0);
    TEST_ASSERT(chess_rook('E', 4, 'C', 4) == 1);
    TEST_ASSERT(chess_rook('F', 6, 'G', 6) == 1);
    TEST_ASSERT(chess_rook('B', 4, 'B', 4) == 0);
    TEST_ASSERT(chess_rook('Z', 6, 'F', 6) == 0);
    TEST_ASSERT(chess_rook('B', 10, 'B', 8) == 0);
    TEST_ASSERT(chess_rook('K', 100, 'V', 300) == 0);
}

TEST_LIST = {
    {"Chess", test_chess_rook},
    {NULL, NULL}
};