#include "src/utils/Setup.h"
#include "src/menu/Menu.h"

int main() {
    setup();
    struct MenuSelection selection = menu();
    process_selection(selection.selected);
}
