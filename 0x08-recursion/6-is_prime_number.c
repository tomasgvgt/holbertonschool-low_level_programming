#include "holberton.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: number
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n < 2)
		return (0);
	return (division_test(n, divisor));
}

/**
 *division_test - Test for posiible divisors of a number.
 * @n: number.
 * @divisor: possible divisor of the number.
 * Return: 0 if it has divisors, 1 if not.
 */

int division_test(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	else if (divisor > n / 2)
		return (1);
	return (division_test(n, divisor + 1));
}
