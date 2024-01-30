#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma(disable : 6031)

int adder(int input1, int input2);

void main() // 9_2-디버거 사용해보기 (2)
{
	int a, b, result;

	scanf("%d", &a);
	scanf("%d", &b);

	result = adder(a, b);

	printf("%d + %d = %d", a, b, result);

	return 0;
}

int adder(int input1, int input2)
{
	int result = input1 + input2;

	return result;
}