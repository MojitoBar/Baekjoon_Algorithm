#include <stdio.h>

int main()
{
	int a = 1;
	for (int i = 1; a != 0; i++)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		if (a % 2 == 0)
		{
			printf("%d. even ", i);
			int z = a * 3 / 2 * 3 / 9;
			printf("%d\n", z);
		}
		else
		{
			printf("%d. odd ", i);
			int z = (a * 3 + 1) / 2 * 3 / 9;
			printf("%d\n", z);
		}
	}
	return 0;
}