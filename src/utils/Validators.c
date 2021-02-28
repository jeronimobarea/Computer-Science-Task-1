#include "Validators.h"
#include<stdlib.h>
#include <stdio.h>

bool dni_validator(char *dni) {
    FILE *fp;
    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            dni,
            DNI_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool name_validator(char *name) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            name,
            NAME_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool surname_validator(char *surname) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            surname,
            SURNAME_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool birth_date_validator(char *birth_date) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            birth_date,
            BIRTH_DATE_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool batch_validator(char *batch) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            batch,
            BATCH_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool inoculation_id_validator(char *id) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            id,
            INOCULATION_ID_PATTERN
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}

bool phone_number_validator(char *phone_number) {
    FILE *fp;

    char command[200];
    snprintf(
            command,
            sizeof command,
            "%s %s %s",
            "cmd.exe /c \"python3 regex.py\"",
            phone_number,
            PHONE_NUMBER_PATTER
    );
    fp = _popen(command, "r");

    if (fp == NULL) {
        return false;
    }
    _pclose(fp);
    return true;
}