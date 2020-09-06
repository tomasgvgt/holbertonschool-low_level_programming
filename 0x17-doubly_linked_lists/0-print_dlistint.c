#include "lists.h"

/**
 * print_dlistint - Prints all the elelments of a dlistint_t list
 * @h: head of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
size_t i = 0;

tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
