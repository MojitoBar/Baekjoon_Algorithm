#include <stdio.h>

int main()
{
	int time;
	int a, b;
	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}