#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-문자열 내 특정 문자의 변환
{
	char a[256];
	char input1, input2;
	printf("여러 글자를 입력: ");
	gets_s(a, sizeof(a));
	printf("기존 문자와 새로운 문자: ");
	scanf("%c %c", &input1, &input2);
	int r = strlen(a);
	for (int i = 0; i < r; i++)
	{
		if (a[i] == input1)
		{
			a[i] = input2;
		}
	}
	a[r] = '\0';
	printf("변환된 결과 ==> ");
	puts(a);
}