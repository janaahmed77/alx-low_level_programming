#include <stdio.h>

/**
 * swap_int - Prints an integer
 * @a: The integer to be printed
 * @b: The integer to be printed
 */
void swap_int(int *a, int *b)
{
	int to = *a;
	*a = *b;
	*b = to;
}
