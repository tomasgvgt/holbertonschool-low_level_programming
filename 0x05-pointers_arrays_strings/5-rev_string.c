#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: pointer to string
 */

void rev_string(char *s);
{
	int i, j, len;
	char c;

	for (len = 0; s[len] != '\0'; len++)
		;
	len++;
	for (i = 0, j = len - 1; i <= len / 2; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
