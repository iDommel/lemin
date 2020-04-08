/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** list_elements
*/

#include <stdlib.h>
#include "./lists.h"

void add_element_before(list_t *element, list_data_t *data)
{
    list_t *new_elem = malloc(sizeof(list_t));

    if (new_elem != NULL) {
        new_elem->data = data;
        new_elem->next = element;
        new_elem->prev = element->prev;
        element->prev->next = new_elem;
        element->prev = new_elem;
    }
}

void add_element_after(list_t *element, list_data_t *data)
{
    list_t *new_elem = malloc(sizeof(list_t));

    if (new_elem != NULL) {
        new_elem->data = data;
        new_elem->next = element->next;
        new_elem->prev = element;
        element->next->prev = new_elem;
        element->next = new_elem;
    }
}

void add_to_front(list_t *root, list_data_t *data)
{
    add_element_after(root, data);
}

void add_to_queue(list_t *root, list_data_t *data)
{
    add_element_before(root, data);
}

list_t *rm_elem(list_t *elem)
{
    list_t *tmp = elem;

    elem = elem->next;
    tmp->next->prev = tmp->prev;
    tmp->prev->next = tmp->next;
    free(tmp->data);
    free(tmp);
    return (elem);
}