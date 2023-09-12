#include "main.h"
#include <stdio.h>
/**
 * *jack_bauer - jack_bauer
 * main - check the code.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0 ; h < 24 ; h++)
	{
	for (m = 0 ; m < 60 ; m++)
	{
	_putchar('0' + h);
	_putchar('0' +  m);
	_putchar(':');
	_putchar('\n');
	}
}
}
