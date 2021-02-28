cmake_minimum_required(VERSION 3.6)
project(Task1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Task1 main.c
        src/vaccine/Vaccine.c
        src/vaccine/Vaccine.h
        src/population/Population.c
        src/population/Population.h
        src/patient/Patient.c
        src/patient/Patient.h
        src/menu/Menu.c
        src/menu/Menu.h
        src/utils/Files.c
        src/utils/Files.h
        src/utils/Setup.c
        src/utils/Setup.h
        src/utils/Errors.h
        src/utils/Debug.h
        src/utils/Validators.c
        src/utils/Validators.h
        src/program/Program.h)