#include <stdio.h>

int main()
{
	int num;
	int numarr[10] = { 0 };
	int count = 0;
	int x = 100;
	int digit = 3;
	int q = 1;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		q = 1;
		if (i < 100)
		{
			count++;
		}
		else
		{
			digit = 3;
			x = 100;
			while (1)
			{
				if (i / x >= 10)
				{
					x *= 10;
					digit++;
					continue;
				}
				else
				{
					break;
				}
			}

			for (int k = 1; k < digit; k++)
			{
				q *= 10;
			}

			int temp = i;
			for (int j = 0; j < digit; j++)
			{
				numarr[j] = temp / q;
				temp -= numarr[j] * q;
				q /= 10;
			}

			int dis = numarr[0] - numarr[1];

			for (int l = 1; l < digit - 1; l++)
			{
				if (dis != numarr[l] - numarr[l + 1])
				{
					break;
				}
				else if (l == digit - 2)
				{
					count++;
				}
			}
		}
	}

	printf("%d", count);
	return 0;
}