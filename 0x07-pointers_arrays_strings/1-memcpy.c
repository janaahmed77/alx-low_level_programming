#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - prints buffer
 * @dest: buffer
 * @n: size
 * @src:hii
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
