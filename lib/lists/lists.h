/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** lists
*/


#ifndef LISTS_H_
#define LISTS_H_

#include "../../include/datatypes.h"

typedef struct list
{
    list_data_t *data;
    struct list *next;
    struct list *prev;
} list_t;

list_t *create_list(void);
void add_element_before(list_t *element, list_data_t *data);
void add_element_before(list_t *element, list_data_t *data);
void add_to_front(list_t *root, list_data_t *data);
void add_to_queue(list_t *root, list_data_t *data);
void delete_list(list_t *root);
list_t *rm_elem(list_t *elem);

#endif /* !LISTS_H_ */
