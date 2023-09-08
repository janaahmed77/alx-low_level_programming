#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt;

	for (txt = 'a'; txt <= 'z'; txt++)
	{
	if (txt != 'q' && txt != 'e')
		putchar(txt);
	}
	putchar('\n');
	return (0);
}
