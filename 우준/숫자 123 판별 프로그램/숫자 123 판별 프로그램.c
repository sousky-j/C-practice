#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main()
{
	int a;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.", 1);
		break;
	case 2:
		printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.", 2);
		break;
	case 3:
		printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.", 3);
		break;
	default:
		printf("1,2,3�� �ƴմϴ�.");
	}
}