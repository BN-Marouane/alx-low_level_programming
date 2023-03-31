
/**
 * _strncpy - function that copies a string.
 *
 * @dest: pointer to dest input.
 * @src: pointer to src input.
 * @n: numbers of bytes.
 *
 * Return: pointer to result.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
