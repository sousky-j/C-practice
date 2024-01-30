#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 9_2-디버거 사용해보기 (3)
{
	int ar1[] = {1, 2, 3};
	int ar2[] = {4, 5, 6};

	int i, sum;
	printf("Loop start!!\n");

	for (i = 0; i < sizeof(ar1) / sizeof(int); i++)
	{
		sum = ar1[i] + ar2[i];

		printf("Loop %d: %d + %d = %d\n", i, ar1[i], ar2[i], sum);
	}

	return 0;
}