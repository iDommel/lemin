/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** lemin
*/

#ifndef LEMIN_H_
#define LEMIN_H_

#include "../lib/my/my.h"
#include "../lib/lists/lists.h"

#define SUCCESS_CODE (0)
#define FAILURE_CODE (84)

int lemin(void);

// hantill creation
list_t *search_node_descript(char *descript, list_t *root);
void dig_tunnels_in_list(char **file, list_t *node_list, int rank);
char *get_descriptor(char *line);
void command_check(char **file, list_t *node_list, int rank, list_data_t *node);
void create_node_in_list(char **file, list_t *node_list, int rank);
int n_first_char_equal(int n, char *one, char *two);
int check_nbr_of_args(char *src, int nbr_expected, char split);
void destroy_node_list(list_t *node_list);
list_t *create_anthill(char **file);

#endif /* !LEMIN_H_ */