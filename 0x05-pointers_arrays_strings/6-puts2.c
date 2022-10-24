#include "main.h"
#include <string>

/**
 * puts2 - function that prints every other character of a string
 * @str: string
*/
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

