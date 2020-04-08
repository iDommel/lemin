/*
** EPITECH PROJECT, 2019
** MY_STRDUP
** File description:
** allocates memory and puts the source string in it
*/

#include "my.h"

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int size = my_strlen(src);
    char *str = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < (size); i++)
        str[i] = src[i];
    str[size] = '\0';
    return (str);
}