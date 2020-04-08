/*
** EPITECH PROJECT, 2019
** MY_STRNCPY
** File description:
** copies the n first characters for a string to another provided as parameter
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int size_dest = my_strlen(dest);

    if (n > size_dest) {
        for (int i = 0; i < n; i++) {
            dest[i] = src[i];
        }
    }
    return (dest);
}