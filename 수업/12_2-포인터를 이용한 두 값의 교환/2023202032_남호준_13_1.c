#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)
#pragma warning(disable : 6328)
void main() // 12_2-�����͸� �̿��� �� ���� ��ȯ
{
	int a, b, tmp;
	int *p1, *p2;

	printf("a�� �Է�: ");
	scanf("%d", &a);
	printf("b�� �Է�: ");
	scanf("%d", &b);
	p1 = &a;
	p2 = &b;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d", *p1, *p2);
}