/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** my_puts_quit
*/

#include <unistd.h>
#include "my.h"

int my_write(int returnval, char *src, int output)
{
    if (!src)
        return (returnval);
    if (output == 1 || output == 2)
        write(output, src, my_strlen(src));
    return (returnval);
}