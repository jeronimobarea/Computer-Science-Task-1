//
// Created by jeron on 28/02/2021.
//

#ifndef TASK1_PROGRAM_H
#define TASK1_PROGRAM_H

#include "../population/Population.h"
#include "../vaccine/Vaccine.h"
#include "../patient/Patient.h"

struct ProgramData {
    struct Population populations[MAX_POPULATIONS];
    struct Vaccine vaccines[MAX_VACCINES];
    struct Patient patients[MAX_PATIENTS];
};

#endif //TASK1_PROGRAM_H
