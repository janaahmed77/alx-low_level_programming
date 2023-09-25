#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - concatenates two strings
 * @needle: char pointer
 * @haystack: char pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *Value = strstr(haystack, needle);

	return (Value);
}
