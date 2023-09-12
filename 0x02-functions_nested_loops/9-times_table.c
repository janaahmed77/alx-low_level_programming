#include "main.h"
#include <stdio.h>
/**
 * *times_table - times_table
 * main - check the code.
 * Return: Always 0.
 */
void times_table(void)
{
	int x;

	for (x = 0 ; x < 81 ; x++)
	{
	_putchar('0' + x / 10);
	_putchar('0' + h % 10);
	_putchar(' , ');
	_putchar('\n');
	}
}
