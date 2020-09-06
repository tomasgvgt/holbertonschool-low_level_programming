#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of the list
 * @index: index
 * Return: Nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp;

if (!head)
return (NULL);

tmp = head;
while (i < index)
{
tmp = tmp->next;
if (!tmp)
return (NULL);
i++;
}
return (tmp);
}
