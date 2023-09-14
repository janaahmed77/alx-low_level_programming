#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = size; j > 0; j--)
	{
	if (j <= i)
	{
	_putchar('#');
	}
	else
	{
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
	}
}
