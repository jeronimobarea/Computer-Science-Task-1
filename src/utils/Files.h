//
// Created by jeron on 27/02/2021.
//

#ifndef TASK1_FILES_H
#define TASK1_FILES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../utils/Errors.h"
#include "../utils/Debug.h"

#define MAX_FILE_LINE_LENGTH 50

void read_file(char *filename, char output[][MAX_FILE_LINE_LENGTH], int row_count);

void split_str(char *data, char delimiter, char *output);

#endif //TASK1_FILES_H
