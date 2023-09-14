#include "main.h"
#include <stdio.h>
/**
 * __isupper - uppercase charater
 *   @c: The loweer to checked
 * Return: 1 if c uppercase else 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
