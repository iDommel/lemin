/*
** EPITECH PROJECT, 2019
** MY_PUTCHAR
** File description:
** Displays a char passed as parameter.
*/

#include "my.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}