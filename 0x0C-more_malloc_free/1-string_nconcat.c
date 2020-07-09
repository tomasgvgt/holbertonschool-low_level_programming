#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes of s2.
 * Return: Pointer to the new created string. NULL if fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s1[len2] != '\0'; len2++)
		;

	if (n >= len2)
		s3 = malloc((1 + len1 + len2) * sizeof(char));
	else
		s3 = malloc((1 + len1 + n) * sizeof(char));
	if (s3 == NULL)
		return (s3);

	for (i = 0, j = 0; j < len1; i++, j++)
		s3[i] = s1[j];
	if (n >= len2)
	{
		for (j = 0; j < len2; i++, j++)
			s3[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; i++, j++)
			s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
