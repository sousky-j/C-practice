#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void gugu(int dan)
{
	for (int i = 1; i <= 9; i++)
		printf("%2d X%2d= %2d\n", dan, i, dan * i);

	return dan;
}

void main() // 7_1-�Լ��� �̿��� ������ ���α׷�
{
	int Input;
	printf("����ϰ� ���� ���� �Է�:");
	scanf("%d", &Input);
	gugu(Input);
}