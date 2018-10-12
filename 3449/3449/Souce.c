#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char a1[100];
	char a2[100];
	int count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		count = 0;
		scanf("%s", a1);
		scanf("%s", a2);

		for (int j = 0; j < strlen(a1); j++)
		{
			if (a1[j] != a2[j])
			{
				count++;
			}
		}
		printf("Hamming distance is %d.\n", count);
	}
	return 0;
}