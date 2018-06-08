#include <stdio.h>

int main()
{
	int a;
	int b;
	int origin;
	int time = 0;

	scanf("%d", &a);
	origin = a;
	do
	{
		time++;

		b = a % 10 * 10;

		a = a / 10 + a % 10;

		a = b + a % 10;
	} while (a != origin);

	printf("%d", time);
	return 0;
}