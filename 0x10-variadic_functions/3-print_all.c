#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all parameters.
 * @format: List of types of arguments passed to the function.
 */

void print_all(const char *const format, ...)
{
	int i = 0, is_format = 0;
	char *string;
	va_list list;

	if (format == NULL)
		return;
	va_start(list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			is_format = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), is_format = 1;
			break;
		case 'f':
			printf("%f", (float)va_arg(list, double)), is_format = 1;
			break;
		case 's':
			string = va_arg(list, char *);
			if (string == NULL)
			{
				printf("(nil)"), is_format = 1;
				break;
			}
			printf("%s", string), is_format = 1;
			break;
		default:
			is_format = 0;
			break;
		}
		if (is_format == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
