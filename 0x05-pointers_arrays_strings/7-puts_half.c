#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int i, len;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
