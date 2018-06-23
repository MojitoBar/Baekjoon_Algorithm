#include <stdio.h>

int main()
{
	int a;
	int compare = 1;
	int count = 0;
	scanf("%d", &a);

	for (int i = 1; ;i++)
	{
		if (a <= compare)
		{
			count++;
			break;
		}
		else
		{
			count++;
			compare += (6 * i);
		}
	}

	printf("%d", count);
}