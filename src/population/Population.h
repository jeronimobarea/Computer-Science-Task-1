//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_POPULATION_H
#define TASK1_POPULATION_H

#include <stdio.h>
#include <string.h>

#define POPULATION_DATASET_PATH "C:\\Users\\jeron\\CLionProjects\\Task1\\datasets\\static\\populations.txt"
#define MAX_POPULATIONS 10
#define POPULATION_DELIMITER ' '

struct Population {
    int id;
    char *description;
    int start;
    int ends;
};

void load_populations(struct Population *populations);

#endif //TASK1_POPULATION_H
