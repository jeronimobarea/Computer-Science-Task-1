#include "Setup.h"

#include "../program/Program.h"

struct ProgramData setup() {
    struct Population populations[MAX_POPULATIONS];
    load_populations(populations);

    struct Vaccine vaccines[MAX_VACCINES];
    setup_vaccines(vaccines);

    printf("\n\nEverything loaded...\n");

    struct ProgramData data = {
            .populations = *populations,
            .vaccines = *vaccines,
    };

    return data;
}
