/*
** EPITECH PROJECT, 2020
** MY_STR_ARR_LEN
** File description:
** My str arrey lenght
*/

int my_str_arr_len(char **src)
{
    static int size = 0;

    for (size = 0; src[size]; size++);
    return (size);
}