//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_MENU_H
#define TASK1_MENU_H

#include <stdio.h>
#include <stdbool.h>
#include "../utils/Errors.h"

struct MenuSelection {
    int selected;
    bool is_valid;
};

struct MenuSelection menu();

bool selection_is_valid(int selection);

void process_selection(int selection);

void insert_patient();

void delete_patient();

void insert_inoculation();

void delete_inoculation();

void save_state();

void load_state();

void list_vaccination_data();

#endif //TASK1_MENU_H
