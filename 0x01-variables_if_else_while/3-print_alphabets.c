#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;
	
	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return(0);
}
