#include <stdio.h>

void star(int n, int x, int y);

char arr[3072][6144];

int main(void)
{
	int n, i, j;

	scanf("%d", &n);  //N입력

					  //배열 초기화
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<2 * n; j++)
		{
			if (j == 2 * n - 1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}
	}

	star(n, n - 1, 0);

	//출력방법1. 문자 반복 출력
	for (i = 0; i < n; i++)
	{
		//for (j = 0; j < 2 * n; j++)  Null 문자까지 출력하므로 통과가 안됨.
		for (j = 0; j < 2 * n - 1; j++)  // Null 문자를 제외하고 출력해서 성공!
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	//출력방법2. 문자열 출력
	/*for (i = 0; i < n; i++)
	{
	printf("%s\n", arr[i]);
	}*/

	return 0;
}

void star(int n, int x, int y)
{
	if (n == 3)
	{
		//별을 그린다.
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
		return;
	}
	star(n / 2, x, y);
	star(n / 2, x - (n / 2), y + (n / 2));
	star(n / 2, x + (n / 2), y + (n / 2));
}