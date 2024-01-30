#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() // switch case로 계산기
{
	int a, b;
	char c;
	printf("수식을 한 줄로 입력하세요 :");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d입니다.\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d입니다.\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d입니다.\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %.2f입니다.\n", a, b, (float)a / (float)b);
		break;
	case '%':
		printf("%d %% %d = %d입니다.\n", a, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다.\n");
	}
}