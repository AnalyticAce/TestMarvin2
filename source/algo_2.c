/*
** EPITECH PROJECT, 2023
** Bsq algo
** File description:
** algo
*/

#include "bsq.h"
#include "myprintflib.h"

int get_number_row(int **tabs, int r, int c, int nb)
{
    int i = 0;
    int j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            if (tabs[i][j] == nb)
                return (i);
            j++;
        } i++;
    } return (0);
}

int get_number_col(int **tabs, int r, int c, int nb)
{
    int i = 0, j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            if (tabs[i][j] == nb)
                return (j);
            j++;
        } i++;
    } return (0);
}

char **alog_2(char **tab, int **tabs, int r, int c)
{
    int nb = find_big_map(tabs, r, c);
    int i = get_number_row(tabs, r, c, nb);
    int j = get_number_col(tabs, r, c, nb);
    int a = i - (nb - 1), b = j - (nb - 1);
    while (a <= i) {
        b = j - (nb - 1);
        while (b <= j) {
            tab[a][b] = 'x';
            b++;
        } a++;
    } return (tab);
}
