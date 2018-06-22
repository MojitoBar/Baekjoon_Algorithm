#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int count = 0;
	scanf("%s", &string);

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == 'c')
		{
			if (string[i + 1] == '=' || string[i + 1] == '-')
			{
				i++;
			}
		}
		else if (string[i] == 'd')
		{
			if (string[i + 1] == '-')
			{
				i++;
			}
			else if (string[i + 1] == 'z' && string[i + 2] == '=')
			{
				i += 2;
			}
		}
		else if (string[i] == 'l')
		{
			if (string[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (string[i] == 'n')
		{
			if (string[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (string[i] == 's')
		{
			if (string[i + 1] == '=')
			{
				i++;
			}
		}
		else if (string[i] == 'z')
		{
			if (string[i + 1] == '=')
			{
				i++;
			}
		}
		count++;
	}

	printf("%d", count);
}