/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** create_hantill
*/

#include "lemin.h"
#include <stddef.h>

int n_first_char_equal(int n, char *one, char *two)
{
    for (int i = 0; (i < n); i++)
        if ((two[i] == '\0') || (one[i] == '\0') || (one[i] != two[i]))
            return (0);
    return (1);
}

int check_nbr_of_args(char *src, int nbr_expected, char split)
{
    int word_count = 0;
    int i = 0;

    for (; src[i] == split; i++);
    for (; src[i] != '\0'; i++)
        if ((src[i] == split) && (src[i - 1] != split))
            word_count++;
    if (src[i - 1] != split)
        word_count++;
    if (word_count != nbr_expected)
        return (84);
    else
        return (0);
}

list_t *search_node_descript(char *descript, list_t *root)
{
    list_t *cursor = root->next;

    while (cursor != root) {
        if (cursor->data && my_streq(cursor->data->node->descriptor, descript))
            return (cursor);
        cursor = cursor->next;
    }
    return (NULL);
}

list_t *create_anthill(char **file)
{
    list_t *node_list = NULL;

    if (file == NULL)
        return (NULL);
    node_list = create_list();
    create_node_in_list(file, node_list, 1);
    dig_tunnels_in_list(file, node_list, 0);
    return (node_list);
}