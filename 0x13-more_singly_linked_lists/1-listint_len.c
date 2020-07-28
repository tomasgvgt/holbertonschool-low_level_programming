#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t linked list.
 * @h: pointer to head node.
 * Return: # of elements (Nodes).
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	while (p != NULL)
		p = p->next, count++;

	return (count);
}
