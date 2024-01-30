#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void main() // 11_1-입력된 문자열을 반대 순서로 출력
{
	char a[256], b[256];
	int r1;

	printf("문자열을 입력하세요:");
	gets_s(a, sizeof(a));
	r1 = strlen(a);
	for (int i = 0; i < r1; i++)
	{
		b[i] = a[r1 - i - 1];
	}
	b[r1] = '\0';
	puts(b);

	printf("문자열을 입력하세요:");
	scanf("%s", &a);
	r1 = strlen(a);

	for (int i = 0; i < r1; i++)
	{
		b[i] = a[r1 - i - 1];
	}
	b[r1] = '\0';
	printf("%s", b);
}
