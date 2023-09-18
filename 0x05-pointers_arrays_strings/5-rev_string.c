#include <stdio.h>
#include <string.h>
/**
 * rev_string - to swap value
 * @s: The integer to be printed
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char val;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
	val = s[i];
	s[i] = s[j];
	s[j] = val;
	}
}
