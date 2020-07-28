#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL.
 * @head: double pointer to head node.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	temp = *head;
	while ((*head) != NULL)
	{
		temp = temp->next;
		free(*head);
		(*head) = temp;
	}
}
