#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void main(void)
{
	int i;
	int sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	sum = i + sum;
	}
	printf("%d", sum);
}
