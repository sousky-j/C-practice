#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

int main() // 9_2-디버거 사용해보기
{
	int a, b;
	scanf("%d", &a);

	if (a == 10)
	{
		b = a + 10;
	}
	else
		b = a;
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}