#include <stdio.h>

int main()
{
	int a[1000];
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < num; j++)
	{
		for (int i = j; i < num; i++)
		{
			if (a[j] > a[i])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", a[i]);
	}
}