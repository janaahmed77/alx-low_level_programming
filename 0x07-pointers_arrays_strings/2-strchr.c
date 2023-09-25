#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - prints buffer
 * @s: buffer
 * @c: size
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