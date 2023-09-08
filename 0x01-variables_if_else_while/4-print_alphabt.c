#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char letter1 = 'A';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	letter++;
	}
	}

	putchar('\n');

	return (0);
}
