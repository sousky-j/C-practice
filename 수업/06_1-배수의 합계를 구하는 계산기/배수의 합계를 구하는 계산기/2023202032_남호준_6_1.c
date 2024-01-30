#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 배수의 합계를 구하는 계산기
{
	int a, b, c, d = 0, i;

	printf("합계의 시작값 ==>");
	scanf("%d", &a);
	printf("합계의 끝값 ==>");
	scanf("%d", &b);
	printf("배수 ==>");
	scanf("%d", &c);

	i = a;
	while (i <= b)
	{
		if ((i % c) == 0)
			d += i;
		i++;
	}
	printf("%d부터 %d까지의 %d배수의 합계: %d", a, b, c, d);
}