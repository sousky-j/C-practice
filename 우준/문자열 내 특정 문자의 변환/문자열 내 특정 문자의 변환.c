#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)

void main()
{
	int r, i;
	char a[100];
	char input1, input2;
	printf("여러 글자를 입력: ");
	gets_s(a, sizeof(a));
	r = strlen(a);

	printf("기존 문자와 변환할 문자: ");
	scanf("%c %c", &input1, &input2);
	
	for (i = 0; i < r; i++)
	{
		if (a[i] == input1)
		{
			a[i] = input2;
		}
	}

	printf("변환된 결과 ==> %s", a);
}