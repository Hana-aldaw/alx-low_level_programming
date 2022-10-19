#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting num
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_purchar("%d, ", n--);
		_putchar("%d\n", n);
	}
	else
	{
		while (n < 98)
			_purchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
