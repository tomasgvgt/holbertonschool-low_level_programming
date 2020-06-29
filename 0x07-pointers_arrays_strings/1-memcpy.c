#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * man memcpy.
 * @dest: destination string.
 * @src: Source string.
 * @n: Bytes of memory.
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
