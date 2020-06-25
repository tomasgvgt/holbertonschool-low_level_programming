#include "holberton.h"

/**
 * cap_string - capitalizes a string
 * @s: string
 * Return: String capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
								'!', '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
