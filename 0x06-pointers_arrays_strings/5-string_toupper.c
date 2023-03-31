/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: string input.
 *
 * Return: Uppercase string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
