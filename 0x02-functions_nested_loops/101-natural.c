#include"main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i % 3 == 0)
	{
		if (i % 3 == 0)
			total += i;
	else if (i % 5 == 0)
		total += i;
	i++;
	}
	printf("%d\n", total);
	return (0);
}
