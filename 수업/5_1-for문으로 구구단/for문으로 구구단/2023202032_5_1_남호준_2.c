#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() // for문으로 구구단
{
	int d;
	printf("몇 단?");
	scanf("%d", &d);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", d, i, d * i);
	}
}