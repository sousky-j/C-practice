#include <stdio.h>

void main()
{
	int a=0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 4) == 0)
			a += i;
	}
	printf("1���� 100���� ���� �� 3�� ����ų� 4�� ����� ������ ��: %d", a);
}