#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints all strings passed as parameters.
 * @separator: String to be printed between strings.
 * @n: number of parameters passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;

	va_start(str_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(str_list, char *));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(str_list);
	printf("\n");
}
