#include <stdio.h>
int main()
{
	int n;
	int a;
	int count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			count--;
		}
		else
		{
			count++;
		}
	}

	if (count > 0)
	{
		printf("Junhee is cute!\n");
	}
	else {
		printf("Junhee is not cute!\n");
	}
	return 0;
}