#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line.
 *@a: array to be printed.
 *@n: number of elements of the array.
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
else
printf("\n");
 i++;
}
}
