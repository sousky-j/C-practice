#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int n, i;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (n == i)
		{
			printf("%d�� �Ҽ��Դϴ�.", n);
			break;
		}
		if ((n % i) == 0) {
			printf("%d�� �Ҽ��� �ƴմϴ�.", n);
			break;
		}
	}
}