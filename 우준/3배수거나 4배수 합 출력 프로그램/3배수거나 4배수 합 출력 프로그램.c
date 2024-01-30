#include <stdio.h>

void main()
{
	int a=0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 4) == 0)
			a += i;
	}
	printf("1부터 100까지 정수 중 3의 배수거나 4의 배수인 수들의 합: %d", a);
}