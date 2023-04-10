#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digit (0 through 9).
 *
 * @c : input to check.
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
