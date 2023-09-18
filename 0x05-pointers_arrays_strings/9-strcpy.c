#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Prints an integer
 * @src: The integer to be printed
 * @dest: The integer to be printed
 * Return: last
 */
char *_strcpy(char *dest, char *src)
{
	char *last = strcpy(dest, src);

	return (last);
}
