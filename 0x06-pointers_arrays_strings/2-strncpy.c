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
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	if (len < n)
	{
		while (dest[i] != '\0')
			dest[i] = '\0';
	}
	return (dest);
}
