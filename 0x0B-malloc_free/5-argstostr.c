#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr  - Concatenates arguments of the program
 * @ac: Argument counter
 * @av: Argument vector.
 * Return: pointer to string.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++, size++)
	{
		for (j = 0; av[i][j] != '\0'; j++, size++)
			;
	}
	s = malloc(1 + size * sizeof(char));
	if (s == NULL)
		return (s);

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
	}
	s[k] = '\0';
	return (s);
}
