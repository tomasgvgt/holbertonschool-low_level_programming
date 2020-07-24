#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
int _putchar(char c);
