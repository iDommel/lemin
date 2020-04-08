/*
** EPITECH PROJECT, 2019
** MY_STR_ISLOWER
** File description:
** Tests if a string is lowercase
*/

#include "./my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0' ; i++) {
        if (!(('a' <= str[i] &&  str[i] <= 'z'))) {
            return (1);
        }
    }
    return (0);
}