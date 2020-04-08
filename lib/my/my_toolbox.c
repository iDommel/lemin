/*
** EPITECH PROJECT, 2019
** TOOLBOX
** File description:
** Toolbox for my_printf
*/

#include "my_printf.h"
#include "my.h"
#include <stdlib.h>
#include <unistd.h>

int is_flag(char *str, int i)
{
    if (str[i] == '%' && str[i + 1] != '\0')
        return (1);
    return (0);
}

void my_put_nbr_base(long int nb, char *base)
{
    int b_size = my_strlen(base);
    int tens = nb;
    char digit;

    if (nb >= b_size) {
        tens = nb % b_size;
        nb = nb / b_size;
        my_put_nbr_base(nb, base);
    }
    digit = base[tens];
    write(1, &digit, 1);
}