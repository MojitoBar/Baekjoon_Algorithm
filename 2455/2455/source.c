#include <stdio.h>

int main()
{
	int in, out;
	int max = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &out, &in);
		if (max < max + in - out)
		{
			max = max + in - out;
		}
	}

	printf("%d", max);
	return 0;
}