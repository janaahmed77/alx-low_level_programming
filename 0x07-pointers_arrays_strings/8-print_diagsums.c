#include <stdio.h>
#include <string.h>
#include "main.h"
void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int off_diag_sum = 0;

	for (int i = 0; i < size; i++)
	{
	main_diag_sum += a[i * size + i];
	off_diag_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", main_diag_sum, off_diag_sum);
}
