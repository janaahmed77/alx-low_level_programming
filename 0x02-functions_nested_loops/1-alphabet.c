#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Description: Prints alphabet in one line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	_putchar(alphabet);

	_putchar('\n');
}
