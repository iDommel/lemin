/*
** EPITECH PROJECT, 2019
** MY_STRLEN
** File description:
** returns the length of an array, does not count the '\0'
*/

#include "my.h"

int my_strlen(char const *src)
{
    int length = 0;

    if (!src)
        return (length);
    for (int i = 0; src[i]; i++)
        length++;
    return (length);
}