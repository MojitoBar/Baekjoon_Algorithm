#include <stdio.h>

int main()
{
	int time;
	int test;
	int v = 0;
	float score[1000];
	float sum = 0;
	float arr[1000];

	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%d", &test);
		sum = 0;
		v = 0;
		for (int i = 0; i < test; i++)
		{
			scanf("%f", &score[i]);
			sum += score[i];
		}
		for (int i = 0; i < test; i++)
		{
			if (sum / test < score[i])
			{
				v++;
			}
		}

		arr[i] = (float)v / test * 100;
	}

	for (int i = 0; i < time; i++)
	{
		printf("%.3f%%\n", arr[i]);
	}
	return 0;
}