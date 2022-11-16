#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: argument count
 * @av: arguments vector
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c;
	int i;
	int j;
	int ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0;
