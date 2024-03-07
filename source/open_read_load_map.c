/*
** EPITECH PROJECT, 2023
** open read and load
** File description:
** open read and load
*/

#include "bsq.h"
#include "myprintflib.h"

char **bsq_map2(char const *buffer)
{
    char **tab;
    int r = my_getnbr(number_of_row(buffer));
    int c = number_of_c(buffer);
    int i = 0;
    tab = malloc(sizeof(char *) * r);
    while (i != r) {
        tab[i] = malloc(sizeof(char) * c);
        i++;
    } tab[i] = NULL; return (tab);
}

void put_tab(int **tabs, int r, int c)
{
    int i = 0;
    int j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            my_putnbr(tabs[i][j]);
            j++;
        } my_putchar('\n'); i++;
    }
}

void show_char(char **tab, int r, int c)
{
    int i = 0;
    while (i != r) {
        write(1, tab[i], c);
        my_putchar('\n');
        i++;
    }
}

void function_call(char const *filepath)
{
    char *filebuffer;
    int **tabi;
    char **tab;
    int r = 0;
    int columns = 0;

    filebuffer = map_loader(filepath);
    r = my_getnbr(number_of_row(filebuffer));
    columns = number_of_c(filebuffer);
    tabi = bsq_map(filebuffer);
    tab = bsq_map2(filebuffer);
    fill_map_with_ints(tabi, filebuffer);
    fill_map_with_chars(tab, filebuffer);
    algo_1(tabi, r, columns);
    alog_2(tab, tabi, r, columns);
    show_char(tab, r, columns);
}

int main(int ac, char **av)
{
    return (map_loader(av[1]) == NULL || ac == 1 ||
            error_handling_1(av[1]) == -1 ||
            error_handling_2(av[1]) == -1 ||
            error_handling_3_1(av[1]) == -1) ? 84
            : (function_call(av[1]), 0);
}
