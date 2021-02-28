//
// Created by jeron on 27/02/2021.
//

#include "Files.h"

char **read_file(char *filename) {
    FILE *fp;
    FILE *fp2;

    fopen_s(&fp, filename, "r");
    fopen_s(&fp2, filename, "r");

    if (fp == NULL) {
        char **empty = 0;
        return empty;
    }

    printf(DEBUG_FILE, filename);

    char reader[MAX_FILE_LINE_LENGTH];
    int size = 0;

    while (fgets(reader, MAX_FILE_LINE_LENGTH, fp)) {
        ++size;
    }

    char **result = 0;
    ++size;
    result = malloc(sizeof(char *) * size);

    if (result) {
        char reader_tmp[MAX_FILE_LINE_LENGTH];
        size_t idx = 0;
        while (fgets(reader_tmp, MAX_FILE_LINE_LENGTH, fp2)) {
            assert(idx < size);
            *(result + idx++) = strdup(reader_tmp);
        }
        assert(idx == size - 1);
        *(result + idx) = 0;
    }
    fclose(fp);
    fclose(fp2);
    return result;
}

char **str_split(char *a_str, const char a_delim) {
    char **result = 0;
    size_t count = 0;
    char *tmp = a_str;
    char *last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    /* Count how many elements will be extracted. */
    while (*tmp) {
        if (a_delim == *tmp) {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }

    /* Add space for trailing token. */
    count += last_comma < (a_str + strlen(a_str) - 1);

    /* Add space for terminating null string so caller
       knows where the list of returned strings ends. */
    count++;

    result = malloc(sizeof(char *) * count);

    if (result) {
        size_t idx = 0;
        char *token = strtok(a_str, delim);

        while (token) {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}

void save_state(char **data, char *filename) {
    FILE *fp;

    fopen_s(&fp, filename, "w");

    if (fp == NULL) {
        perror(SAVE_STATE_ERROR);
        return;
    }
    for (int i = 0; i < sizeof(data); ++i) {
        fprintf(fp, "%s", data[i]);
    }
    fclose(fp);
}