#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b. man memset.
 * @s: string.
 * @b: Constant byte.
 * @n: Bytes of memory.
 * Return: pointer to string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
