/*
** EPITECH PROJECT, 2019
** MY_STRCAT
** File description:
** concatenates two strings
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    int res_size;
    int i;
    char *res;

    if (!dest)
        return (my_strdup(src));
    res_size = my_strlen(dest) + my_strlen(src);
    res = malloc(res_size + 1);
    for (i = 0; dest[i]; i++)
        res[i] = dest[i];
    for (int j = 0; src[j]; i++, j++)
        res[i] = src[j];
    res[i] = '\0';
    free(dest);
    free(src);
    return (res);
}