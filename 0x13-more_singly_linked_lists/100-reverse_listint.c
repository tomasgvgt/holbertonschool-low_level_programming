#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: Double pointer to head node.
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	tmp1 = NULL;
	while (*head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		(*head) = tmp2;
	}
	*head = tmp1;
	return (*head);
}
