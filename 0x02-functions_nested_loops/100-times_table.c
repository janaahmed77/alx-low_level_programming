#include "main.h"
#include <stdio.h>
/**
 * *print_times_table - print_times_table
 * @n: The end number
 * main - check the code.
 * Return: Alwajs 0.
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	return;

	for (i = 0 ; i <= n ; i++)
	{
	for (j = 0 ; j <= n ; j++)
	{
	if (j == 0)
	{
	printf("%d", j * i);
	}
	else
	{
	printf("%4d", j * i);
	}
	if (j < n)
	printf(", ");
	else
	printf("\n");
	}
	}

	return;
}
