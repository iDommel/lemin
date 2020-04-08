/*
** EPITECH PROJECT, 2019
** MY_STRSTR
** File description:
** Identifies a sub_string in a string passed as parameter
*/

#include "./my.h"

static int check_rest(char *str, char *to_find, int i)
{
    for (int j = 0; j <= my_strlen(to_find) - 1; j++) {
        if (str[i+j] != to_find[j])
            return (0);
    }
    return (1);
}

char *my_strstr(char *str, char *to_find)
{
    for (int i = 0; str[i] != '\0'; i++) {
            if (check_rest(str, to_find, i))
                return (&str[i]);
    }
    return (0);
}