/*
** EPITECH PROJECT, 2019
** MY_PUT_NBR
** File description:
** displays any int passed as parameter using write.
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int display;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb >= 10) {
        display = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(display + '0');
    } else if (nb < 10)
        my_putchar(nb + '0');
    return (0);
}