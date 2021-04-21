#include "search_algos.h"


/**
* linear_search - Implements linear search algorithm in an array of integers.
* @array: array.
* @size: size of array.
* @value: value to search for.
* Return: place of the value in the array.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
