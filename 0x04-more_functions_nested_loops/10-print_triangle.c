#include "main.h"
/**
 * print_triangle - return num without 2,4
 *@size: n is underscore
 * Return: Always
 */
void print_triangle(int size)
{
	int rows = size;

	for (int i = 1; i <= rows; i++)
	{
	for (int j = 1; j <= rows - i; j++)
	{
	printf(" ");
	}
	for (int k = 1; k <= i; k++)
	{
	printf("#");
	}
	printf("\n");
	}

	return (0);
}
