#include "src/utils/Setup.h"
#include "src/menu/Menu.h"

int main() {
    struct ProgramData data = setup();
    struct MenuSelection selection = menu();
    process_selection(selection.selected, data);
}
