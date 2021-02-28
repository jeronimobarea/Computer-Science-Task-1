#ifndef TASK1_PATIENT_H
#define TASK1_PATIENT_H

#include "../vaccine/Vaccine.h"

#define PATIENT_DATASET_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\patients.txt"
#define PATIENT_VACCINES_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\patients\\"
#define MAX_TAKEN_VACCINES 3
#define MAX_PATIENTS 1000
#define PATIENT_DELIMITER '?'

struct Patient {
    char *DNI; // 12345678A
    char *name; // Max length 20
    char *surname; // Max length 80
    char *address; // Max length 150
    char *phone_number; // 123 456 789
    char *date_of_birth; // dd/mm/aaaa
    int population_id;
    char **taken_vaccines; // Max 3 different vaccines
};

void load_patients(struct Patient *patients, char *file_path);

char **load_patients_vaccines(char *patient_dni);

void insert_patient(struct Patient *patients, char *file_path);

void delete_patient(struct Patient *patients, char *file_path);

#endif //TASK1_PATIENT_H
