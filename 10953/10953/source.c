#include <stdio.h>

int main()
{
	int a, b;
	char c;
	int T;
	int sum;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %c %d", &a, &c, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
	return 0;
}