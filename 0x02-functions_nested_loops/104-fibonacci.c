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
	for (i = 3 ; i <= 91 ; i++)
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
	printf("1220016041");
	printf("5121876738, ");
	printf("197402742");
	printf("19868223167, ");
	printf("3194043463");
	printf("4990099905, ");
	printf("516807088");
	printf("54858323072, ");
	printf("8362114348");
	printf("9848422977, ");
	printf("13530185234");
	printf("4706746049, ");
	printf("218922995");
	printf("834555169026");
	printf("\n");
	return (0);
}
