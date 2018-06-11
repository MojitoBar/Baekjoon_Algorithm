#include <stdio.h>

int numarr[10];
int arr[10];

int getDigit(int num);

int main()
{
	int a, b, c;
	int sum;
	int count;
	scanf("%d %d %d", &a, &b, &c);

	sum = a * b * c;

	count = getDigit(sum);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == numarr[i])
			{
				arr[j] += 1;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]); 
	}

	return 0;
}

int getDigit(int num)
{
	int flag = 0;
	int digit = 10;
	int count = 0;

	while (1)
	{
		if (num / digit >= 10)
		{
			digit *= 10;
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (digit == 0)
				{
					flag = 1;
					break;
				}
				numarr[i] = num / digit;
				
				num -= digit * (num / digit);
				digit /= 10;
				count++;
			}
		}

		if (flag)
		{
			return count;
		}
	}
}