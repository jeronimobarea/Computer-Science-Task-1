//
// Created by jeron on 27/02/2021.
//

#include "Population.h"
#include "../utils/Files.h"


void create_populations(struct Population *populations) {
    char output[MAX_POPULATIONS];
    read_file("C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\populations.txt", output);

    for (int i = 0; i < MAX_POPULATIONS; i += 2) {
        char data[3];
        split_str(&output[i], " ", data);
        printf("XD");
        for (int j = 0; j < 3; ++j) {
            printf("%s", &data[i]);
        }
        struct Population population = {
                .id = i,
                .description = "",
                .start = 1,
                .ends = 1,
        };
        populations[i] = population;
    }
}