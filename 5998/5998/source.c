#include <stdio.h>
#include <string.h>

int main()
{
	char arr[60];
	int time;

	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%s", &arr);

		int temp = arr[strlen(arr) - 1];

		if (temp % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}

	return 0;
}