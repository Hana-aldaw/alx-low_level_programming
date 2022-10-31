#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory
 * @src: source memory
 * @n: numbers of bytes to copy
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
