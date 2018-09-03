#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];

	scanf("%s", &arr);

	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			printf("%c", arr[i]);
		}
	}
	return 0;
}