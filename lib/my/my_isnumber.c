/*
** EPITECH PROJECT, 2019
** MY_ISNUM
** File description:
** Checks if a char is a number
*/

int my_isnumber(char c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}