#include "main.h"
#include <stdio.h>
/**
 * *print_last_digit - print_last_digit
 * @a: The loweer to checked
 * main - check the code.
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	int c;

	if (a < 0)
	{
	c = -1 * (a % 10);
	_putchar(c + '0');
	return (c);
	}
	else
	{
	c = a % 10;
	_putchar(c + '0');
	return (c);
	}
}
