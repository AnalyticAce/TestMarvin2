/*
** EPITECH PROJECT, 2023
** errors handling
** File description:
** errors
*/

#include "bsq.h"
#include "myprintflib.h"

int error_handling_1(char const *filepath)
{
    char *buf;
    buf = map_loader(filepath);
    return (my_strcmp(buf, "") == 0)
    ? (my_putstr("Error : This file is empty !\n"), -1) : 0;
}

int error_handling_2(char const *filepath)
{
    char *buf;
    int r = 0, r_2 = 0, a = 0;
    buf = map_loader(filepath);
    r = my_getnbr(number_of_row(buf));
    a = my_strlen(number_of_row(buf)) + 1;
    while (buf[a] != '\0') {
        if (buf[a] == '\n')
            r_2++;
        a++;
    } if (r_2 != r) {
        my_putstr("Error : (Error) Size of r !\n");
        return (-1);
    } return (0);
}

int error_handling_3(int r, int num_uno_row)
{
    return (r != num_uno_row)
    ? (my_putstr("Error : (Error) Size of Columns\n"), -1)
    : 0;
}

int error_handling_3_1(char const *filepath)
{
    char *buf = map_loader(filepath);
    int a = my_strlen(number_of_row(buf)) + 1;
    int num_uno_row = 0; int r = 0;
    while (buf[a] != '\n') {
        num_uno_row++;
        a++;
    } a++;
    while (buf[a] != '\0') {
        if (buf[a] == '\n') {
            return (error_handling_3(r, num_uno_row) == -1)
            ? -1 : (r = -1, a++, 0);
        } r++; a++;
    } return (0);
}
