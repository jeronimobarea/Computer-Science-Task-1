//
// Created by jeron on 27/02/2021.
//

#include "Menu.h"

struct MenuSelection menu() {
    struct MenuSelection selection;
    printf(
            "1) Dar de alta (paciente)\n"
            "2) Dar de baja (paciente)\n"
            "3) Dar de alta (inoculacion)\n"
            "4) Eliminar inoculaciones\n"
            "5) Guardar estado\n"
            "6) Cargar estado\n"
            "7) Listar datos de vacunacion\n"
            "Elige una opcion: "
    );
    scanf_s("%d", &selection.selected);

    selection.is_valid = selection_is_valid(selection.selected);

    while (!selection.is_valid) {
        selection = menu();
    }
    return selection;
}

bool selection_is_valid(int selection) {
    if (selection > 7 || selection < 1) {
        return false;
    }
    return true;
}

void process_selection(int selection) {
    printf("Selected: %d", selection);
}
