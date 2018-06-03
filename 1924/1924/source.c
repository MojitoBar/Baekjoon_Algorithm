#include <stdio.h>

int main()
{
	char day[7][3] = { { 'S', 'U', 'N' }, {'M', 'O', 'N'}, {'T', 'U', 'E'}, {'W', 'E', 'D'}, {'T', 'H', 'U'}, {'F', 'R', 'I'}, {'S', 'A', 'T'} };
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int a, b;
	int count = 0;

	scanf("%d %d", &a, &b);

	for (int i = 1; i < a; i++)
	{
		count += month[i - 1];
	}
	
	count += b;

	for (int i = 0; i < 3; i++)
	{
		printf("%c", day[count % 7][i]);
	}
	return 0;
}