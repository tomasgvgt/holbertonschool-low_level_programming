#include <stdio.h>

#include <stdio.h>

/**
 * main - prints te largest prime factor of n
 * Return: 0 for sucess
 */

int main(void)
{
	long int num, divisor, possible_prime, counter, largest_prime;

	num = 612852475143, possible_prime = 1, largest_prime = 1;
	/*search for a possbile divisor.*/
	for (divisor = 1; divisor <= num / 2; divisor++)
	{
		if (num % divisor == 0) /*is a divisor*/
		{
			possible_prime = num / divisor;
			/*Search if possible_prime is prime*/
			for (counter = 2; counter <= possible_prime / 2; counter++)
			{
				/*Is not prime*/
				if (possible_prime % counter == 0 && counter < possible_prime / 2)
					break;
				/*Is prime*/
				if (counter == possible_prime / 2)
				{
					largest_prime = possible_prime;
					printf("%ld\n", largest_prime);
					return (0);
				}
			}
		}
	}
	return (0);
}
