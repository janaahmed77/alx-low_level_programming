#include <stdio.h>
#include <string.h>
/**
 * puts_half - to swap value
 * @str: The integer to be printed
 */
void puts_half(char *str)
{
	int lenght = strlen(str);
	int i;

	for (i = (lenght + 1 )/ 2 ; i < lenght ; i++)
	{
		putchar(str[i]);
	}
	printf("\n");
}
