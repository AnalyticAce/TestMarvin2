/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** .h
*/

#ifndef bsq_
    #define bsq_
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>

int find_small_map(int **tabs, int i, int j);
int **algo_1(int **tabs, int r, int c);
int find_big_map(int **tabs, int r, int c);
int get_number_row(int **tabs, int r, int c, int nb);
int get_number_col(int **tabs, int r, int c, int nb);
char **alog_2(char **tab, int **tabs, int r, int c);
char *map_loader(char const *filepath);
int **bsq_map(char const *buffer);
int error_handling_1(char const *filepath);
int error_handling_2(char const *filepath);
int error_handling_3(int r, int num_uno_row);
int error_handling_3_1(char const *filepath);
int **fill_map_with_ints(int **tabs, char *buffer);
char *number_of_row(char const *buffer);
int number_of_c(char const *buffer);
char **fill_map_with_chars(char **tab, char *buffer);
void generate_map(int x, int y, int density);
int my_strcmp(char const *string1, char const *string2);
#endif
