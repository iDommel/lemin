/*
** EPITECH PROJECT, 2019
** MY_REVSTR
** File description:
** reverses a string passed as parameter
*/

#include "./my.h"

void my_swap_chars(char *src1, char *src2)
{
    char temp = *src1;

    *src1 = *src2;
    *src2 = temp;
}

char *my_revstr(char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < (size / 2); i++)
        my_swap_chars(&str[i], &str[size - i -1]);
    return (str);
}