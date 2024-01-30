#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-대문자와 소문자의 변환
{
	char a[256], b[256];
	printf("문자열 입력 : ");
	gets_s(a, sizeof(a));
	int r = strlen(a);
	for (int i = 0; i < r; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] > 90)
			{
				a[i] -= 32;
			}
			else if (a[i] <= 90)
			{
				a[i] += 32;
			}
		}
	}
	a[r] = '\0';
	printf("변환된 결과 ==> ");
	puts(a);
}