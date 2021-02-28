//
// Created by jeron on 28/02/2021.
//

#include "Actions.h"

#include "../program/Program.h"

void insert_patient_action(struct Patient *patients) {
    char file_path[256];
    printf("Write file path: ");
    scanf_s("%s", file_path, sizeof(file_path));
    insert_patient(patients, file_path);
}

void delete_patient_action(struct Patient *patients) {
    char file_path[256];
    printf("Write file path: ");
    scanf_s("%s", file_path, sizeof(file_path));
    delete_patient(patients, file_path);
}

void insert_inoculation_action(char **inoculations) {
    char file_path[256];
    printf("Write file path: ");
    scanf_s("%s", file_path, sizeof(file_path));
    insert_inoculation(inoculations, file_path);
}

void delete_inoculation_action(char **inoculations) {
    char file_path[256];
    printf("Write file path: ");
    scanf_s("%s", file_path, sizeof(file_path));
    delete_inoculation(inoculations, file_path);
}

void save_state_action(struct ProgramData data) {
    save_current_state(data);
}

void load_state_action(struct ProgramData data) {
    char path[256];
    printf("Write file path: ");
    scanf_s("%s", path, sizeof(path));
    load_state(data, path);
}

void list_vaccination_data_action(struct ProgramData data) {
    list_data(data);
}