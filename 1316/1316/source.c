#include <stdio.h>
#include <string.h>

int main()
{
	char string[100][100];
	int time;
	int count = 0;
	int check = -1;
	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%s", string[i]);
	}

	for (int i = 0; i < time; i++)
	{
		check = -1;
		int len = strlen(string[i]);
		if (len == 1)
		{
			count++;
		}
		else
		{
			for (int j = 0; j < len; j++)
			{
				for (int k = j + 1; k < len; k++)
				{
					if (string[i][j] == string[i][k])
					{
						if (string[i][k] != string[i][k - 1])
						{
							check = 0;
							break;
						}
						else
						{
							check = 1;
						}
					}
				}
				if (check == 0)
				{
					break;
				}
			}
			if (check != 0)
			{
				count++;
			}
		}
	}

	printf("%d", count);
	return 0;
}