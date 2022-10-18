#include "main.h"
#include <man isalpha>
/**
 * _isalpha - checks for alphabetic char
 * @c: char to be checked
 *
 * Return: 1 if char is a letter,othrwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
