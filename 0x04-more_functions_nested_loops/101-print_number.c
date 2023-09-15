#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
	_putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}
	unsigned int reversed = 0;
	unsigned int digit;

	while (num > 0)
	{
	digit = num % 10;
	reversed = reversed * 10 + digit;
	num /= 10;
	}
	while (reversed > 0)
	{
	digit = reversed % 10;
	_putchar(digit + '0');
	reversed /= 10;
	}
}
