//
// Created by jeron on 27/02/2021.
//

#include "Patient.h"
#include "../utils/Files.h"

void load_patients(struct Patient *pattients) {
    char **output = read_file(PATIENT_DATASET_PATH);

    for (int i = 0; *(output + i); ++i) {
        char **tokens;
        printf("\npatient=[%s]", *(output + i));
        tokens = str_split(*(output + i), PATIENT_DELIMITER);

        if (tokens) {
            struct Patient patient = {
                    .DNI = *(tokens + 0),
                    .name = *(tokens + 1),
                    .surname = *(tokens + 2),
                    .address = *(tokens + 3),
                    .phone_number = *(tokens + 4),
                    .date_of_birth = *(tokens + 5),
                    .population_id = atoi(*(tokens + 6)),
            };
            patient.taken_vaccines = load_patients_vaccines(patient.DNI);
            pattients[i] = patient;
        }
        free(*(output + i));
        free(tokens);
    }
    free(output);
}

char **load_patients_vaccines(char *patient_dni) {
    char buf[256];
    snprintf(buf, sizeof buf, "%s%s%s", PATIENT_VACCINES_PATH, patient_dni, ".txt");
    return read_file(buf);
}