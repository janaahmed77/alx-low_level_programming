#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - prints buffer
 * @dest: buffer
 * @n: size
 * @src:hii
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
