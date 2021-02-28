//
// Created by jeron on 28/02/2021.
//

#ifndef TASK1_VALIDATORS_H
#define TASK1_VALIDATORS_H

#include <stdbool.h>

#define DNI_PATTERN "^[0-9]{8,8}[A-Za-z]$"
#define NAME_PATTER "^[A-Za-z]{0,20}$"
#define SURNAME_PATTERN "[A-Za-z]{0,80}"
#define PHONE_NUMBER_PATTER "[0-9]{9}"
#define BIRT_DATE_PATTERN "^(?:(?:31(\/|-|\.)(?:0?[13578]|1[02]))\1|(?:(?:29|30)(\/|-|\.)(?:0?[13-9]|1[0-2])\2))(?:(?:1[6-9]|[2-9]\d)?\d{2})$|^(?:29(\/|-|\.)0?2\3(?:(?:(?:1[6-9]|[2-9]\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\d|2[0-8])(\/|-|\.)(?:(?:0?[1-9])|(?:1[0-2]))\4(?:(?:1[6-9]|[2-9]\d)?\d{2})$"
#define BATCH_PATTERN "[A-Za-z0-9]{0,20}"
#define INOCULATION_ID "( *?[_] *?){4,}"

bool dni_validator(char *dni);

bool name_validator(char *name);

bool surname_validator(char *surname);

bool birth_date_validator(char *birth_date);

bool batch_validator(char *batch);

bool inoculation_id_validator(char *id);

#endif //TASK1_VALIDATORS_H
