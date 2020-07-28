#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head node.
 * Return: number of nodes in linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	for (count = 0; ptr != NULL; count++)
		printf("%d\n", ptr->n), ptr = ptr->next;

	return (count);
}
