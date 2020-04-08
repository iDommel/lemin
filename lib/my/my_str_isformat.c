/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** my_str_isformat returns 1 if all chars of src are in ref, -1 if not
*/

#include "./my.h"

int my_str_isformat(char *src, char *ref)
{
    if (!src || !ref)
        return (-1);
    for (int i = 0; src[i]; i++) {
        if (my_findchar(src[i], ref) == -1)
            return (-1);
    }
    return (1);
}