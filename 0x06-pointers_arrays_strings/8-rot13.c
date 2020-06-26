#include "holberton.h"

/**
 * rot13 - codes a string to rot13 code
 * @s: string
 * Return: pointer to converted string.
 */

char *rot13(char *s)
{
	int i, j;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
