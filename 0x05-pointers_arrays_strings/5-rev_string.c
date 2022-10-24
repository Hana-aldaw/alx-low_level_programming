#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char tmp;
	int i, length1, length2;

	length1 = 0;
	lenght2 = 0;

	while (s[lenght1] != '\0')
		lenght1++;

			length2 = length1 - 1;
			for (i = 0; i < length1; i++)
			{
				tmp = s[i];
				s[i] = s[length2];
				s[lenth2] = tmp;
				length2 = 1;
			}
}
