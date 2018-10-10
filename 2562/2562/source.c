#include <stdio.h>

int main()
{
	int max = -1;
	int a;
	int num = 1;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a);
		if (max == -1)
		{
			max = a;
		}

		else if (max != -1 && max < a)
		{
			max = a;
			num = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", num);
	return 0;
}