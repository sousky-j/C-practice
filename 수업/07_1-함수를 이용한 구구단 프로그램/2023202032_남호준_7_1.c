#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void gugu(int dan)
{
	for (int i = 1; i <= 9; i++)
		printf("%2d X%2d= %2d\n", dan, i, dan * i);

	return dan;
}

void main() // 7_1-함수를 이용한 구구단 프로그램
{
	int Input;
	printf("출력하고 싶은 단을 입력:");
	scanf("%d", &Input);
	gugu(Input);
}