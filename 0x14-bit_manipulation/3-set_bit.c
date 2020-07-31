#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: passed number.
 * @index: Index.
 * Return: 1 if worked, -1 if it didnt.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(*n))
		return (-1);

	*n |= (1 << index);
	return (1);
}
