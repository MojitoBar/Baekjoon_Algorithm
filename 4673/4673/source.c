#include <stdio.h>

int main()
{
	int count = 0;
	for (int i = 0; i <= 10000; i++)
	{
		count = 0;
		for (int j = i; j >= 0; j--)
		{
			if (j < 100 & j >= 0)
			{
				if ((j / 10) + (j % 10) + j == i)
				{
					count++;
				}
			}
			else if (j < 1000 && j >= 100)
			{
				if ((j / 100) + (j % 100 / 10) + (j % 10) + j == i)
				{
					count++;
				}
			}
			else if (j > 1000 && j <= 10000)
			{
				if ((j / 1000) + (j % 1000 / 100) + (j % 100 / 10) + (j % 10) + j == i)
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}