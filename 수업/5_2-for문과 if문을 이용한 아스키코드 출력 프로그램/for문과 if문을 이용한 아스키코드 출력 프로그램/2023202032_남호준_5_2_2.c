#include <stdio.h>

void main() // 5_2-for���� if���� �̿��� �ƽ�Ű�ڵ� ��� ���α׷�
{
	for (int i = 0; i <= 127; i++)
	{
		if ((i % 16) == 0)
		{
			printf("-----------------------\n");
			printf("10����  16����  ����\n");
			printf("-----------------------\n");
		}
		printf("%4d\t%x\t%3c\n", i, i, i);
	}
}