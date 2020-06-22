#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: pointer to intger.
 * @b: pointer to integer.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
