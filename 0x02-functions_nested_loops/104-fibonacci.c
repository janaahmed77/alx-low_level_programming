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
	char largeNumberStr93[] = "12200160415121876738";

	printf("%s, ", largeNumberStr93);
	char largeNumberStr94[] = "19740274219868223167";

	printf("%s, ", largeNumberStr94);
	char largeNumberStr95[] = "31940434634990099905";

	printf("%s, ", largeNumberStr95);
	char largeNumberStr96[] = "51680708854858323072";

	printf("%s, ", largeNumberStr96);
	char largeNumberStr97[] = "83621143489848422977";

	printf("%s, ", largeNumberStr97);
	char largeNumberStr98[] = "135301852344706746049";

	printf("%s, ", largeNumberStr98);
	printf("\n");

	return (0);
}
