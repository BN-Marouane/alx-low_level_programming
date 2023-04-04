/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to string.
 * @accept: substring.
 *
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found = 0;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			return (count);

		count++;
		s++;
	}
	return (count);
}
