#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat  - Concatenates two strings.
 * @s1: String 1.
 * @s2:string 2.
 * Return: Pointer to a new string, NULL if failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	/*add size of s1 to size of s2*/
	i += j;

	s3 = malloc(1 + i * sizeof(char));
	if (s3 == NULL)
		return (s3);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';

	return (s3);
}
