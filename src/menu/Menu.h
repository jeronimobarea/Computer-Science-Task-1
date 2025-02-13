#ifndef TASK1_MENU_H
#define TASK1_MENU_H

#include <stdio.h>
#include <stdbool.h>
#include "../utils/Errors.h"
#include "../program/Program.h"

struct MenuSelection {
    int selected;
    bool is_valid;
};

struct MenuSelection menu(struct ProgramData data);

bool selection_is_valid(int selection);

void process_selection(int selection, struct ProgramData data);



#endif //TASK1_MENU_H
