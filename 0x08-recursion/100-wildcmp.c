#include "holberton.h"

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == *s2 || *s2 == 42) && (*(s1 + 1) == '\0' && *(s2 + 1) == '\0'))
		return (1);
	else if ((*s1 != *s2) && (*s2 != 42))
		return (0);
	if (*s2 == 42 && (*(s1 + 1) != '\0') && (*(s1 + 1) != *(s2 + 1)))
		return (wildcmp(s1 + 1, s2));
	return (wildcmp(s1 + 1, s2 + 1));
}
