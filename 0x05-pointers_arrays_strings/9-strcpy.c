#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Prints an integer
 * @scr: The integer to be printed
 * @dest: The integer to be printed
 */
char *_strcpy(char *dest, char *src)
{
	char *last = strcpy(dest, src);
	return (last);
}
