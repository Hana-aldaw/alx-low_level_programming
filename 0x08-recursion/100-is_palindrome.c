#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int x;
	x = _strlen_recursion(s);

	if (x == 0 || x == 1)
		return (1);
	else
	return (_compareends(s, 0, x - 1));
}
