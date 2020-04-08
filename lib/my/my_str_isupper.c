/*
** EPITECH PROJECT, 2019
** MY_STR_ISUPPER
** File description:
** Tests is a string is uppercase
*/

#include "./my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0' ; i++) {
        if (!(('A' <= str[i] &&  str[i] <= 'Z'))) {
            return (1);
        }
    }
    return (0);
}