//
// Created by jeron on 27/02/2021.
//

#include "Population.h"
#include "../utils/Files.h"


void load_populations(struct Population *populations) {
    char output[MAX_POPULATIONS][MAX_FILE_LINE_LENGTH];
    read_file(POPULATION_DATASET_PATH, output, MAX_POPULATIONS);

    for (int i = 0; i < MAX_POPULATIONS; ++i) {
        char data[3][MAX_FILE_LINE_LENGTH];
        split_str(output[i], '\0', data);
        struct Population population = {
                .id = i,
                .description = *data[0],
                .start = 1,
                .ends = 1,
        };
        populations[i] = population;
    }
}