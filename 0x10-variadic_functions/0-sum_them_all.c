#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments to be added
 * @...: variable number of arguments
 * Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	i = sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);


	va_end(ap);
	return (sum);
}

