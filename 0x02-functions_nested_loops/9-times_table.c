#include "main.h"
#include <stdio.h>
/**
 * *times_table - times_table
 * main - check the code.
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int total;

	for (x = 0 ; x < 9 ; x++)
	{
	for (y = 0 ; y < 9 ; y++)
	{
	total = x * y;
	if (total > 9)
	{
	_putchar('0' + total / 10);
	_putchar('0' + total % 10);
	}
	else if (y != 0)
	{
	_putchar(' ');
	_putchar('0' + total);
	}
	else
	{
	_putchar('0' + total);
	}
	if (y != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
