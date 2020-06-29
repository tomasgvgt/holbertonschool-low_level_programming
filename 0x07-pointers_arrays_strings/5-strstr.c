#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack. man strstr
 * @haystack: string.
 * @needle: substring.
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i, j, k;

	if (needle[0] == '\0')
	{
		p = &haystack[0];
		return (p);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			for (j = 0, k = i; needle[j] != '\0'; j++, k++)
			{
				if (haystack[k] != needle[j])
					break;
				else if (needle[j + 1] == '\0')
					return (p);
			}
		}
	}

	p = '\0';
	return (p);
}
