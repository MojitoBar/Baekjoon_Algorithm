#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	int sum;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);

	int min;

	min = a > b ? b : a;
	min = min > c ? c : min;
	min = min > d ? d : min;

	int min2;
	if (e > f)
		min2 = f;
	else
		min2 = e;

	sum = a + b + c + d + e + f - (min + min2);
	printf("%d", sum);
	return 0;
}