/*
** EPITECH PROJECT, 2023
** map gen
** File description:
** map gen
*/

#include "bsq.h"
#include "myprintflib.h"

void generate_map(int x, int y, int density)
{
    unsigned int state = 0;
    my_printf("%d\n", y);
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            state = state * 1103515245 + 12345;
            int r = (unsigned int)(state / 65536) % 100;
            (r <= density) ? my_printf("o")
            : my_printf(".");
        } my_printf("\n");
    }
}
