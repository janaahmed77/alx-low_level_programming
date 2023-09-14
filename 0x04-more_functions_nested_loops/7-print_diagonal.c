#include "main.h"
/**
 * print_diagonal - return num without 2,4
 *@n: n is underscore
 * Return: Always
 */
void print_diagonal(int n)
{
int j;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (j = 0 ; j < n ; j++)
	{
	_putchar (' ');
	}
	_putchar ('\\');
	_putchar ('\n');
	}
}
