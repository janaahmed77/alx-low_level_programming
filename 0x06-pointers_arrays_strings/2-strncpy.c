#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - convert string to integer
 * @src: char pointer
 * @dest: char pointer
 * @n: char array
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);

}
