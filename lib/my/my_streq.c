/*
** EPITECH PROJECT, 2020
** MY_STREQ
** File description:
** Checks if two strings are equal, returns 1 if true, 0 if not
*/

#include "my.h"

int my_streq(char *src, char *to_cmp)
{
    if (my_strlen(src) != my_strlen(to_cmp))
        return (0);
    for (int i = 0; src[i] && to_cmp[i]; i++) {
        if (src[i] != to_cmp[i])
            return (0);
    }
    return (1);
}