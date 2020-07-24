#include "lists.h"

/**
 * add_node_end - adds node to the end of a linked list
 * @head: head.
 * @str: string.
 * Return: adress of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *ptr;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *temp;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
