#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - convert string to integer
 * @src: char pointer
 * @dest: char pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (temp);
}
