#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int a,b;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);

	switch (a%2)
	{
		case 0:
			printf("%d는 짝수입니다.", a);
			break;
		default:
			printf("%d는 홀수입니다.", a);
	}
}