#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numberd from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
