#ifndef TASK1_PROGRAM_H
#define TASK1_PROGRAM_H

#include "../population/Population.h"
#include "../vaccine/Vaccine.h"
#include "../patient/Patient.h"

#define SAVE_STATE_POPULATION_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\populations.txt"
#define SAVE_STATE_VACCINES_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\vaccines.txt"
#define SAVE_STATE_PATIENTS_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\patients.txt"
#define SAVE_STATE_INOCULATIONS_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\patients\\"

struct ProgramData {
    struct Population populations[MAX_POPULATIONS];
    struct Vaccine vaccines[MAX_VACCINES];
    struct Patient patients[MAX_PATIENTS];
    char **inoculations;
};

void save_current_state(struct ProgramData data);

void load_state(struct ProgramData data, char *path);

void list_data(struct ProgramData data);

#endif //TASK1_PROGRAM_H
