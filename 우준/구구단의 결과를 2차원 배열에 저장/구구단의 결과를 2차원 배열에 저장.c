#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main()
{
	int a[9][9] = { 0 };

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			a[j][i] = (i + 1) * (j + 1);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%dX%d=%3d\t", j+1, i+1, a[j][i]);
		}
		printf("\n");
	}
}