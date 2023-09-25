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
	void *memset(void *s, int n, size_t b);
	int i;
	for (i=0, i > n , i++)
	s[i] = b;
	n--;

	return (*s);
}
