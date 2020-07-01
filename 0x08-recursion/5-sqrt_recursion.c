#include "holberton.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number.
 * Return: Natural square root of a number, -1 if there is no squaee root.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	return (elevation(n, root));
}

/**
 * elevation - Checks if a number is the square root of anotherone.
 * @n: Number.
 * @root: possible square root
 * Return: The square root of n, -1 if n doestn have a squre root.
 */

int elevation(int n, int root)
{
	if (n == root * root)
		return (root);
	else if (n < root * root)
		return (-1);
	return (elevation(n, root + 1));
}
