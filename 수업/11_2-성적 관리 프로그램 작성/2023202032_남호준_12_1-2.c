#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 11_2-���� ���� ���α׷� �ۼ�
{
	int a[5][5];
	int n = 0, m = 0;
	char b[][5] = {"����", "ö��", "��ö", "����"};
	char c[][5] = {"����", "����", "����", "����"};
	for (int i = 0; i < 4; i++)
	{
		printf("%s �л��� ���� ������ ���ʴ�� �Է��ϼ���: ", b[i]);
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	for (int i = 0; i < 4; i++)
	{
		a[4][i] = 0;
		a[i][4] = 0;
		for (int j = 0; j < 4; j++)
		{
			a[4][i] += a[j][i];
			a[i][4] += a[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%s�� ����: %d ", b[i], a[i][4]);
		printf("%s������ ����: %d ", c[i], a[4][i]);
		printf("\n");
	}
}