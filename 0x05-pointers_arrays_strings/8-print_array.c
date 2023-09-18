#include <stdio.h>

/**
 * print_array - Prints an integer
 * @a: The integer to be printed
 * @n: The integer to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}

	printf("\n");
}
