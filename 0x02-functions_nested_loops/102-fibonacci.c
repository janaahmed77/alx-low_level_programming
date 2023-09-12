#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int x1 = 1;
	long long int x2 = 2;
	int i;
	long long int next;

	printf("%lld, %lld, ", x1, x2);
	for (i = 3 ; i <= 50 ; i++)
	{
	next = x1 + x2;
	printf("%lld, ", next);
	x1 = x2;
	x2 = next;
	}
}
