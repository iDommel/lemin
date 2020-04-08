/*
** EPITECH PROJECT, 2019
** MY_COMPUTE_POWER_REC
** File description:
** takes nb to the power p recursively
*/

#include "./my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (nb < 0) {
        if (p % 2 == 0) {
            nb *= -1;
            return (nb*my_compute_power_rec(nb, p - 1));
        } else {
            nb *= -1;
            return ((-1) * nb * my_compute_power_rec(nb, p - 1));
        }
    } else
        return (nb * my_compute_power_rec(nb, p-1));
}