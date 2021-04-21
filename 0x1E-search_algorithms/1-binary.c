#include "search_algos.h"

/**
* binary_search - Implements binary search algorithm in an array of integers.
* @array: array.
* @size: size of array.
* @value: value to search for.
* Return: place of the value in the array.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid = 0;
	size_t high = size - 1;
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}
		while (low <= high)
		{
			mid = ((high - low) / 2) + low;
			if (value == array[mid])
				return (mid);
			else if (value < array[mid])
				high = mid - 1;
			else
				low = mid + 1;
			if (mid < high || high == mid - 1)
				printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i < high)
					printf(", ");
				else
					printf("\n");
			}
		}
	}
	return (-1);
}
