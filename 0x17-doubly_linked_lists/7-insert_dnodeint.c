#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: head
 * @idx: index
 * @n: int in node
 * Return: adress of new node, NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node;
dlistint_t *tmp = *h;
unsigned int i = 0;

if (idx == 0)
{
node = add_dnodeint(h, n);
return (node);
}

else if (*h == NULL)
return (NULL);

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->prev = NULL;
node->next = NULL;

while (i < idx - 1)
{
if (tmp == NULL)
return (NULL);
tmp = tmp->next;
i++;
}
node->prev = tmp;
if (tmp->next)
{
node->next = tmp->next;
tmp->next->prev = node;
tmp->next = node;
}
return (node);
}
