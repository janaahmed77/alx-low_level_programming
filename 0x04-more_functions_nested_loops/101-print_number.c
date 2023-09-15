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
	if (num == 0)
	{
	_putchar('0');
	return;
	}
	unsigned int divisor = 1;

	while (num / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	_putchar((num / divisor) + '0');
	num %= divisor;
	divisor /= 10;
	}
}
