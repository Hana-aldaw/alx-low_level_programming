#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content
 *
 * @a: array a
 * @n: elements of the array
 */

void reverse_array(int *a, int n)
{
	int *x, i, aux, y;

	x = a;
	for (i = 0; i < n; i++)
		x++;
	for (y = 0; y < n; y++)
	{
		aux = a[y];
		a[y] = *x;
		*x = aux;
		x--;
	}
}
