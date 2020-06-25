#include "holberton.h"

/**
 * _strncat - Concatenates two strings up to n bytes of src,
 * man strncat.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes of src to be concatenated.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
