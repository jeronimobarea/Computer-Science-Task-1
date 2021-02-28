#include "src/utils/Setup.h"
#include "src/menu/Menu.h"
#include "src/program/Program.h"

int main() {
    struct ProgramData data = setup();
    struct MenuSelection selection = menu();
    process_selection(selection.selected);
}
