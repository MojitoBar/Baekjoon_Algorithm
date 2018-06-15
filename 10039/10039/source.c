#include <stdio.h>

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int temp;
		scanf("%d", &temp);

		if (temp < 40)
		{
			temp = 40;
		}

		sum += temp;
	}

	printf("%d", sum / 5);
	return 0;
}