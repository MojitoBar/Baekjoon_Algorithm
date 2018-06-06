#include <stdio.h>

int main()
{
	int N, x, y, i, cnt = 0, num[10000] = { 0, };

	scanf("%d %d", &N, &x);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &y);

		if (y < x)
		{
			num[cnt] = y;
			cnt++;
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf("%d ", num[i]);
	}
}