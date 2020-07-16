#include "function_pointers.h"

/**
 * print_name - calls functions to print a name.
 * @name: name passed to the function;
 * @f: function that prints names.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);
	f(name);
}
