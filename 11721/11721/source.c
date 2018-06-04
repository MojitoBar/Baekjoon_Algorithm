#include <stdio.h>

int main()
{
	char string[100] = { 0 };
	int length = 0;
	int sum = 0;

	scanf("%d", &length);
	scanf("%s", string);

	for (int i = 0; i < length; i++)
	{
		sum += string[i] - 48;
	}

	printf("%d", sum);

	return 0;
}