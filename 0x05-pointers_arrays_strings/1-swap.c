#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 *
 * @a: pointer of int a
 * @b: pointer of int b
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
