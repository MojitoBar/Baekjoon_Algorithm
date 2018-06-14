#include <stdio.h>

int main()
{
	int arr[8];

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == i + 1)
		{
			if (i == 7)
			{
				printf("ascending\n");
				return 0;
			}
		}
		else
			break;
	}

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == 8 - i)
		{
			if (i == 7)
			{
				printf("descending\n");
				return 0;
			}
		}
		else
			break;
	}

	printf("mixed\n");

	return 0;
}