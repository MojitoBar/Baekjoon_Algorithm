#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;

	int max;

	scanf("%d", &a);
	scanf("%d", &b);

	if (b % 10 < a % 10)
	{
		max = a;
	}

	else if (b % 10 > a % 10)
	{
		max = b;
	}

	else
	{
		if ((b / 10) % 10 > (a / 10) % 10)
		{
			max = b;
		}

		else if ((b / 10) % 10 < (a / 10) % 10)
		{
			max = a;
		}

		else
		{
			if (b / 100 > a / 100)
			{
				max = b;
			}
			else if (b / 100 < a / 100)
			{
				max = a;
			}
		}
	}

	printf("%d%d%d", max % 10, max / 10 % 10, max / 100);
	return 0;
}