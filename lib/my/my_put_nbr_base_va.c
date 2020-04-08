/*
** EPITECH PROJECT, 2019
** MY_PUT_NBR_BASE_VA
** File description:
** Tools for printfs conversion flags
*/

#include "my.h"
#include <stdarg.h>

void my_put_nbr_octal_va(va_list ap)
{
    my_put_nbr_base(va_arg(ap, int), "01234567");
}

void my_put_nbr_dec_va(va_list ap)
{
    my_put_nbr_base(va_arg(ap, int), "0123456789");
}

void my_put_nbr_hex_va(va_list ap)
{
    my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
}

void my_put_nbr_upperhex_va(va_list ap)
{
    my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
}

void my_put_nbr_bin_va(va_list ap)
{
    my_put_nbr_base(va_arg(ap, int), "01");
}