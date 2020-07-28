#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL.
 * @head: double pointer to head node.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (*head == NULL)
		return;
	tmp1 = *head;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*head = NULL;
}
