#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, j, aux;

	j = n - 1;
	n = n / 2;
	for (i = 0; i < n; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
