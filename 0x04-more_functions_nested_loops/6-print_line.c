#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: integar
 *
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
