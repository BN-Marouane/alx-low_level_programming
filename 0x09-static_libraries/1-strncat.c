#include <stdlib.h>
#include <string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: pointer to dest input.
 * @src: pointer to src input.
 * @n: numbers of bytes.
 *
 * Return: pointer to result.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *end = dest + strlen(dest);

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		end[i] = src[i];

	end[i] = '\0';

	return (dest);
}
