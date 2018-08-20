#include <stdio.h>
#include <string.h>
int main()
{
	char arr[255];
	int check = 0;
	int count = 0;
	for (; ;)
	{
		if (check == 0)
		{
			scanf(" %[^\n]", &arr);
			count = 0;
			for (int i = 0; i < strlen(arr); i++)
			{
				if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'u' || arr[i] == 'i' || arr[i] == 'o'
					|| arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'U' || arr[i] == 'I' || arr[i] == 'O')
				{
					count++;
				}
				if (arr[0] == '#')
				{
					return 0;
					check = 1;
					break;
				}
			}
			printf("%d\n", count);
		}
		else
		{
			break;
		}
	}
	return 0;
}