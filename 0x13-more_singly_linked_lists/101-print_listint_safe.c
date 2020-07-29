#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list
 * including the ones with loops.
 * @head: pointer to head node.
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t count = 0, loop_flagg = 0;

	if (head == NULL)
		exit(98);
	ptr1 = head;
	ptr2 = check_if_loop(head);
	while (ptr1)
	{
		if (ptr1 == ptr2 && loop_flagg == 0)
			loop_flagg = 1;
		else if (ptr1 == ptr2 && loop_flagg == 1)
			break;
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);
		ptr1 = ptr1->next;
		count++;
	}
	return (count);
}

/**
 * check_if_loop - checks if there is a loop in a listint_t linked list.
 * @h: pointer to head pointer.
 * Return: NUll if there is no loop, pointer to loop start if there is a loop.
 */

const listint_t *check_if_loop(const listint_t *h)
{
	const listint_t *p1 = h;
	const listint_t *p2 = h;

	while (p1 && p2 && p2->next)
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
			return (start_of_loop(p1, h));
	}
	return (NULL);
}

/**
 * start_of_loop - Searches for the start of a loop in a listint_t list.
 * @p1: pointer passed.
 * @h: head of linked list.
 * Return: Pointer to adress where loop starts.
 */

const listint_t *start_of_loop(const listint_t *p1, const listint_t *h)
{
	const listint_t *p2 = h;

	while (p1 != p2)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return (p1);
}
