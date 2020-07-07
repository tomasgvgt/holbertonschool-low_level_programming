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
	unsigned int i = 1;

	if (str == NULL)
		return (str);

	while (str[i] != '\0')
		i++;

	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (s);

	i = 0;
	while (str[i] != '\0')
		s[i] = str[i], i++;
	s[i] = '\0';

	return (s);
}
