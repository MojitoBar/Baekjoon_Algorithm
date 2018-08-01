#include <stdio.h>
int main()
{
	int time;

	scanf("%d", &time);

	for (int i = 1; i <= time; i++)
	{
		printf("Hello World, Judge %d!\n", i);
	}
	return 0;
}