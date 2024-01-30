#include <stdio.h>
void main() // 중첩 for문을 이용한 구구단 출력 프로그램
{
	printf(" ");
	for (int i = 2; i <= 9; i++)
		printf(" #제%d단# ", i);
	printf("\n");
	for (int a = 1; a <= 9; a++)
	{
		printf("\n");
		for (int b = 2; b <= 9; b++)
			printf(" %2dX%d=%2d ", b, a, a * b);
	}
}