//
// Created by jeron on 27/02/2021.
//

#include "Setup.h"

#include "../population/Population.h"
#include "../patient/Patient.h"
#include "../vaccine/Vaccine.h"

void setup() {
    struct Vaccine vaccines[MAX_VACCINES];
    setup_vaccines(vaccines);

    struct Population populations[MAX_POPULATIONS];
    create_populations(populations);
}
