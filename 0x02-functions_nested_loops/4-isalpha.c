#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: char is going to check
 *
 * Return: 1if char is letter lowr or upper, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
