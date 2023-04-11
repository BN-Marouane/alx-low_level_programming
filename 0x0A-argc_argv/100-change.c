#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that  prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: holds the number of arguments passed.
 * @argv: array pointer that holds the arguments passed.
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
