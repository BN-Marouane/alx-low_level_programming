#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: holds the number of arguments passed.
 * @argv: array pointer that holds the arguments passed.
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);

	return (0);
}
