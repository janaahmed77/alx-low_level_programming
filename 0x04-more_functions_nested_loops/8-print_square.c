#include "main.h"
/**
 * print_square - return num without 2,4
 *@size: n is underscore
 * Return: Always
 */
void print_square(int size)
{
int j;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (j = 0 ; j < size ; j++)
	{
	_putchar ('#');
	}
	_putchar ('\n');
	}
}
