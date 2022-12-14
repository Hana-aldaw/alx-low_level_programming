#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the first element for which the cmp function does not return 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for  (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
