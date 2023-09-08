#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	char letter1 = 'A';

	while (letter1 <= 'Z')
	{
	putchar(letter1);
	letter1++;
	}

	putchar('\n');

	return (0);
}