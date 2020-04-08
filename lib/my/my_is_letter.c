/*
** EPITECH PROJECT, 2020
** MY_IS_LETTER
** File description:
** Checks if char is a letter
*/

int my_isletter(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    return (0);
}