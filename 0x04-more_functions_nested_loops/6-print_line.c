#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: integar 
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	for (x = 0; x <= n; x++)
	{
		_putchar('_');
		_putchar('\n');
	}
	}
}
