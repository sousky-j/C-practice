#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 6031)

void main() // 11_1-�빮�ڿ� �ҹ����� ��ȯ
{
	char a[256], b[256];
	printf("���ڿ� �Է� : ");
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
	printf("��ȯ�� ��� ==> ");
	puts(a);
}