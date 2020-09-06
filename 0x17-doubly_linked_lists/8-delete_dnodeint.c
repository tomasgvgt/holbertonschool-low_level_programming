#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given position
 * @head: head
 * @index: index
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
if (tmp->next)
{
*head = tmp->next;
(*head)->prev = NULL;
}
else
*head = NULL;
free(tmp);
return (1);
}

while (i < index)
{
tmp = tmp->next;
if (tmp == NULL)
return (-1);
i++;
}
tmp->prev->next = tmp->next;
if (tmp->next)
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
