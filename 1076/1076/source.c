#include <stdio.h>
#include <string.h>

int main()
{
	double a, b, c;
	char first[10];
	char second[10];
	char last[10];
	double sum;
	scanf("%s", &first);
	scanf("%s", &second);
	scanf("%s", &last);

	if (strcmp(first, "black") == 0)
		a = 0;
	else if (strcmp(first, "brown") == 0)
		a = 1;
	else if (strcmp(first, "red") == 0)
		a = 2;
	else if (strcmp(first, "orange") == 0)
		a = 3;
	else if (strcmp(first, "yellow") == 0)
		a = 4;
	else if (strcmp(first, "green") == 0)
		a = 5;
	else if (strcmp(first, "blue") == 0)
		a = 6;
	else if (strcmp(first, "violet") == 0)
		a = 7;
	else if (strcmp(first, "grey") == 0)
		a = 8;
	else if (strcmp(first, "white") == 0)
		a = 9;

	if (strcmp(second, "black") == 0)
		b = 0;
	else if (strcmp(second, "brown") == 0)
		b = 1;
	else if (strcmp(second, "red") == 0)
		b = 2;
	else if (strcmp(second, "orange") == 0)
		b = 3;
	else if (strcmp(second, "yellow") == 0)
		b = 4;
	else if (strcmp(second, "green") == 0)
		b = 5;
	else if (strcmp(second, "blue") == 0)
		b = 6;
	else if (strcmp(second, "violet") == 0)
		b = 7;
	else if (strcmp(second, "grey") == 0)
		b = 8;
	else if (strcmp(second, "white") == 0)
		b = 9;

	if (strcmp(last, "black") == 0)
		c = 1;
	else if (strcmp(last, "brown") == 0)
		c = 10;
	else if (strcmp(last, "red") == 0)
		c = 100;
	else if (strcmp(last, "orange") == 0)
		c = 1000;
	else if (strcmp(last, "yellow") == 0)
		c = 10000;
	else if (strcmp(last, "green") == 0)
		c = 100000;
	else if (strcmp(last, "blue") == 0)
		c = 1000000;
	else if (strcmp(last, "violet") == 0)
		c = 10000000;
	else if (strcmp(last, "grey") == 0)
		c = 100000000;
	else if (strcmp(last, "white") == 0)
		c = 1000000000;

	printf("%.f", (c * b) + (a * c * 10));
}