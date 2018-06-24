#include <stdio.h>

int main()
{
	int a;
	int x, y;
	int com = 1;
	int inc = 1;
	scanf("%d", &a);

	while (a > com)
	{
		com += ++inc;
	}

	if (inc % 2 == 0)
	{
		x = 1;
		y = inc;

		for (int i = 1; i < a - (com - inc); i++)
		{
			x++;
			y--;
		}
	}
	else
	{
		x = inc;
		y = 1;

		for (int i = 1; i < a - (com - inc); i++)
		{
			x--;
			y++;
		}
	}

	printf("%d/%d", x, y);

	return 0;
}