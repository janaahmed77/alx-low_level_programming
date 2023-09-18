#include <stdio.h>
#include <string.h>

/**
 * _atoi - Prints an integer
 * @s: The integer to be printed
 * Return: last
 */
int _atoi(char *s)
	{
	int num = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
	i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
	sign = (s[i] == '-') ? -1 : 1;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	num = num * 10 + (s[i] - '0');
	i++;
	}

	return (num * sign);
}
