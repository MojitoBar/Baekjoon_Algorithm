#include <stdio.h>
#include <string.h>

int main()
{
	int length;
	int dial[20];
	int sum = 0;
	char string[20];

	scanf("%s", &string);

	length = strlen(string);

	for (int i = 0; i < length; i++)
	{
		if (string[i] == 'A' || string[i] == 'B' || string[i] == 'C')
		{
			dial[i] = 2;
		}
		else if (string[i] == 'D' || string[i] == 'E' || string[i] == 'F')
		{
			dial[i] = 3;
		}
		else if (string[i] == 'G' || string[i] == 'H' || string[i] == 'I')
		{
			dial[i] = 4;
		}
		else if (string[i] == 'J' || string[i] == 'K' || string[i] == 'L')
		{
			dial[i] = 5;
		}
		else if (string[i] == 'M' || string[i] == 'N' || string[i] == 'O')
		{
			dial[i] = 6;
		}
		else if (string[i] == 'P' || string[i] == 'Q' || string[i] == 'R' || string[i] == 'S')
		{
			dial[i] = 7;
		}
		else if (string[i] == 'T' || string[i] == 'U' || string[i] == 'V')
		{
			dial[i] = 8;
		}
		else if (string[i] == 'W' || string[i] == 'X' || string[i] == 'Y' || string[i] == 'Z')
		{
			dial[i] = 9;
		}
	}

	for (int i = 0; i < length; i++)
	{
		sum += dial[i] + 1;
	}

	printf("%d", sum);
}