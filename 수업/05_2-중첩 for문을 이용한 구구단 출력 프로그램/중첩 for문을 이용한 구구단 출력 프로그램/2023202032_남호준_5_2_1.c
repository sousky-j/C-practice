#include <stdio.h>
void main() // ��ø for���� �̿��� ������ ��� ���α׷�
{
	printf(" ");
	for (int i = 2; i <= 9; i++)
		printf(" #��%d��# ", i);
	printf("\n");
	for (int a = 1; a <= 9; a++)
	{
		printf("\n");
		for (int b = 2; b <= 9; b++)
			printf(" %2dX%d=%2d ", b, a, a * b);
	}
}