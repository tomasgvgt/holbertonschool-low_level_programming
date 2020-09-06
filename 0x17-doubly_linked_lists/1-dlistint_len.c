#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: head of the list
 * Return: Number of elements if the list
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp;
size_t i = 0;

tmp = h;
while (tmp)
tmp = tmp->next, i++;

return (i);
}
