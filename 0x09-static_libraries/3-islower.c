#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c : parameter for store character
 *
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
