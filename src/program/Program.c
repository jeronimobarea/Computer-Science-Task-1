#include "Program.h"
#include "../utils/Files.h"

void save_current_state(struct ProgramData data) {
    char **processed_populations = NULL;
    char **processed_vaccines = NULL;
    char **processed_patients = NULL;
    char **processed_inoculations = NULL;

    for (int i = 0; i < sizeof(data.populations); ++i) {
        struct Population population = data.populations[i];
        char buf[MAX_FILE_LINE_LENGTH];
        snprintf(
                buf,
                sizeof buf,
                "%d %s %d %d",
                population.id,
                population.description,
                population.start,
                population.ends
        );
        *(processed_populations + i) = buf;
    }

    for (int i = 0; i < sizeof(data.vaccines); ++i) {
        struct Vaccine vaccine = data.vaccines[i];
        char buf[MAX_FILE_LINE_LENGTH];
        snprintf(
                buf,
                sizeof buf,
                "%s?%s?%s?%s?%s",
                vaccine.id,
                vaccine.serial_number,
                vaccine.company,
                vaccine.aproval_date,
                vaccine.batch
        );
        *(processed_vaccines + i) = buf;
    }

    for (int i = 0; i < sizeof(data.patients); ++i) {
        struct Patient patient = data.patients[i];
        char buf[MAX_FILE_LINE_LENGTH];
        snprintf(
                buf, sizeof buf,
                "%s?%s?%s?%s?%s?%d",
                patient.DNI, patient.name,
                patient.surname,
                patient.phone_number,
                patient.date_of_birth,
                patient.population_id
        );
        *(processed_patients + i) = buf;
    }

    for (int i = 0; i < sizeof(data.inoculations); ++i) {
        *(processed_inoculations + i) = data.inoculations[i];
    }

    save_state(processed_populations, SAVE_STATE_POPULATION_PATH);
    save_state(processed_vaccines, SAVE_STATE_VACCINES_PATH);
    save_state(processed_patients, SAVE_STATE_PATIENTS_PATH);
    save_state(processed_inoculations, SAVE_STATE_INOCULATIONS_PATH);
}

void load_state(struct ProgramData data, char *path) {
    load_populations(data.populations);
    setup_vaccines(data.vaccines);
}

void list_data(struct ProgramData data) {
    for (int i = 0; i < sizeof(data.vaccines); ++i) {
        if (data.vaccines[i].serial_number != NULL) {
            printf("------------------------\n");
            printf("%s\n", data.vaccines[i].company);
            printf("------------------------\n");
            printf("Serial number: %s\n", data.vaccines[i].serial_number);
            printf("Batch: %s\n", data.vaccines[i].batch);
            printf("Aproval date: %s\n", data.vaccines[i].aproval_date);
        }
    }

    for (int i = 0; i < sizeof(data.inoculations); ++i)
        printf("%s\n", data.inoculations[i]);
}