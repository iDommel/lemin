/*
** EPITECH PROJECT, 2019
** MY_PUTSTR
** File description:
** displays the characters of a string one by one
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}