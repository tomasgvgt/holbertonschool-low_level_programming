#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position.
 * @head: double pointer to head node.
 * @idx: index of the list for the node to be added.
 * @n: content of node.
 * Return: adress of new node, NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		new->next = tmp;
		return (new);
	}
	while (position < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		position++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
