#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - creates an array of strings and fills it
 * with words from given array
 * @str: passed string.
 * Return: Array of strings.
 */

char **strtow(char *str)
{
	char **s;
	int i, j, k, l = 0, m = 0, n = 0, height;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0, height = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	}
	s = (malloc((1 + height) * sizeof(char *)));
	if (s == NULL)
		return (s);
	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] != ' '))
		{
			l = i, m = j, n = k;
			for (k = 0; str[i] != ' '; i++, k++)
				;
			s[j] = malloc((1 + k) * sizeof(char));
			if (s[j] == NULL)
			{
				for (l = 0; l < j; l++)
					free(s[l]);
				free(s);
			}
			for (n = 0; str[l] != ' '; l++, n++)
				s[m][n] = str[l];
			s[m][n] = '\0', j++, i--;
		}
	}
	s[j] = NULL;
	return (s);
}
