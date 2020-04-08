/*
** EPITECH PROJECT, 2019
** MY_STR_ISNUM
** File description:
** No clue either
*/

#include "./my.h"

int my_str_isnum(char *str)
{
    for (int i = 0; str[i] != '\0' ; i++) {
        if (!(('0' <= str[i] &&  str[i] <= '9'))) {
            return (1);
        }
    }
    return (0);
}