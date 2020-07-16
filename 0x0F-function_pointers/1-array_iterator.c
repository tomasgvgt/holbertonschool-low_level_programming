#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - applys a function to each element of array
 * @size: size of the passed array.
 * @array: passed array.
 * @action: pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
