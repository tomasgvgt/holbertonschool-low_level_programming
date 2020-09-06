#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beggining of a linked list
 * @head: head of the list
 * @n: data inside the node
 * Return: adress of new node, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);

node->n = n;
node->prev = NULL;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (node);
}

(*head)->prev = node;
node->next = *head;
*head = node;

return (node);
}
