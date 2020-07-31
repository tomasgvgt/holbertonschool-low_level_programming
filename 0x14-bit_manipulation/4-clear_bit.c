#include "holberton.h"

/**
 * clear_bit - Sets the bit in index to 0.
 * @n: pointer to number.
 * @index: index.
 * Return: 1 success, -1 failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 8 * sizeof(*n))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
