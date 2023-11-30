#include "queue_handler.h"
#include "acutest.h"


void test_patient_queue() {
    struct Patient patient_list[] = {
        {"Denis", NULL},
        {"Andrey", NULL},
        {"Sergei", NULL},
        {"Luck", NULL},
        {"Kalaka", NULL},
        {"Rad", NULL},
        {"Strange", NULL}, 
        {"Sday", NULL}, 
        {"Denis2", NULL}
    };

    for (int i=0; i < 8; i++)
        patient_list[i].nextPatient = &patient_list[i+1];


    TEST_ASSERT(get_queue_len(&patient_list[0]) == 9);
    patient_list[6].nextPatient = NULL;
    TEST_ASSERT(get_queue_len(&patient_list[0]) == 7);
    patient_list[3].nextPatient = NULL;
    TEST_ASSERT(get_queue_len(&patient_list[0]) == 4);
    patient_list[0].nextPatient = NULL;
    TEST_ASSERT(get_queue_len(&patient_list[0]) == 1);

}


TEST_LIST = {
    {"Get length patient's queue", test_patient_queue},
    {NULL, NULL}
};
