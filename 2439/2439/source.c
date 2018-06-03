#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		for (int k = i + 1; k < a; k++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}