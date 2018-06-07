#include <stdio.h>
#include <math.h>

int main()
{
	float arr[1000] = { 0 };
	int time;
	int max = 0;
	float sum = 0;
	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%f", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < time; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	printf("%.2f", sum / time);
}