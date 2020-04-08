/*
** EPITECH PROJECT, 2019
** MY_PUTSTR
** File description:
** displays the characters of a string one by one
*/

#include "my.h"
#include <stdarg.h>

void my_putchar_va(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
}

void my_putstr_va(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void my_put_nbr_va(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void my_put_modulo_va(va_list ap)
{
    my_putchar('%');
}

void my_put_pointer_adress(va_list ap)
{
    my_putstr("0x");
    my_put_nbr_base(va_arg(ap, long int), "0123456789ABCDEF");
}