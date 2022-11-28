#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * @c: is the char that we want to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
