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
	char *clone, *realloc;
	unsigned int i;

	if (ptr != NULL)
			clone = ptr;

	else
	{
	       return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	relloc = malloc(new_size);

			if (relloc == NULL)
			return (NULL);

			for (i = 0; i < (old_size || i < new_size); i++)
				*(relloc + i) = clone[i];

			free(ptr);
			return (relloc);
}
