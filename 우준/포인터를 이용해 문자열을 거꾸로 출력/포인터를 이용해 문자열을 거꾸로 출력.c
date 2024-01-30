#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)

void main()
{
	char a[100], b[100];
	char* p, * k;
	p = a;
	k = b;
	printf("문자열을 입력하세요: ");
	gets_s(a, sizeof(a));
	int r = strlen(a);
	for (int i = 0; i < r; i++)
	{
		*(k + i) = *(p + r - 1 - i);
	}
	*(k + r) = '\0';
	
	printf("%s", k);
}