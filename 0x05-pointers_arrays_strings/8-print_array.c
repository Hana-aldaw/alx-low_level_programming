#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: number of values
 * @a: array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar("%d", a[x]);
		if (x != n - 1)
			_putchar(", ");
	}
	_putchar("\n");
}
