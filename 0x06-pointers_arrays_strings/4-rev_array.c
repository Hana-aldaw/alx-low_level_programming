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
	int temp;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
