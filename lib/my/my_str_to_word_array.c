/*
** EPITECH PROJECT, 2019
** MY_STR_TO_WORD_ARRAY
** File description:
** Converts a string of words separated by special
** characters into an array of words
*/

#include "./my.h"

#include <stdlib.h>

int count_words(char *src, char c)
{
    int count = 0;

    if (!src)
        return (0);
    for (int i = 0; src[i]; i++) {
        if (src[i] == c && (src[i + 1] == '\0' | src[i + 1] != c))
            count++;
    }
    return (count);
}

char *get_until_char(int *start_pos, char *src, char c)
{
    char *res = NULL;
    int init_pos = *start_pos;
    int size = 0;

    if (!src)
        return (NULL);
    for (; src[*start_pos] && (src[*start_pos] != c); (*start_pos)++, size++);
    res = malloc(size + 1);
    res[size] = '\0';
    for (int i = 0; i < size; i++)
        res[i] = src[i + init_pos];
    return (res);
}

char **my_str_to_word_array(char *src, char c)
{
    int nb_words;
    char **res;
    int j = 0;

    if (!src)
        return (NULL);
    nb_words = count_words(src, c) + 1;
    res = malloc(sizeof(char *) * (nb_words + 1));
    res[nb_words] = NULL;
    for (int i = 0; i < nb_words; i++) {
        res[i] = get_until_char(&j, src, c);
        j++;
    }
    return (res);
}

