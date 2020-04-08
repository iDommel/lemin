/*
** EPITECH PROJECT, 2019
** MY_PRINTF
** File description:
** Displays a formated string
*/

#include "my_printf.h"
#include "my.h"
#include <unistd.h>

int my_printf(char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i]; i++) {
        if (is_flag(format, i)) {
            manage_flags(format, i, ap);
            i++;
        } else
            my_putchar(format[i]);
    }
    va_end(ap);
    return (0);
}

void manage_flags(char *format, int i, va_list ap)
{
    char *flags = "csdi%ouxXbp";
    int flag_index = get_flag_index(flags, format[i + 1]);
    void (*ptr[])(va_list) = {my_putchar_va, my_putstr_va, \
    my_put_nbr_va, my_put_nbr_va, my_put_modulo_va, my_put_nbr_octal_va, \
    my_put_nbr_dec_va, my_put_nbr_hex_va, my_put_nbr_upperhex_va, \
    my_put_nbr_bin_va, my_put_pointer_adress};
    if (flag_index != -1)
        ptr[flag_index](ap);
    else
        write(2, "Error : Unsupported flag.\n", 27);
}

int get_flag_index(char *flags, char c)
{
    for (int i = 0; flags[i]; i++) {
        if (c == flags[i])
            return (i);
    }
    return (-1);
}