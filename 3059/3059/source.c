#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char input[1000];
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		char arr[27] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
		scanf("%s", input);

		for (int j = 0; j < strlen(input); j++)
		{
			for (int k = 0; k < 27; k++)
			{
				if (input[j] == arr[k])
				{
					arr[k] = 0;
				}
			}
		}

		for (int k = 0; k < 27; k++)
		{
			sum += arr[k];
		}
		printf("%d\n", sum);
	}


	return 0;
}