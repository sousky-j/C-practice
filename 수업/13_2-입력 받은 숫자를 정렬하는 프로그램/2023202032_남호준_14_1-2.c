#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void sort_num(int *num);

void main() // 13_2-�Է� ���� ���ڸ� �����ϴ� ���α׷�
{
	int a[10];
	printf("�Է� ���ڿ�: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort_num(&a);

	printf("���� ���ڿ�: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
}

void sort_num(int *num)
{
	int k, tmp;
	for (int i = 0; i < 9; i++)
	{
		k = i + 1;
		for (k; k <= 9; k++)
		{
			if (*(num + i) < *(num + k))
			{
				tmp = *(num + i);
				*(num + i) = *(num + k);
				*(num + k) = tmp;
			}
		}
	}
}