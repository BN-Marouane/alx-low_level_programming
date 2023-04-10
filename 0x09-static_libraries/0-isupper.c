#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * @c : character to check.
 *
 * Return: 1 if c uppercase and 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
