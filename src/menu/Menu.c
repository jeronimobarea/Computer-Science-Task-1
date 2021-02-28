//
// Created by jeron on 27/02/2021.
//

#include "Menu.h"
#include "Actions.h"

struct MenuSelection menu(struct ProgramData data) {
    struct MenuSelection selection;
    printf(
            "\n1) Dar de alta (paciente)\n"
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

    if (!selection.is_valid) {
        selection = menu(data);
    } else {
        process_selection(selection.selected, data);
    }
    return selection;
}

bool selection_is_valid(int selection) {
    if (selection > 7 || selection < 1) {
        return false;
    }
    return true;
}

void process_selection(int selection, struct ProgramData data) {
    switch (selection) {
        case 1:
            insert_patient_action(data.patients);
            break;
        case 2:
            delete_patient_action(data.patients);
            break;
        case 3:
            insert_inoculation_action(data.inoculations);
            break;
        case 4:
            delete_inoculation_action(data.inoculations);
            break;
        case 5:
            save_state_action(data);
            break;
        case 6:
            load_state_action(data);
            break;
        case 7:
            list_vaccination_data_action(data);
            break;
        default:
            perror(MENU_SELECTION_ERROR);
            break;
    }
    menu(data);
}