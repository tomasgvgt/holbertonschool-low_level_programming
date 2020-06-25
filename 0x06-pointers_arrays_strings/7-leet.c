#include "holberton.h"

/**
 * leet - changes a string to 1337 code
 * @s: string
 * Return: pointer to converted string.
 */

char *leet(char *s)
{
	int i, j;
	char ch[] = "A, a, E, e, O, o, T, t, L, l";
	char num[] = "4, 4, 3, 3, 0, 0, 7, 7, 1, 1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
				s[i] = num[j];
		}
	}
	return (s);
}
