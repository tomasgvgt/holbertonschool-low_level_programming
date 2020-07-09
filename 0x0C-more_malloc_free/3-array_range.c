#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Creates an array of int
 * and sets it to values from min to max.
 * @min: minimum value for the array.
 * @max: maximum value for the array.
 * Return: Pointer to the allocated memory, NULL if fails.
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((1 + max - min) * sizeof(int));
	if (p == NULL)
		return (p);

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
