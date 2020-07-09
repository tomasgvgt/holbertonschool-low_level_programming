#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocates a block of memory using malloc.
 * @b: size of the block of memory to be allocated.
 * Return: Pointer to allocated memory. Exit 98 if fail.
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
