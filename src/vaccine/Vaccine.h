//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_VACCINE_H
#define TASK1_VACCINE_H

#define MAX_VACCINES 5

struct Vaccine {
    char *id; // <DNI>_<SERIAL_NUMBER>_DD_MM_AAAA
    char *serial_number;
    char *compnay;
    char *aproval_date; // Actual system date
    char batch[20];
};

void setup_vaccines(struct Vaccine *vaccines);

#endif //TASK1_VACCINE_H
