#include <stdio.h>

/**
 * print_rev - to swap value
 * @s: The integer to be printed
 */
void print_rev(char *s)
{
	int lenght = strlen(s);
	int i;

	for (i = lenght - 1 ; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
	printf("\n");
}
