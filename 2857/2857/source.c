#include <stdio.h>
#include <string.h>

int main() 
{
	int i, j;
	int Exist = 0; // 0 이면 FBI존재 X, 1이면 FBI 존재함

	for (i = 1; i <= 5; i++) 
	{
		char str[11] = { 0, };
		gets(str);

		for (j = 0; str[j] != '\0'; j++) 
		{
			if (str[j] == 'F' && str[j + 1] == 'B' && str[j + 2] == 'I') 
			{
				printf("%d ", i);
				Exist = 1;
				break;
			}
		}
	}

	if (Exist == 0) {
		printf("HE GOT AWAY!");
	}
}