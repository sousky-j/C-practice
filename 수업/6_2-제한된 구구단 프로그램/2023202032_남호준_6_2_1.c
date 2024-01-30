#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 6_2-제한된 구구단 프로그램
{
	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1)
			continue;
		for (int j = 1; j <= 9; j++)
		{
			if (j > i)
				break;
			printf("%2dX%d=%2d", i, j, i * j);
		}
		printf("\n");
	}
}