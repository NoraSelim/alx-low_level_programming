#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char **strtow(char *str);
#endif
