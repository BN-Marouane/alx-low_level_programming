#include <stdio.h>

/**
 * main - entry point
 *
 * Description: all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
