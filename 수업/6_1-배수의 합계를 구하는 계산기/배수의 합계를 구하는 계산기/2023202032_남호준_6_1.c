#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // ����� �հ踦 ���ϴ� ����
{
	int a, b, c, d = 0, i;

	printf("�հ��� ���۰� ==>");
	scanf("%d", &a);
	printf("�հ��� ���� ==>");
	scanf("%d", &b);
	printf("��� ==>");
	scanf("%d", &c);

	i = a;
	while (i <= b)
	{
		if ((i % c) == 0)
			d += i;
		i++;
	}
	printf("%d���� %d������ %d����� �հ�: %d", a, b, c, d);
}