#include <stdio.h>

#include "src/utils/Setup.h"
#include "src/utils/Menu.h"
#include "src/utils/Files.h"

int main() {
    setup();
    struct MenuSelection selection = menu();
    process_selection(selection.selected);
}
