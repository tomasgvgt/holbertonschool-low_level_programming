#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{

while (head)
{
if (!head->next)
{
free(head);
break;
}
head = head->next;
free(head->prev);
}
}
