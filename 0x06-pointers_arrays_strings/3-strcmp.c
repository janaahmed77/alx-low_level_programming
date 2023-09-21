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
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);

}
