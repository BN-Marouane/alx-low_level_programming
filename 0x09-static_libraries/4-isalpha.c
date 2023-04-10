#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Check for alphabet character
 *
 * @c : The character to check.
 *
 * Return: 1 if alpha and 0 if not.
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	return (0);
}
