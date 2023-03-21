#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
