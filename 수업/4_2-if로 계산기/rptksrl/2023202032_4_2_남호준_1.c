#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // if�� ����
{
	int a, b;
	char k;

	printf("ù ��° ���� �Է��ϼ���:");
	scanf("%d", &a);

	printf("����� �����ڸ� �Է��ϼ��� :");
	scanf(" %c", &k);

	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%d", &b);

	if (k == '+')
		printf("%d + %d = %d�Դϴ�.\n", a, b, a + b);

	if (k == '-')
		printf("%d - %d = %d�Դϴ�.\n", a, b, a - b);

	if (k == '*')
		printf("%d * %d = %d�Դϴ�.\n", a, b, a * b);

	if (k == '/')
		printf("%d/%d = %f�Դϴ�.\n", a, b, (float)a / (float)b);

	if (k == '%')
		printf("%d %% %d = %d�Դϴ�.\n", a, b, a % b);
}