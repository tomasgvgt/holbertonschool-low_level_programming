#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all numbers passed as parameters.
 * @separator: String to be printed between numbers.
 * @n: number of arguments passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	va_start(num_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(num_list);
	printf("\n");
}
