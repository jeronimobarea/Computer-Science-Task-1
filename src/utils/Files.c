//
// Created by jeron on 27/02/2021.
//

#include "Files.h"

void read_file(char *filename, char *output) {
    FILE *fp;

    fopen_s(&fp, filename, "r");

    if (fp == NULL) {
        perror("[Error] Could not open the file");
        exit(1);
    }

    printf("[Info] Loading data from file: %s", filename);
    while (fgets(output, sizeof(output), fp)) {
        //printf("%s", output);
    }

    fclose(fp);
}

void split_str(char *data, const char *delimiter, char *output) {
    int last_empty_index = 0;
    for (int i = 0; i < (int) sizeof(data); ++i) {
        if (data[i] == '\0') {
            for (int j = last_empty_index; j < i; ++j) {
                output[last_empty_index] += data[j];
            }
            last_empty_index = i;
        }
    }
}
