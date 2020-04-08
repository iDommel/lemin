/*
** EPITECH PROJECT, 2019
** MY_STRNCAT
** File description:
** concatenates n charaters into another strin
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int dest_size = my_strlen(dest);

    for (int i = 0; i < n; i++)
        dest[dest_size + i] = src[i];
    return (dest);
}