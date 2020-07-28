#include "lists.h"

/**
 * sum_listint - Returns the sum of all data of a listint_t list
 * @head: pointer to head node.
 * Return: Sum of all data, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp != NULL)
		sum += tmp->n, tmp = tmp->next;
	return (sum);
}
