#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-���ڿ� ���� �Լ� ����
{
	char a[256], b[256];
	printf("ù��°: ");
	gets_s(a, sizeof(a));
	printf("�ι�°: ");
	gets_s(b, sizeof(b));
	if (strcmp(a, b) == 0)
	{
		printf("��°��: %s", a);
	}
	else
	{
		strcat(a, b);
		printf("��°��: %s", a);
	}
}