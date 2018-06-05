#include <stdio.h>

int main()
{
	char string[100] = { 0 };
	scanf("%s", &string);

	for (int i = 1; i <= 100; i++)
	{
		if (string[i - 1] != 0)
		{
			if (i % 10 == 0)
			{
				printf("%c", string[i - 1]);
				printf("\n");
			}
			else
			{
				printf("%c", string[i - 1]);
			}
		}
	}


	return 0;
}