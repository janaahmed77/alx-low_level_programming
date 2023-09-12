#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x1 = 1;
	long int x2 = 2;
	int i;
	long int next;

	printf("%ld, %ld, ", x1, x2);
	for (i = 3 ; i <= 92 ; i++)
	{
	next = x1 + x2;
	printf("%ld", next);
	if (i != 92)
	{
	printf(", ");
	}
	x1 = x2;
	x2 = next;
	}
	printf("12200160415121876738, ");
	printf("19740274219868223167, ");
	printf("31940434634990099905, ");
	printf("51680708854858323072, ");
	printf("83621143489848422977, ");
	printf("135301852344706746049");
	printf("\n");
	return (0);
}
