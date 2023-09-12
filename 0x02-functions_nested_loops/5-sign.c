#include "main.h"
#include <stdio.h>
/**
 * *print_sign - print_sign
 * @n: The loweer to checked
 * main - check the code.
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > '0')
	{
	printf("+\n");
	return (1);
	}
	else if (n < '0')
	{
	printf("-\n");
	return (-1);
	}
	else
	{
	printf("0\n");
	return (0);
	}
}
