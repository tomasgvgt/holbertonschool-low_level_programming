#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr  - Concatenates arguments of the program
 * @ac: Argument counter
 * @av: Argument vector.
 * Return: pointer to string.
 */

char **strtow(char *str)
{
	char **s;
	int i, j, k, l, height;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/*count the number of words*/
	for (i = 0, height = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			height++;
	}
	height++;

	s = (malloc((1 + height) * sizeof(char *)));
	if (s == NULL)
		return (s);

	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++, k++)
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			s[j] = malloc((2 + k) * sizeof(char));
			if (s[j] == NULL)
			{
				for (l = 0; l < j; l++)
					free(s[l]);
				free(s);
				return (NULL);
			}
			s[j][k + 1] = '\0';
			i++, k = -1, j++;
		}
	}
	s[j] = NULL;
	for (i = 0, j = 0; s[j] != NULL; j++, i++)
	{
		for (k = 0; s[j][k] != '\0'; k++, i++)
			s[j][k] = str[i];
	}
	return (s);
}
