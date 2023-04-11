#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char putch[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(putch[i]);
	}
	_putchar('\n');
	return (0);
}
