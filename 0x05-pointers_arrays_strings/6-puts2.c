#include <stdio.h>
#include <string.h>
/**
 * puts2 - to swap value
 * @str: The integer to be printed
 */
void puts2(char *str)
{
	int lenght = strlen(str);
	int i;

	for (i = 0 ; i < lenght ; i++)
	{
		if (i % 2 == 0)
		putchar(str[i]);
	}
	printf("\n");
}
