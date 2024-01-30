#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 11_2-구구단의 결과를 2차원 배열에 저장
{
	int a[9][9];
	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < 9; j++)
		{
			a[i][j] = (j + 1) * (i + 1);
			printf("%dX%d=%2d ", j + 1, i + 1, a[i][j]);
		}
		printf("\n");
	}
}