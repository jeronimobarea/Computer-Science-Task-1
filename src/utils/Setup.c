#include "Setup.h"

#include "../program/Program.h"

struct ProgramData setup() {
    struct Population populations[MAX_POPULATIONS];
    load_populations(populations);

    struct Vaccine vaccines[MAX_VACCINES];
    setup_vaccines(vaccines);

    printf("\n\nEverything loaded...\n");

    struct ProgramData data;

    for (int i = 0; i < sizeof populations; ++i) {
        data.populations[i] = populations[i];
    }

    for (int i = 0; i < sizeof vaccines; ++i) {
        data.vaccines[i] = vaccines[i];
    }

    return data;
}
