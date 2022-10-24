#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
				tmp = s[index];
				s[index] = s[len - index - 1];
				s[len - index - 1] = tmp;
			}
}
