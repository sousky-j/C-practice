#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void main() // 13_1-포인터를 이용한 배열의 정렬
{
	int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
	int k, tmp;
	int *p;
	p = s;

	printf("정렬 전 배열 s ==>");
	for (int i = 0; i < 10; i++)
		printf("%d ", s[i]);

	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		k = i + 1;
		for (k; k <= 9; k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}

	printf("정렬 후 배열 s ==>");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", s[i]);
	}
}