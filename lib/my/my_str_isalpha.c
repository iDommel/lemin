/*
** EPITECH PROJECT, 2019
** MY_STR_ISALPHA
** File description:
** No clue tbh
*/

#include "./my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0' ; i++) {
        if (!(('a' <= str[i] && str[i] <= 'z')
        || ('A' <= str[i] && str[i] <= 'Z' ))) {
            return (1);
        }
    }
    return (0);
}