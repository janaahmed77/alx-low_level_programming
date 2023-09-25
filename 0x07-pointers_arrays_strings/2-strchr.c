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
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}