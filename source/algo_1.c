/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** .h
*/

#include "bsq.h"
#include "myprintflib.h"

int find_small_map(int **tabs, int i, int j)
{
    int ab = tabs[i][j - 1];
    int bc = tabs[i - 1][j - 1];
    int cd = tabs[i - 1][j];
    return (ab == bc && ab == cd && bc == cd) ? (ab + 1) :
    (ab <= bc && ab <= cd) ? (ab + 1) : (bc <= ab && bc <= cd) ? (bc + 1) :
    (cd <= ab && cd <= bc) ? (cd + 1) : 0;
}

int **algo_1(int **tabs, int r, int c)
{
    int i = 1, j = 1;
    while (i != r) {
        j = 1;
        while (j != c) {
            (tabs[i][j] != 0)
            ? tabs[i][j] = find_small_map(tabs, i, j) : 0;
            j++;
        } i++;
    } return (tabs);
}

int find_big_map(int **tabs, int r, int c)
{
    int large_num = 0;
    int i = 0, j = 0;
    while (i != r) {
        j = 0;
        while (j != c) {
            large_num = tabs[i][j] > large_num ? tabs[i][j] : large_num;
            j++;
        } i++;
    } return (large_num);
}
