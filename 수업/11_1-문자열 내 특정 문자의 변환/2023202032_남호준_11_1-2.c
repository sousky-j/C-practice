#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-���ڿ� �� Ư�� ������ ��ȯ
{
	char a[256];
	char input1, input2;
	printf("���� ���ڸ� �Է�: ");
	gets_s(a, sizeof(a));
	printf("���� ���ڿ� ���ο� ����: ");
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
	printf("��ȯ�� ��� ==> ");
	puts(a);
}