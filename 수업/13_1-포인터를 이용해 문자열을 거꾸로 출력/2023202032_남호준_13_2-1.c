#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void main() // 13_1-�����͸� �̿��� ���ڿ��� �Ųٷ� ���
{
	int r;
	char a[100];
	char *p;
	p = a;

	gets_s(a, sizeof(a));
	r = strlen(a);

	for (r; r > 0; r--)
	{
		printf("%c", *(p + r - 1));
	}
}