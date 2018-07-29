#include <stdio.h>

int main()
{
	int a, b, c;
	int n1, n2, n3;
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		if (a < c)
		{
			n1 = a;
			if (b < c)
			{
				n2 = b;
				n3 = c;
			}
			else
			{
				n2 = c;
				n3 = b;
			}
		}
		else
		{
			n1 = c;
			n2 = a;
			n3 = b;
		}
	}
	else
	{
		if (b < c)
		{
			n1 = b;
			if (a < c)
			{
				n2 = a;
				n3 = c;
			}
			else
			{
				n2 = c;
				n3 = a;
			}
		}
		else
		{
			n1 = c;
			n2 = b;
			n3 = a;
		}
	}


	printf("%d %d %d", n1, n2, n3);
	return 0;
}