#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet_x10
 *
 * Description: Prints alphabet in one line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letters = 'a';
	int n;

	for (n = 0; n < 10; n++)
	{
	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
	_putchar(letters);
	}
	_putchar('\n');
	}
}
