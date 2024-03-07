/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** .h
*/

#include "bsq.h"
#include "myprintflib.h"

int my_strcmp(char const *string1, char const *string2)
{
    int string1len = my_strlen(string1);
    int string2len = my_strlen(string2);
    if (string1len != string2len) {
        return -1;
    }
    for (int i = 0; i < string1len; i++) {
        if (string1[i] != string2[i]) {
            return -1;
        }
    }
    return 0;
}
