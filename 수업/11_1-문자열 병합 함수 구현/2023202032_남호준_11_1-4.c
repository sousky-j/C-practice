#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-문자열 병합 함수 구현
{
	char a[256], b[256];
	printf("첫번째: ");
	gets_s(a, sizeof(a));
	printf("두번째: ");
	gets_s(b, sizeof(b));
	if (strcmp(a, b) == 0)
	{
		printf("출력결과: %s", a);
	}
	else
	{
		strcat(a, b);
		printf("출력결과: %s", a);
	}
}