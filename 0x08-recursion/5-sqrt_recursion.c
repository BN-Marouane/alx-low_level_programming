#include "main.h"

/**
 * sqrt_helper - a helper function for _sqrt_recursion that uses binary search
 * @n: the number to compute the square root of
 * @low: the lower bound of the search
 * @high: the upper bound of the search
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int sqrt_helper(int n, int low, int high)
{
	int guess, guess_squared;

	guess = (low + high) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (low == high)
		return (-1);
	else if (guess_squared < n)
		return (sqrt_helper(n, guess + 1, high));
	else
		return (sqrt_helper(n, low, guess - 1));
}



/**
 * _sqrt_recursion - computes the square root of a number using recursion
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (sqrt_helper(n, 1, n));
}
