#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string.
 * @str: original string.
 * Return: Pointer to a new string, NULL if str == NULL, or if it fails.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int size = 1, i = 0;

	if (str == NULL)
		return (str);

	while (str[size] != '\0')
		size++;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (s);

	i = 0;
	while (i < size)
		s[i] = str[i], i++;

	return (s);
}
