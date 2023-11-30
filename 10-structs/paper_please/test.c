#include "paper_please_handler.h"
#include "acutest.h"


void test_papers_please() {
    struct Person persons[] = {
        {'B', {"Denis", "Karchkov", 'M', {29, 7, 1994}, "Arstocka"}, "programmist"},
        {'-', {"Michail", "Krivinisiv", 'M', {11, 1, 1999}, "Enrichto"}, "programmist"},
        {'B', {"Denis", "Rodionov", 'M', {5, 5, 1995}, "Arcanistan"}, "traktorist"},
        {'C', {"Karandashka", "Fioletovaya", 'F', {1, 11, 1990}, "Erkey"}, "teacher"},
        {'B', {"Masha", "Lavasha", 70, {20, 2, 2000}, "Arcanistan"}, "collective farmer"}
    };

    TEST_ASSERT(paper_please_game(persons, 5) == 2);
}


TEST_LIST = {
    {"Papers please test", test_papers_please},
    {NULL, NULL}
};
