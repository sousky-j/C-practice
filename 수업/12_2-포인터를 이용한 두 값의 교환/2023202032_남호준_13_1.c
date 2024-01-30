#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)
#pragma warning(disable : 6328)
void main() // 12_2-포인터를 이용한 두 값의 교환
{
	int a, b, tmp;
	int *p1, *p2;

	printf("a값 입력: ");
	scanf("%d", &a);
	printf("b값 입력: ");
	scanf("%d", &b);
	p1 = &a;
	p2 = &b;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d", *p1, *p2);
}