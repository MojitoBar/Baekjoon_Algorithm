#include <stdio.h>

int main()
{
	int n;
	int a;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		scanf("%d", &a);
		for (int j = 1; j <= a; j++)
		{
			if (j % 2 != 0) 
			{
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
}