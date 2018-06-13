#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[5] = { 'a', 'e', 'i', 'o', 'u' };
	char string[100];
	char vowel[100];
	int count = 0;
	int exit = 0;

	gets(string);

	for (int i = 0; i < strlen(string); i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j] == string[i] || arr[j] - 32 == string[i])
			{
				vowel[count] = string[i];
				count++;
			}
		}
	}

	for (int i = 0; i < strlen(string); i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j] == string[i] || arr[j] - 32 == string[i])
			{
				printf("%c", vowel[--count]);
				exit = 1;
				break;
			}
		}

		if (!exit)
			printf("%c", string[i]);

		else
			exit = 0;
	}

	return 0;
}