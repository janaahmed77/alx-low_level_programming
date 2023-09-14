#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
	{
	long long number = 612852475143;
	long long largestPrimeFactor = -1;
	long long i;

	while (number % 2 == 0)
	{
	largestPrimeFactor = 2;
	number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
	while (number % i == 0)
	{
	largestPrimeFactor = i;
	number /= i;
	}
	}
	if (number > 1)
	{
	largestPrimeFactor = number;
	}
	printf("%lld\n", largestPrimeFactor);
	return (0);
}
