#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x1 = 1;
	long int x2 = 2;
	long int next;
	long int sum = 0;

	while (x1 <= 4000000)
	{
	if (x1 % 2 == 0)
	sum = x1 + sum
	next = x1 + x2;
	x1 = x2;
	x2 = next;
	}
	printf("%ld", sum);
	return (0);
}
