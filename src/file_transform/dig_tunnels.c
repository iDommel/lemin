/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** dig_tunnels
*/

#include "lemin.h"
#include <stdio.h>
#include <stdlib.h>

char *get_descriptor_part(char *line, int mode)
{
    char *res = NULL;
    int len = 0;
    int tmp = 0;

    for (; line[len] != '-'; len++)
        if (line[len] == '\0')
            return (NULL);
    if (mode < 0) {
        res = malloc(sizeof(char) * (len + 1));
        for (int i = 0; i < len;res[i] = line[i], i++);
        res[len] = '\0';
    } else {
        tmp = len + 1;
        for (len = 0; line[tmp] != '\0'; tmp++, len++);
        res = malloc(sizeof(char) * (len + 1));
        for (; len >= 0; res[len] = line[tmp], len--, tmp--);
    }
    return (res);
}

void dig_tool(char *tmp_one, char *tmp_two, list_t *cursor_one
, list_t *cursor_two)
{
    free(tmp_one);
    free(tmp_two);
    if (cursor_one->data->node->linked_nodes == NULL) {
        cursor_one->data->node->linked_nodes = create_list();
    }
    if (cursor_two->data->node->linked_nodes == NULL) {
        cursor_two->data->node->linked_nodes = create_list();
    }
}

void dig_tunnels_in_list(char **file, list_t *root, int rank)
{
    char *line = file[rank];
    list_t *cursor_one = NULL;
    list_t *cursor_two = NULL;
    char *tmp_one = NULL;
    char *tmp_two = NULL;

    if (line && (check_nbr_of_args(line, 2, '-') == 84))
        dig_tunnels_in_list(file, root, rank + 1);
    else if (line) {
        tmp_one = get_descriptor_part(line, -1);
        tmp_two = get_descriptor_part(line, 1);
        cursor_one = search_node_descript(tmp_one, root);
        cursor_two = search_node_descript(tmp_two, root);
        dig_tool(tmp_one, tmp_two, cursor_one, cursor_two);
        add_to_front(cursor_one->data->node->linked_nodes, cursor_two->data);
        add_to_front(cursor_two->data->node->linked_nodes, cursor_one->data);
        dig_tunnels_in_list(file, root, rank + 1);
    }
}