#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - applies function cmp to each element of an array.
 * @array: passed array of integers.
 * @size: size of the passed array.
 * @cmp: pointer to function that searches for integers.
 * Return: index of the first element for which the
 * cmp function does not return 0. -1 if no elements match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
			return (i);
	}
	return (-1);
}
