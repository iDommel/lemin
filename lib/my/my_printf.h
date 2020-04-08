/*
** EPITECH PROJECT, 2019
** MY_PRINTF_H
** File description:
** Header for my printf
*/

#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>
#include <stddef.h>

int my_printf(char *format, ...);
void my_putstr_va(va_list ap);
void my_putchar_va(va_list ap);
void my_put_nbr_va(va_list ap);
void my_put_modulo_va(va_list ap);

void my_put_nbr_octal_va(va_list ap);
void my_put_nbr_dec_va(va_list ap);
void my_put_nbr_hex_va(va_list ap);
void my_put_nbr_upperhex_va(va_list ap);
void my_put_nbr_bin_va(va_list ap);
void my_put_pointer_adress(va_list ap);

int is_flag(char *str, int i);
void manage_flags(char *format, int i, va_list ap);
int get_flag_index(char *flags, char c);

#endif /* !MY_PRINTF_H */
