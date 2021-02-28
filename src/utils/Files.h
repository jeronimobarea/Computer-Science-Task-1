#ifndef TASK1_FILES_H
#define TASK1_FILES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "../program/Program.h"
#include "../utils/Errors.h"
#include "../utils/Debug.h"

#define MAX_FILE_LINE_LENGTH 150

char **read_file(char *filename);

char **str_split(char *a_str, const char a_delim);

void save_state(char **data, char *filename);

#endif //TASK1_FILES_H
