#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_chessboard - prints buffer
 * @a: size
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (int i = 0; i < 8; i++)
	{
	for (int j = 0; j < 8; j++)
	{
	printf("%c", a[i][j]);
	}
	printf("\n");
	}
}
