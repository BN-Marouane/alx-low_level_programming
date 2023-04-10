#include <string.h>
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: First string input.
 * @s2: Second string input.
 *
 * Return: The difference.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;
	}

	return (strlen(s1) - strlen(s2));
}
