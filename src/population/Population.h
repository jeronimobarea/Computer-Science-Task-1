//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_POPULATION_H
#define TASK1_POPULATION_H

#include <stdio.h>
#include <string.h>


#define MAX_POPULATIONS 10

struct Population {
    int id;
    char *description;
    int start;
    int ends;
};

void create_populations(struct Population *populations);

#endif //TASK1_POPULATION_H
