//
// Created by jeron on 27/02/2021.
//

#include "Vaccine.h"
#include "../utils/Files.h"
#include "../utils/Validators.h"

void setup_vaccines(struct Vaccine *vaccines) {
    char **output = read_file(VACCINES_DATASET_PATH);

    for (int i = 0; *(output + i); ++i) {
        char **tokens;
        printf("\nvaccine=[%s]", *(output + i));
        tokens = str_split(*(output + i), VACCINE_DELIMITER);

        if (tokens) {
            /*if (!batch_validator(*(tokens + 5))
                || !inoculation_id_validator(*(tokens + 0)))
                continue;*/
            struct Vaccine vaccine = {
                    .id = *(tokens + 0),
                    .serial_number = *(tokens + 1),
                    .company = *(tokens + 2),
                    .aproval_date = *(tokens + 3),
                    .batch = *(tokens + 4),
            };
            vaccines[i] = vaccine;
        }
        free(*(output + i));
        free(tokens);
    }
    free(output);
}

void insert_inoculation(char **inoculations, char *file_path) {

}

void delete_inoculation(char **inoculations, char *file_path) {

}
