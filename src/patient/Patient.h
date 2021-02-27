//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_PATIENT_H
#define TASK1_PATIENT_H

#include "../vaccine/Vaccine.h"

#define MAX_TAKEN_VACCINES 3

struct Patient {
    char DNI[9]; // 12345678A
    char name[20]; // Max length 20
    char surname[80]; // Max length 80
    char address[150]; // Max length 150
    char phone_number[9]; // 123 456 789
    char date_of_birth[10]; // dd/mm/aaaa
    int population_id;
    struct Vaccine taken_vaccines[MAX_TAKEN_VACCINES]; // Max 3 different vaccines
};

#endif //TASK1_PATIENT_H
