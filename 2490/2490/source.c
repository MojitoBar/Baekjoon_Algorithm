#include <stdio.h>

int main()
{
	int a[4][3];
	int count[3] = { 0 };

	for (int z = 0; z < 3; z++)
	{
		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &a[i][z]);
		}

		for (int i = 0; i < 4; i++)
		{
			if (a[i][z] == 1)
			{
				count[z]++;
			}
		}
	}
	for (int p = 0; p < 3; p++)
	{
		if (count[p] == 3)
		{
			printf("A\n");
		}
		if (count[p] == 2)
		{
			printf("B\n");
		}
		if (count[p] == 1)
		{
			printf("C\n");
		}
		if (count[p] == 4)
		{
			printf("E\n");
		}
		if (count[p] == 0)
		{
			printf("D\n");
		}
	}
	return 0;
}