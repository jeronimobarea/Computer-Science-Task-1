#ifndef TASK1_ACTIONS_H
#define TASK1_ACTIONS_H

#include <stdio.h>

#include "../program/Program.h"
#include "../patient/Patient.h"

void insert_patient_action(struct Patient *patients);

void delete_patient_action(struct Patient *patients);

void insert_inoculation_action(char **inoculations);

void delete_inoculation_action(char **inoculations);

void save_state_action(struct ProgramData data);

void load_state_action(struct ProgramData data);

void list_vaccination_data_action(struct ProgramData data);

#endif //TASK1_ACTIONS_H
