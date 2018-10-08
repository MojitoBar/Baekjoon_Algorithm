#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	int min = -1;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &a);
		if (a % 2 == 1)
		{
			sum += a;
			if (min == -1)
			{
				min = a;
			}
			else
			{
				if (min > a)
				{
					min = a;
				}
			}
		}
	}

	if (sum != 0)
	{
		printf("%d\n", sum);
		printf("%d", min);
	}
	else
	{
		printf("-1");
	}
	return 0;
}