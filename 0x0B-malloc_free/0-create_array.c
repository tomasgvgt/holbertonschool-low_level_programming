#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it to a given char.
 * @size: size of buffer.
 * @c: char
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size);

	if (str == NULL)
		return (str);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
