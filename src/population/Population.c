#include "Population.h"
#include "../utils/Files.h"

void load_populations(struct Population *populations) {
    char **output = read_file(POPULATION_DATASET_PATH);

    for (int i = 0; *(output + i); ++i) {
        char **tokens;
        printf("\npopulation=[%s]", *(output + i));
        tokens = str_split(*(output + i), POPULATION_DELIMITER);

        if (tokens) {
            struct Population population = {
                    .id = i,
                    .description = *(tokens + 0),
                    .start = atoi(*(tokens + 1)),
                    .ends = atoi(*(tokens + 2)),
            };
            populations[i] = population;
        }
        free(*(output + i));
        free(tokens);
    }
    free(output);
}
