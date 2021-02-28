//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_VACCINE_H
#define TASK1_VACCINE_H

#define VACCINES_DATASET_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\vaccines.txt"
#define MAX_VACCINES 5
#define VACCINE_DELIMITER '?'

struct Vaccine {
    char *id; // <DNI>_<SERIAL_NUMBER>_DD_MM_AAAA
    char *serial_number;
    char *company;
    char *aproval_date; // Actual system date
    char *batch;
};

void setup_vaccines(struct Vaccine *vaccines);

#endif //TASK1_VACCINE_H
