#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() // for������ ������
{
	int d;
	printf("�� ��?");
	scanf("%d", &d);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", d, i, d * i);
	}
}