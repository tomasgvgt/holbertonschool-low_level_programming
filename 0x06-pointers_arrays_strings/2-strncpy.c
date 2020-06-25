#include "holberton.h"

/**
 *_strncpy - copyes n bytes of string src to dest,
 *including the null byte.
 *man strncpy.
 *@src: Source.
 *@dest: Destination.
 *@n: bytes to be copied.
 *Return: Pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}
