#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation.
 * @s: operator passed as argument.
 * Return: Pointer to correct function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
