#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index.
 * @head: double pointer to head node.
 * @index: index node.
 * Return: 1 success, -1 failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int position = 1;

	if (*head == NULL)
		return (-1);
	tmp1 = *head;
	if (index == 0)
	{
		*head = tmp1->next;
		free(tmp1);
		return (1);
	}
	while (position < index)
	{
		if (tmp1 == NULL)
			return (-1);
		tmp1 = tmp1->next;
		position++;
	}
	tmp2 = tmp1->next;
	if (tmp2 == NULL)
		return (-1);
	tmp1->next = tmp2->next;
	free(tmp2);
	return (1);
}
