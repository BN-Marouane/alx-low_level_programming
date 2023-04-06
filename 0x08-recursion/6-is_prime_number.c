#include "main.h"

/**
 * is_prime_helper - helper.
 *
 * @n: the integer.
 * @i: var.
 *
 * Return: integer.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	else
		return (is_prime_helper(n, i + 6));
}


/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: the integer.
 *
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (is_prime_helper(n, 5));
}
