/*
** EPITECH PROJECT, 2020
** MY_IS_NUMBERSTR
** File description:
** Checks if a string is a number str
*/

#include "my.h"

int my_is_numberstr(char *src)
{
    for (int i = 0; src[i]; i++) {
        if (!my_isnumber(src[i]))
            return (0);
    }
    return (1);
}