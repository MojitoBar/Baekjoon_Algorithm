#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char alphabet[26] = { 0 };
	scanf("%s", &string);
	
	for (int j = 97; j < 123; j++)
	{
		alphabet[j - 97] = -1;
		for (int i = 0; i < strlen(string); i++)
		{
			if (j == string[i] && alphabet[j - 97] == -1)
			{
				alphabet[j - 97] = i;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alphabet[i]);
	}
	return 0;
}