#include <stdio.h>

void star(int n, int x, int y);

char arr[3072][6144];

int main(void)
{
	int n, i, j;

	scanf("%d", &n);  //N�Է�

					  //�迭 �ʱ�ȭ
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

	//��¹��1. ���� �ݺ� ���
	for (i = 0; i < n; i++)
	{
		//for (j = 0; j < 2 * n; j++)  Null ���ڱ��� ����ϹǷ� ����� �ȵ�.
		for (j = 0; j < 2 * n - 1; j++)  // Null ���ڸ� �����ϰ� ����ؼ� ����!
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	//��¹��2. ���ڿ� ���
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
		//���� �׸���.
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