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
	unsigned int size = 0, i = 0;

	if (str == '\0')
		return ('\0');

	while (str[size] != '\0')
		size++;

	s = malloc(1 + size * sizeof(char));
	if (s == '\0')
		return ('\0');

	i = 0;
	while (i < size)
		s[i] = str[i], i++;

	return (s);
}
