#include "holberton.h"

/**
 * is_palindrome - Returns if a string is palindrome.
 * @s:string
 * Return: 1 if s is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	char *c = s;
	int len = 0;

	return (move_pointer(s, c, len));
}

/**
 * move_pointer - moves pointer to end of string.
 * @s: pointer to string.
 * @c: pointer that moves to last char of string.
 * @len: lenght of string.
 * Return: Result of compare_letters.
 */

int move_pointer(char *s, char *c, int len)
{
	int i = 1;

	if (*(c + 1) == '\0')
	{
		return (compare_letters(s, c, len, i));
	}
	else
		return (move_pointer(s, c + 1, len + 1));
}

/**
 * compare_letters - compares the first with last letter from a string,
 * moving thouards the center, to find out if it is palindrome or not.
 * @s: pointer
 * @c: pointer 2
 * @len: lenght of string.
 * @i: counter.
 * Return: 0 if not palindrome, 1 if palindrome.
 */

int compare_letters(char *s, char *c, int len, int i)
{
	if (*s != *c)
		return (0);
	else if (*s == *c && i == len)
		return (1);
	return (compare_letters(s + 1, c - 1, len, i + 1));
}
