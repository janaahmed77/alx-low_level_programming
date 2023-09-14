#include <stdio.h>

/**
 * main - Entry Point
 * Description: Find the largest prime factor of a given number.
 * Return: 0
 */
int main(void)
	{
	long int number = 612852475143;
	long int largestPrimeFactor = -1;
	long int i;

	while (number % 2 == 0)
	{
	largestPrimeFactor = 2;
	number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
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
	printf("%ld\n", largestPrimeFactor);
	return (0);
}
