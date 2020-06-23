#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse by a newline
 * @s: string
 */

void print_rev(char *s)
{
int i = 0, j;

while (s[i] != '\0')
i++;

j = i - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
