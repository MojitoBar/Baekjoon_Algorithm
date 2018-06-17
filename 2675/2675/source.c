#include <stdio.h>
#include <stdio.h>

int main()
{
	int T;
	char string[20];
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int R;
		scanf("%d", &R);
		scanf("%s", &string);

		for (int j = 0; j < strlen(string); j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", string[j]);
			}
		}
		printf("\n");
	}
	return 0;
}