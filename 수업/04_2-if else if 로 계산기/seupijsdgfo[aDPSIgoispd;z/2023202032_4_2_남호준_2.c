#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // if else if로 계산기
{
	int a, b;
	char k;

	printf("첫 번째 수를 입력하세요:");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요 :");
	scanf(" %c", &k);

	printf("두 번째 수를 입력하세요:");
	scanf("%d", &b);

	if (k == '+')
		printf("%d + %d = %d입니다.\n", a, b, a + b);
	else if (k == '-')
		printf("%d - %d = %d입니다.\n", a, b, a - b);
	else if (k == '*')
		printf("%d * %d = %d입니다.\n", a, b, a * b);
	else if (k == '/')
		printf("%d/%d = %f입니다.\n", a, b, (float)a / (float)b);
	else if (k == '%')
		printf("%d %% %d = %d입니다.\n", a, b, a % b);
	else
		printf("연산자를 잘못 입력했습니다.\n");
}