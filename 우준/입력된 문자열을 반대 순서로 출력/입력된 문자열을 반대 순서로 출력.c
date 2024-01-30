#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)

void main()
{
	char a[100], b[100];
	int r, i;
	printf("문자열을 입력하세요: ");
	gets_s(a, sizeof(a));
	r = strlen(a);

	for (i = 0; i < r; i++)
	{
		b[i] = a[r - 1 - i];
	}
	b[r] = '\0';
	puts(b);

	printf("문자열을 입력하세요: ");
	scanf("%s", a);
	r = strlen(a);

	for (i = 0; i < r; i++)
	{
		b[i] = a[r - 1 - i];
	}
	b[r] = '\0';
	printf("%s", b);
}