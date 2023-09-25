#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - prints buffer
 * @s: buffer
 * @n: size
 * @b:hii
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

