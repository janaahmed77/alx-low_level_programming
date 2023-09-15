#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int n = n 

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	int reversed = 0;
	int digit;

	while (n > 0)
	{
	digit = n % 10;
	reversed = reversed * 10 + digit;
	n /= 10;
	}
	while (reversed > 0)
	{
	digit = reversed % 10;
	_putchar(digit + '0');
	reversed /= 10;
	}
}
