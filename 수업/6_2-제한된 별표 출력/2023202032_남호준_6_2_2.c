#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 6_2-���ѵ� ��ǥ ���
{
	int a;
	while (1)
	{
		printf("���� ������ �Է��Ͻʽÿ�: ");
		scanf("%d", &a);

		if (a == 0)
			continue;
		else if (a > 10)
		{
			printf("�׷��� ���� ��ǥ�� ����� �� �����ϴ�.");
			break;
		}
		else
		{
			for (int i = 0; i < a; i++)
				printf("*");
			printf("\n");
		}
	}
}