#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @x: param x
 * Return: string
 */

char *leet(char *x)
{
	int i, j;
	char s1[] = "AaEeOoTtLl";
	char s2[] = "4433007711";
	for (i = 0 ; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == s[j])
			{
				x[i] = s2[j];
			}
		}
	}
	return (x);
}

