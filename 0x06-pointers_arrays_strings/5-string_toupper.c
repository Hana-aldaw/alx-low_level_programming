#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @ a: string param
 * Return: string
 */
char *string_toupper(char *a)
{
	int i = 0;

	    while (a[i])
	    {
		    if (a[i] >= 97 && x[i] <= 122)
			    a[i] = a[i] - 32;
		    i++;
	    }
	    return (a);
}
