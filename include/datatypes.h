/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** datatypes
*/

#ifndef DATATYPES_H_
#define DATATYPES_H_

typedef struct list list_t;

typedef enum g_o_type
{
    tunnel,
    node
} g_o_type_t;

////////////////////////////////////////////////////////////////////////////////
//                         Linked list Datastructure                          //
////////////////////////////////////////////////////////////////////////////////

typedef struct node_s
{
    char special_id;
    char *descriptor;
    int ants;
    list_t *linked_nodes;
} node_t;

typedef struct tunnel_s
{
    node_t *node;
} tunnel_t;

typedef union list_data
{
    node_t *node;
    tunnel_t *tunnel;
} list_data_t;

#endif /* !DATATYPES_H_ */