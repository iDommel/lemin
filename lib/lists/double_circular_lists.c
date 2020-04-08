/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** double_chained_lists
*/

#include <stdlib.h>
#include "./lists.h"

list_t *create_list(void)
{
    list_t *root = malloc(sizeof(list_t));

    if (root != NULL) {
        root->data = NULL;
        root->next = root;
        root->prev = root;
    }
    return (root);
}

static void empty_list(list_t *list)
{
    list_t *current;

    for (current = list->next->next; current != list; current = current->next) {
        free(current->prev->data);
        free(current->prev);
    }
    if (list->prev != list)
        free(list->prev);
}

void delete_list(list_t *root)
{
    empty_list(root);
    free(root);
    root = NULL;
}