#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)
void main()
{
	int a;
	printf("정수를 입력하세요:");
	scanf("%d", &a);

	do
	{
		printf("%d ", a);
		a--;
	} while (a > 0);
}