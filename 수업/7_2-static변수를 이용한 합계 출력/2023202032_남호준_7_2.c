#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

int addToToTal(int num)
{
	static int k;
	k += num;
	return k;
}

void main() // 7_2-static������ �̿��� �հ� ���
{
	int a;
	for (int i = 0; i < 3; i++)
	{
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d", &a);
		printf("���ݱ����� �հ� : %d\n", addToToTal(a));
	}
}