#include "holberton.h"

/**
 *_strcpy - copyes a string src to dest
 *including the null byte.
 *@src: Source.
 *@dest: Destination.
 *Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (i != '\0')
{

dest[i] = src[i];
i++;

}

dest[i] = '\0';

return (dest);
}
