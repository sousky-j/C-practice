#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int n, i;
	printf("숫자를 입력하세요:");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (n == i)
		{
			printf("%d는 소수입니다.", n);
			break;
		}
		if ((n % i) == 0) {
			printf("%d는 소수가 아닙니다.", n);
			break;
		}
	}
}