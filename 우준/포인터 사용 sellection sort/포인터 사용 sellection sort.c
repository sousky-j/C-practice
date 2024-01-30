#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)

void main()
{
	int a[10] = { 0 };
	int* p;
	int tmp;
	p = a;
	printf("숫자 입력하기\n");
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 9; i++)
	{
		for (int k = i + 1; k < 10; k++)
		{
			if (*(p + i) < *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("정렬 후 배열 ==>");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
}