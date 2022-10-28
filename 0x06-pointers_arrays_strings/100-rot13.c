#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: input string
 * Return: thepointer of the dest
 */

char *rot13(char *s)
{
	int i, j;
	char *x = "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "stuvwxyzabcdefghijklmnoprSTUVWXYZABCDEFGHIJKLMNOPQR";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[i])
				s[i] = y[j];
			break;
		}
	}
	return (s);
}
