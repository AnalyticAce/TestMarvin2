/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** .h
*/

#include "bsq.h"
#include "myprintflib.h"

char *map_loader(char const *filepath)
{
    struct stat tab;
    stat (filepath, &tab);
    int df = open(filepath, O_RDONLY);
    char *buffer; int size = tab.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    if (df == -1) {
        my_putstr("Error : Open failed !\n");
        return (NULL);
    } int ret = read(df, buffer, size);
    if (ret == -1) {
        my_putstr("Error : Invalid return of read !\n");
        return (NULL);
    } buffer[size] = '\0';
    if (close(df) == -1) {
        my_putstr("Error : Close failed !\n");
        return (NULL);
    } return (buffer);
}

int **bsq_map(char const *buffer)
{
    int **tabs;
    int r = my_getnbr(number_of_row(buffer));
    int c = number_of_c(buffer);
    int i = 0;
    int j;
    tabs = malloc(sizeof(int *) * r);
    while (i != r) {
        j = 0;
        tabs[i] = malloc(sizeof(int) * c);
        while (j != c) {
            tabs[i][j] = 0;
            j++;
        } i++;
    } tabs[i] = NULL; return (tabs);
}
