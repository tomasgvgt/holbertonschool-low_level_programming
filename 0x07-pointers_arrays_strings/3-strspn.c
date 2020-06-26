#include "holberton.h"

/**
 * _strspn - Gets the lenght of a prefix substring.
 * man strspn
 * @s: String.
 * @accept: Substring
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, count = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
			else
				break;
		}
	}
	return (count);
}
