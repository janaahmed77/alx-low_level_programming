#include "main.h"
#include <stdio.h>
/**
 * *times_table - times_table
 * main - check the code.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if(n <= 98)
	{
	for (i = n ; i <= 98 ; i++)
	printf("%d" , n);
	if(i != 98)
	{
	printf(", ");
	}
	}
	else
	{
	for (i = n ; i <= 98 ; i--)
	{
	printf("%d" , n);
	if(i != 98)
	{
	printf(", ");
	}
	}
	}
	printf("\n")
}