#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (int ii = 0; str[ii]; ii++)
		aaa[ii] = str[ii];

	return (aaa);
}
