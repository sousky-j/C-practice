#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void main() // 11_1-�Էµ� ���ڿ��� �ݴ� ������ ���
{
	char a[256], b[256];
	int r1;

	printf("���ڿ��� �Է��ϼ���:");
	gets_s(a, sizeof(a));
	r1 = strlen(a);
	for (int i = 0; i < r1; i++)
	{
		b[i] = a[r1 - i - 1];
	}
	b[r1] = '\0';
	puts(b);

	printf("���ڿ��� �Է��ϼ���:");
	scanf("%s", &a);
	r1 = strlen(a);

	for (int i = 0; i < r1; i++)
	{
		b[i] = a[r1 - i - 1];
	}
	b[r1] = '\0';
	printf("%s", b);
}
