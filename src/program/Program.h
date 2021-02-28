//
// Created by jeron on 28/02/2021.
//

#ifndef TASK1_PROGRAM_H
#define TASK1_PROGRAM_H

#include "../population/Population.h"
#include "../vaccine/Vaccine.h"
#include "../patient/Patient.h"

struct ProgramData {
    struct Population *populations;
    struct Vaccine *vaccines;
    struct Patient *patients;
};

#endif //TASK1_PROGRAM_H
