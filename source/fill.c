/*
** EPITECH PROJECT, 2023
** fill arrays functions
** File description:
** bsq
*/

#include "bsq.h"
#include "myprintflib.h"

int **fill_map_with_ints(int **tabs, char *buffer)
{
    int Index = my_strlen(number_of_row(buffer)) + 1;
    int r = my_getnbr(number_of_row(buffer));
    int c = number_of_c(buffer);
    int i = 0, j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            tabs[i][j] = (buffer[Index] == '.') ? 1 : 0;
            Index++;
            j++;
        }
        Index++; i++;
    } return (tabs);
}

char *number_of_row(char const *buffer)
{
    char *number;
    int i = 0;
    int len = 0;
    for (; buffer[len] != '\n'; len++);
    number = malloc(sizeof(char) * (len + 1));
    for (; buffer[i] != '\n'; i++) {
        number[i] = buffer[i];
    } number[i] = '\0'; return (number);
}

int number_of_c(char const *buffer)
{
    int start = my_strlen(number_of_row(buffer)) + 1;
    int end = start;
    int c = 0;
    while (buffer[end] != '\n')
        end++;
    for (int i = start; i < end; i++) {
        c++;
    } return (c);
}

char **fill_map_with_chars(char **tab, char *buffer)
{
    int Index = my_strlen(number_of_row(buffer)) + 1;
    int r = my_getnbr(number_of_row(buffer));
    int c = number_of_c(buffer);
    int i = 0, j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            tab[i][j] = buffer[Index];
            Index++;
            j++;
        } Index++; i++;
    } return (tab);
}
