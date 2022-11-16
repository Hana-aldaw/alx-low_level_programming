#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @size: the size of array
 * @action: pointer to the function you need to use
 * @array: the array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)

		action(array[i]);
}
