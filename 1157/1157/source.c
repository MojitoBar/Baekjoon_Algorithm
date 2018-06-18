#include <stdio.h>
#include <string.h>

int main()
{
	char string[1000000];
	int alphabet[26] = { 0 };
	int mm = -1;
	int mn;
	unsigned int len;

	scanf("%s", &string);

	len = strlen(string);

	for (int i = 0; i < len; i++)
	{
		if (string[i] - 32 >= 65)
		{
			string[i] = string[i] - 32;
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (j + 65 == string[i])
			{
				alphabet[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (mm < alphabet[i])
		{
			mm = alphabet[i];
			mn = i;
		}
	}

	int c = 0;

	for (int i = 0; i < 26; i++)
	{
		if (mm == alphabet[i])
		{
			c++;
		}
	}
	if (c > 1)
	{
		printf("?");
		return 0;
	}
	printf("%c", mn + 65);
	return 0;
}