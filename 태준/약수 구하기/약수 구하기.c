#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int a, b=0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
			b += 1;
		}
	}
	printf("\n");

	if (b == 2)
		printf("%d는 소수입니다.", a);
}