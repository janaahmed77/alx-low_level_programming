#include "main.h"
#include <stdio.h>
/**
 * _isalpha - lowercase or uppercase character
 *   @c: The loweer to checked
 * Return: 1 if c lowercase else 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
