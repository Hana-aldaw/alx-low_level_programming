#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * @c: is the char that we want to check
 *
 * Returns: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
