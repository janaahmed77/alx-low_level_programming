#include "main.h"
#include <stdio.h>
/**
 * *times_table - times_table
 * @n: The end number
 * main - check the code.
 * Return: Alwajs 0.
 */
void times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	return (0);

	for (i = 0 ; i <= n ; i++)
	{
	for (j = 0 ; j <= n ; j++)
	{
	if (j == 0)
	printf("%d", j * i);
	else
	{
	printf(", %d", j * i);
	}
	}
	printf("\n");
	}

	return (0);
}
