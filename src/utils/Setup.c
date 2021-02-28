//
// Created by jeron on 27/02/2021.
//

#include "Setup.h"

#include "../program/Program.h"

struct ProgramData setup() {
    struct Population populations[MAX_POPULATIONS];
    load_populations(populations);

    struct Vaccine vaccines[MAX_VACCINES];
    setup_vaccines(vaccines);

    struct Patient patients[MAX_PATIENTS];
    load_patients(patients);

    printf("\n\nEverything loaded...\n");

    struct ProgramData data = {
            .populations = *populations,
            .vaccines = *vaccines,
            .patients = *patients,
    };

    return data;
}
