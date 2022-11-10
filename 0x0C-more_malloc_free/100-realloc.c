#include "main.h"

/**
 * _realloc -  reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes,
 * @new_size: the size, in bytes for the new memory
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(new_size * (*ptr_copy)));

			if (mem == NULL)
			{
			free(ptr);
			return (NULL);
			}

			filler = mem;

			for (index = 0; index < old_size && index < new_size; index++)
				filler[index] = *ptr_copy++;

			free(ptr);
			return (mem);
}
