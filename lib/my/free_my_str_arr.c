/*
** EPITECH PROJECT, 2020
** FREE_MY_STR_ARRAY
** File description:
** Frees an str array
*/

#include <stdlib.h>
#include "my.h"

void free_my_str_arr(char **src)
{
    for (int i = 0; src[i]; i++)
        free(src[i]);
    free(src);
}