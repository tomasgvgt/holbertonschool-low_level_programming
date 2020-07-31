#include "holberton.h"

/**
 * get_bit - returns the value of a bit in a given index.
 * @n: number.
 * @index: index.
 * Return: value of a bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	long int shifted_index, shifted_oneplusindex;
	char bit;

	if (index >= (8 * sizeof(n)))
		return (-1);

	shifted_index = n >> index;
	shifted_oneplusindex = n >> (index + 1);
	bit = shifted_index ^ (shifted_oneplusindex << 1);
	return (bit);
}
