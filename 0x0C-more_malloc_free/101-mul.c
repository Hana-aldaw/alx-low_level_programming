#include <stdio.h>
#include "main.h"

int find_len(char *str);

/**
 * find_len - find the lenght of string
 * @str: string
 *
 * Return: the length
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

