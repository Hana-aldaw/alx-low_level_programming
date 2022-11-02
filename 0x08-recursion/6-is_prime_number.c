#include "main.h"

/**
 * is_prime_number -  return 1 if a prime number, otherwise return 0
 * @n: number
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (is_prime(n, n / 2));
}
