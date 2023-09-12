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
	int i;
	long int next;

	printf("%ld, %ld, ", x1, x2);
	for (i = 3 ; i <= 50 ; i++)
	{
	next = x1 + x2;
	printf("%ld, ", next);
	x1 = x2;
	x2 = next;
	}
	return (0);
}
