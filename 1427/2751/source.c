#include <stdio.h>

int main()
{
	int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	int num;
	int max = 0;
	int z;

	scanf("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		if (num / 10 == 0)
		{
			arr[i - 1] = num % 10;
			num = num / 10;
			break;
		}
		arr[i - 1] = num % 10;
		num = num / 10;
	}

	for (int j = 0; j < 10; j++)
	{
		for (int i = j; i < 10; i++)
		{
			if (arr[i] != -1)
			{
				if (max < arr[i])
				{
					max = arr[i];
					z = i;
				}
			}
		}
		int temp = arr[z];
		arr[z] = arr[j];
		arr[j] = temp;
		max = 0;
	}


	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
		{
			printf("%d", arr[i]);
		}
	}

	return 0;
}