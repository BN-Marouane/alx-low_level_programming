#include <stdlib.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer to array.
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;

		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
