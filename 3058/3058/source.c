#include <stdio.h>

int main()
{
	int temp;
	int time;
	int sum = 0;
	int min = -1;
	scanf("%d", &time);
	for (int i = 0; i < time; i++)
	{
		min = -1;
		sum = 0;
		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &temp);

			if (temp % 2 == 0)
			{
				if (min == -1)
				{
					min = temp;
				}
				else if (min > temp)
				{
					min = temp;
				}

				sum += temp;
			}
		}
		printf("%d %d\n", sum, min);
	}
	return 0;
}