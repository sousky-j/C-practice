#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

int addToToTal(int num)
{
	static int k;
	k += num;
	return k;
}

void main() // 7_2-static변수를 이용한 합계 출력
{
	int a;
	for (int i = 0; i < 3; i++)
	{
		printf("숫자를 입력하세요: ");
		scanf("%d", &a);
		printf("지금까지의 합계 : %d\n", addToToTal(a));
	}
}