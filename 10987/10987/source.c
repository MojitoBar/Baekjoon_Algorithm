#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1000];
	int count = 0;
	scanf("%s", &arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
		{
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}