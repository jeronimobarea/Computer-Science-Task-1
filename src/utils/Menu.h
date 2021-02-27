//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_MENU_H
#define TASK1_MENU_H

#include <stdio.h>
#include <stdbool.h>

struct MenuSelection {
    int selected;
    bool is_valid;
};

struct MenuSelection menu();

bool selection_is_valid(int selection);

void process_selection(int selection);

#endif //TASK1_MENU_H
