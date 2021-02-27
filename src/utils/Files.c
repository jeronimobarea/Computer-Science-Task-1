//
// Created by jeron on 27/02/2021.
//

#include "Files.h"

void read_file(
        char *filename,
        char output[][MAX_FILE_LINE_LENGTH],
        int row_count
) {
    FILE *fp;

    fopen_s(&fp, filename, "r");

    if (fp == NULL) {
        perror(FILE_ERROR);
        exit(1);
    }

    printf(DEBUG_FILE, filename);

    char reader[MAX_FILE_LINE_LENGTH];
    int counter = 0;

    while (fgets(reader, sizeof(reader), fp)) {
        for (int i = 0; i <= sizeof(reader); ++i) {
            if (counter >= row_count)
                break;
            if (reader[i] != '\n')
                output[counter][i] = reader[i];
        }
        ++counter;
    }

    fclose(fp);
}

void split_str(char *data, char delimiter, char output[][MAX_FILE_LINE_LENGTH]) {
    char *token;
    size_t initial_size = strlen(data);
    int counter = 0;

    while ((token = strtok_s(data, &delimiter, &data))) {
        for (int i = 0; i <= (int) initial_size; ++i) {
            if (token[i] == '\0')
                break;
            if (token[i] != '\n')
                output[counter][i] = token[i];
        }
        ++counter;
    }
}
