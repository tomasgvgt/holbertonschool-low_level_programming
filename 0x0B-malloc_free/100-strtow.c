#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

char **strtow(char *str)
{
	char **s;
	int i, j, k, l = 0, height;

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
			for (k = 0; str[i] != ' '; i++, k++)
				;
			s[j] = malloc((1 + k) * sizeof(char));
			if (s[j] == NULL)
			{
				for (l = 0; l < j; l++)
					free(s[l]);
				free(s);
			}
			j++, i--;
		}
	}
	fill_array(str, s);
	return (s);
}

char **fill_array(char *str, char **s)
{
	int i, j, k;

	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] != ' '))
		{
			for (k = 0; str[i] != ' '; i++, k++)
				s[j][k] = str[i];
			s[j][k] = '\0', j++, i--;
		}
	}
	s[j] = NULL;
	return (s);
}
