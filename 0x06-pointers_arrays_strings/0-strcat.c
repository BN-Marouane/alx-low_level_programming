/**
 * _strcat - concatenates two strings.
 *
 * @dest: pointer to dist input.
 * @src: pointer to src input.
 *
 * Return: pointer to Result.
 */

char *_strcat(char *dest, char *src)
{
	int dc, sc;

	dc = 0;

	while (dest[dc])
		dc++;

	for (sc = 0; src[sc]; sc++)
		dest[dc++] = src[sc];

	return (dest);
}
