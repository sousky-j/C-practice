#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void reverse_string(char *ss);

void main() // 13_2-문자열을 거꾸로 출력하는 프로그램
{
	int r;
	char a[100];
	printf("문자열을 입력하세요: ");
	gets_s(a, sizeof(a));

	r = strlen(a);
	a[r] = '\0';

	reverse_string(&a);

	printf("내용을 거꾸로 출력 ==>");

	for (int i = 0; i < r; i++)
	{
		printf("%c", *(a + i));
	}
}

void reverse_string(char *ss)
{
	int r;
	char tmp;
	r = strlen(ss);
	if (r % 2 == 0)
	{
		for (int i = 0; i < r / 2; i++)
		{
			tmp = *(ss + i);
			*(ss + i) = *(ss + r - 1 - i);
			*(ss + r - 1 - i) = tmp;
		}
	}
	else
	{
		for (int i = 0; i < (r / 2) - 0.5; i++)
		{
			tmp = *(ss + i);
			*(ss + i) = *(ss + r - 1 - i);
			*(ss + r - 1 - i) = tmp;
		}
	}
}