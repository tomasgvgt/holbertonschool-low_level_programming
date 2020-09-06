#include "lists.h"

/**
 * sum_dlistint - Sums all the data in a dlisint_t
 * @head: Head of list
 * Return: Sum of all de data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
int sum = 0;

if (head == NULL)
return (sum);

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
