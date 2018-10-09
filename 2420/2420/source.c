#include <stdio.h>
#include <math.h>

int main()
{
	long long a, b, c = 0;
	scanf("%lld %lld", &a, &b);
	c = llabs(a - b);
	printf("%lld", c);
	return 0;
}