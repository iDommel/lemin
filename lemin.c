/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** lemin
*/

#include "lemin.h"
#include <stdio.h>

static char *file[] = {
    "34",
    "##start",
    "1 23 3",
    "2 16 7",
    "#comment",
    "3 16 3",
    "4 16 5",
    "##end",
    "0 9 5",
    "0-4",
    "1-2",
    "2-3",
    "3-0",
    "3-1"
};

int lemin(void)
{
    list_t *node_list = create_anthill(file);
    if (node_list == NULL)
        return (FAILURE_CODE);
    destroy_node_list(node_list);
    return (SUCCESS_CODE);
}