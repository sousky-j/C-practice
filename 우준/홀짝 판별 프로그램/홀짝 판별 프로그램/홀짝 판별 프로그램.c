#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int a,b;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &a);

	switch (a%2)
	{
		case 0:
			printf("%d�� ¦���Դϴ�.", a);
			break;
		default:
			printf("%d�� Ȧ���Դϴ�.", a);
	}
}