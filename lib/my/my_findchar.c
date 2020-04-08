/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** my_findchar searches for a char in a string
** returns the index if found and -1 if not found or null string
*/

#include "./my.h"

int my_findchar(char c, char *src)
{
    if (!src)
        return (-1);
    for (int i = 0; src[i]; i++) {
        if (src[i] == c)
            return (i);
    }
    return (-1);
}