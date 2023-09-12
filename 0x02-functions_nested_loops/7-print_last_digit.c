#include "main.h"
#include <stdio.h>
/**
 * *print_last_digit - print_last_digit
 * @n: The loweer to checked
 * main - check the code.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
	_putchar(n + '0');
	return (n % 10);
	}
	else
	{
	_putchar(n + '0');
	return (-n % 10);
	}
}
