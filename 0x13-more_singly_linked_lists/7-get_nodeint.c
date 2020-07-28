#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of listint_t list.
 * @head: pointer to head node.
 * @index: index of node.
 * Return: Nth node, NULL if it doesnt exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int nth = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (nth < index)
	{
		temp = temp->next;
		nth++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
