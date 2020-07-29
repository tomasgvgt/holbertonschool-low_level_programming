#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL.
 * @head: double pointer to head node.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (*head != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
