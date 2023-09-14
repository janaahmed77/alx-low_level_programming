#include "main.h"
/**
 * print_square - return num without 2,4
 *@size: n is underscore
 * Return: Always
 */
void print_triangle(int size)
{
int j;
int s;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (s = 0 ; s < size ; s++)
	{
	for (j = 0 ; j < size -s ; j++)
	{
	_putchar ('#');
	}
	_putchar ('\n');
	}
	}
}
