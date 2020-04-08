/*
** EPITECH PROJECT, 2019
** MY_ATOI
** File description:
** Converts a string to a positive integer
*/

#include "./my.h"

int my_atoi(char *src)
{
    int res = 0;

    for (int j = 0, i = my_strlen(src) - 1; i >= 0; i--, j++) {
        if (src[j] != '-')
            res += (src[j] - '0') * my_compute_power_rec(10, i);
    }
    return (src[0] == '-' ? -res : res);
}