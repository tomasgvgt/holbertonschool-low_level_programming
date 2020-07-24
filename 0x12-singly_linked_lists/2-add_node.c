#include "lists.h"

/**
 * add_node - adds node to the begining of a linked list
 * @head: head.
 * @str: string.
 * Return: adress of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t temp = NULL;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
