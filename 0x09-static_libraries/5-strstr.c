#include <string.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: string that needs to be searched.
 * @needle: the substring that needs to be located.
 *
 * Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	if (needle_len > haystack_len)
		return ('\0');

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		int j;

		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == needle_len)
			return (haystack + i);
	}
	return ('\0');
}
