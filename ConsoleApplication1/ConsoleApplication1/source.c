#include <stdio.h>

int main(void) {
	int x, y, z;

	if (scanf("%d %d %d", &x, &y, &z) == 3)
		printf("정수들의 합 = %d\n", x + y + z);
	else
		printf("입력 오류\n");

	return 0;
}
