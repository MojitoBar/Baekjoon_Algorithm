#include <stdio.h>
#include <string.h>

int check(char* arr);

int main()
{
	char arr[100] = { 0 };
	int time;
	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%s", &arr);
		printf("%d\n", check(arr));
	}
	return 0;
}

int check(char* arr)
{
	int count = 0;
	int sum = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'O')
		{
			count++;
			sum += count;
		}
		else
		{
			count = 0;
		}
	}

	return sum;
}