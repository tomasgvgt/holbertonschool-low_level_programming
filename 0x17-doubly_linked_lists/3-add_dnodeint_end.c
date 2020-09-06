#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: head of list
 * @n: data of the node
 * Return: adress of the new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp;
dlistint_t *node;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);
node->n = n;
node->prev = NULL;
node->next = NULL;

tmp = *head;
if (*head == NULL)
{
*head = node;
return (node);
}

while (tmp->next)
tmp = tmp->next;
node->prev = tmp;
tmp->next = node;
return (node);
}
