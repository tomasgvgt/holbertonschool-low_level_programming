#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid  - Creates a 2d int array, and initializes it to 0.
 * @height: height of array.
 * @width: width of array.
 * Return: Pointer to a 2d array or NULL if failure.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(ptr[j]);
			free(ptr);
			ptr = NULL;
			return (ptr);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
