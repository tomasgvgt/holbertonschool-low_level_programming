#include "holberton.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char h[] = "Holberton";
	int i = 0;

	while (h[i] != '\0')
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
