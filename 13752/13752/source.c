#include <stdio.h>

int main()
{
	int n;
	int c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c);

		for (int j = 0; j < c; j++)
		{
			printf("=");
		}
		printf("\n");
	}
	return 0;
}