#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * man strpbrk
 * @s: String.
 * @accept: set of bytes.
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * Null if character not found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int j;

	for (p = s; *p != '\0'; p++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*p == accept[j])
				return (p);
		}
	}
	/**
	 * *p = '\0'
	 * return (p);
	 */
	return ('\0');
}
