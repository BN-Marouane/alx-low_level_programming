#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: print alphabets lowercase and uppercase
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ch_upper = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (ch_upper <= 'Z')
	{
		putchar(ch_upper);
		++ch_upper;
	}
	putchar('\n');
	return (0);
}
