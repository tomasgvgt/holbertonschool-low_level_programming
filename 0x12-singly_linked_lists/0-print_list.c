#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a linked list.
 * @h: head.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		++count;
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
