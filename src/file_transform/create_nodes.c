/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** create_nodes
*/

#include "lemin.h"
#include <stdio.h>
#include <stdlib.h>

char *get_descriptor(char *line)
{
    char *descriptor = NULL;
    int len = 0;
    int start = 0;

    for (; line[start] == ' '; start++);
    for (int i = start; line[i] != ' '; i++, len++);
    descriptor = malloc(sizeof(char) * (len + 1));
    descriptor[len] = '\0';
    len = 0;
    for (int i = start; line[i] != ' '; descriptor[len] = line[i], i++, len++);
    return (descriptor);
}

list_data_t *basic_node_create(char **file, list_t *node_list, int rank,
list_data_t *node)
{
    char *line = file[rank];

    node = malloc(sizeof(list_data_t));
    node->node = malloc(sizeof(node_t));
    node->node->linked_nodes = NULL;
    node->node->descriptor = get_descriptor(file[rank + 1]);
    add_to_front(node_list, node);
    create_node_in_list(file, node_list, rank + 2);
    return (node);
}

// care at '\n' line 48
void command_check(char **file, list_t *node_list, int rank, list_data_t *node)
{
    char *line = file[rank];

    if (n_first_char_equal(7, "##start", line)) {
        node = basic_node_create(file, node_list, rank, node);
        node->node->ants = my_atoi(file[0]);
        node->node->special_id = 'S';
    } else if (n_first_char_equal(5, "##end", line)) {
        node = basic_node_create(file, node_list, rank, node);
        node->node->ants = 0;
        node->node->special_id = 'E';
    }
}

void create_node_in_list(char **file, list_t *node_list, int rank)
{
    list_data_t *node = NULL;
    char *line = file[rank];

    if (line && (line[0] == '#') && (line[1] != '#'))
        create_node_in_list(file, node_list, rank + 1);
    else {
        if (line && n_first_char_equal(2, "##", line)) {
            command_check(file, node_list, rank, node);
        } else if (line && (check_nbr_of_args(line, 3, ' ') == 0)) {
            node = malloc(sizeof(list_data_t));
            node->node = malloc(sizeof(node_t));
            node->node->ants = 0;
            node->node->linked_nodes = NULL;
            node->node->descriptor = get_descriptor(line);
            node->node->special_id = '0';
            add_to_front(node_list, node);
            create_node_in_list(file, node_list, rank + 1);
        }
    }
}