/*
** EPITECH PROJECT, 2020
** MY_STR_ARR_DUP
** File description:
** Duplicates an str array. Memory is allocated, parameter isn't freed.
*/

#include <stdlib.h>
#include "my.h"

char **my_str_arr_dup(char **src)
{
    char **res = NULL;
    int res_len = 0;

    if (!src)
        return (NULL);
    res_len = my_str_arr_len(src);
    res = malloc(sizeof(char *) * (res_len + 1));
    res[res_len] = NULL;
    for (int i = 0; i < res_len; i++) {
        res[i] = my_strdup(src[i]);
    }
    return (res);
}